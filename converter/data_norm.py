import tensorflow as tf
import numpy as np
from collections import namedtuple

from ml_genn.layers import InputType
from ml_genn.layers import IFNeurons
from ml_genn.layers import SpikeInputNeurons
from ml_genn.layers import PoissonInputNeurons
from ml_genn.layers import IFInputNeurons

# Because we want the converter class to be reusable, we don't want the
# normalisation data to be a member, instead we encapsulate it in a tuple
PreCompileOutput = namedtuple('PreCompileOutput', ['thresholds'])

class DataNorm(object):
    def __init__(self, norm_data, input_type=InputType.POISSON):
        self.norm_data = norm_data
        self.input_type = InputType(input_type)

    def get_connections(self, layer, relevant_nodes):
        info = {}
        connections = []
        for node in layer._inbound_nodes:
            if relevant_nodes and node not in relevant_nodes:
                continue
            for inbound_layer, node_index, tensor_index, _ in node.iterate_inbound():
                connections.append(inbound_layer.name)

            return layer.__class__.__name__, connections



    def validate_tf_layer(self, tf_layer):
        if tf_layer.activation != tf.keras.activations.relu:
            raise NotImplementedError('{} activation not supported'.format(type(tf_layer.activation)))
        if tf_layer.use_bias == True:
            raise NotImplementedError('bias tensors not supported')

    def create_input_neurons(self, pre_compile_output):
        if self.input_type == InputType.SPIKE:
            return SpikeInputNeurons()
        elif self.input_type == InputType.SPIKE_SIGNED:
            return SpikeInputNeurons(signed_spikes=True)
        elif self.input_type == InputType.POISSON:
            return PoissonInputNeurons()
        elif self.input_type == InputType.POISSON_SIGNED:
            return PoissonInputNeurons(signed_spikes=True)
        elif self.input_type == InputType.IF:
            return IFInputNeurons()

    def create_neurons(self, tf_layer, pre_compile_output):
        return IFNeurons(threshold=pre_compile_output.thresholds[tf_layer])

    def pre_compile(self, tf_model):
        relevant_nodes = []
        for v in tf_model._nodes_by_depth.values():
            relevant_nodes += v

        layer_to_childs = {} # this will have all layers reference to their children
        special_layers = {} #this will have the special layers that have more than one child, it will specify what threshold should these layers take at the end of all operations
        for layer in tf_model.layers:
            class_type, connections = self.get_connections(layer, relevant_nodes) # thid returns the connections of a layer
            # we reorganize each layer in a dict to know its current childs
            for connection in connections:
                if connection in layer_to_childs.keys():
                    layer_to_childs[connection]['type'] = class_type
                    layer_to_childs[connection]['childs'].append(layer)
                else:
                    layer_to_childs[connection] = {'type' : class_type, 'childs' : [layer]}
                
                

                if len(layer_to_childs[connection]['childs']) > 1:
                    conv_reference = None
                    no_reference = []    
                    for child_layer in layer_to_childs[connection]['childs']:
                        if isinstance(child_layer, tf.keras.layers.Conv2D):
                            if child_layer.kernel_size != (1,1):
                                special_layers[child_layer.name] = {'layer' : child_layer}
                                conv_reference = child_layer
                            else:
                                if conv_reference:
                                    special_layers[child_layer.name] = {'layer' : conv_reference}
                                else:
                                    no_reference.append(child_layer.name)
                    for layer_name in no_reference:
                        special_laeyrs[child_layer.name] = {'layer' : conv_reference}
                    special_layers[connection] = {'layer' : conv_reference}
                
        # Get output functions for weighted layers.


        
        idx = [i for i, layer in enumerate(tf_model.layers)
            if len(layer.get_weights()) > 0]
        weighted_layers = [tf_model.layers[i] for i in idx]

        # this array will tell us what threshold to use for each of the layers.
        corresponding_index = [i if not(layer.name in special_layers.keys()) else weighted_layers.index(special_layers[layer.name]['layer']) for i, layer in enumerate(weighted_layers)]

        #weighted_layers = [weighted_layers[i] for i in corresponding_index]

        get_outputs = tf.keras.backend.function(
            tf_model.inputs, [layer.output for layer in weighted_layers])

        # Find the maximum activation in each layer, given input data.
        max_activation = np.array([np.max(out) for out in get_outputs(self.norm_data)],
                                dtype=np.float64)
        all_weights = tf_model.get_weights()
        corresponding_weights = all_weights #[all_weights[i] for i in corresponding_index]

        # Find the maximum weight in each layer.
        max_weights = np.array([np.max(w) for w in corresponding_weights],
                            dtype=np.float64)

        # Compute scale factors and normalize weights.
        scale_factors = np.max([max_activation, max_weights], 0)
        applied_factors = np.empty(scale_factors.shape, dtype=np.float64)
        applied_factors[0] = scale_factors[0]
        applied_factors[1:] = scale_factors[1:] / scale_factors[:-1]

        #applied_factors = applied_factors[corresponding_index]

        for layer, threshold in zip(weighted_layers, applied_factors):
            print('layer <{}> threshold: {}'.format(layer.name, threshold))

        # Build dictionary of thresholds for each layer
        thresholds = {layer: threshold for layer, threshold
                    in zip(weighted_layers, applied_factors)}

        return PreCompileOutput(thresholds=thresholds)

    def post_compile(self, mlg_model):
        pass
