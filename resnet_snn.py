import tensorflow as tf
from ml_genn import Model
from ml_genn.converters import DataNorm, SpikeNorm, FewSpike, Simple
from ml_genn.utils import parse_arguments, raster_plot
import numpy as np
from six import iteritems
from time import perf_counter
from sklearn.preprocessing import OneHotEncoder
from tensorflow.keras import (models)
from ml_genn.utils import parse_arguments, raster_plot
from tensorflow.keras.utils import model_to_dot



def resnetFunctionalIdentity(input_layer, filters, identity_cnn=False, drop_out_layer = False):
  strides = [2, 1] if identity_cnn else [1, 1]
  KERNEL_SIZE = (3,3)
  W_INIT = 'he_normal'
  #regularizer = tf.keras.regularizers.l2(0.00001) #0.0001

  x = tf.keras.layers.Conv2D(filters, kernel_size=KERNEL_SIZE, padding='same', strides=strides[0], kernel_initializer=W_INIT, use_bias=False, activation='relu' )(input_layer)
  x = tf.keras.layers.Conv2D(filters, kernel_size=KERNEL_SIZE, padding='same', strides=strides[1], kernel_initializer=W_INIT, use_bias=False, activation='relu' )(x)

  res = tf.keras.layers.Conv2D(filters, kernel_size=(1,1), padding='same', strides=2, kernel_initializer=W_INIT, use_bias=False, activation='relu')(input_layer) if identity_cnn else input_layer
  
  # if final_layer:
  #   res = tf.keras.layers.GlobalAveragePooling2D()(res)
  #   x = tf.keras.layers.GlobalAveragePooling2D()(x)

  x = tf.keras.layers.Add()([x, res])
  if drop_out_layer:
    x = tf.keras.layers.Dropout(0.1)(x)
  return x

def resnet18(num_classes):
  regularizer = tf.keras.regularizers.l2(0.0001) #0.0001

  input = tf.keras.layers.Input(shape=(32,32,3))
  x = tf.keras.layers.Conv2D(64, (7,7), padding='same', kernel_initializer='he_normal', activation='relu', use_bias=False)(input)
  x = tf.keras.layers.AveragePooling2D((3,3))(x)

  x = resnetFunctionalIdentity(x, 64)
  x = resnetFunctionalIdentity(x, 64)
  
  counter = -1
  for i in range(1, 7):
    counter += 1 if i%2==1 else 0
    drop_out_layer = True if i > 5 else False

    # final_layer = True if i == 6 else False
    x = resnetFunctionalIdentity(x, 128*(2**counter), i%2, drop_out_layer)
  
  x = tf.keras.layers.Flatten()(x)

  x = tf.keras.layers.Dense(num_classes, activation='softmax', use_bias=False)(x)

  model = tf.keras.Model(inputs=input, outputs=x, name='Resnet18')

  return model

if __name__ == '__main__':
    args = parse_arguments('Resnet classifier')
    print('arguments: ' + str(vars(args)))

    for gpu in tf.config.experimental.list_physical_devices('GPU'):
        tf.config.experimental.set_memory_growth(gpu, True)

    tf.random.set_seed(2345)
    np.random.seed(2345)

    # Retrieve and normalise CIFAR-10 dataset
    (x_train, y_train), (x_test, y_test) = tf.keras.datasets.cifar10.load_data()

    # apparently the OneHotEncoder improves the measurements.... it did...
    encoder = OneHotEncoder()
    encoder.fit(y_train)
    y_train = encoder.transform(y_train).toarray()
    y_test = encoder.transform(y_test).toarray()


    x_train = x_train / 255.0
    x_test = x_test / 255.0
    x_norm = x_train[np.random.choice(x_train.shape[0], 256, replace=False)]


    # Check input size
    if x_train.shape[1] < 32 or x_train.shape[2] < 32:
        raise ValueError('input must be at least 32x32')

    # Creating the model
    tf_model = resnet18(10)
    tf_model.build(input_shape = (None,32,32,3))

    if args.reuse_tf_model:
        tf_model = models.load_model('resnet_tf_model')
        #SVG(model_to_dot(tf_model, show_shapes = True, expand_nested = True, dpi = 50).create(prog='dot', format='svg'))
    else:

        data_gen = tf.keras.preprocessing.image.ImageDataGenerator(horizontal_flip=True,
                                                           width_shift_range=0.05,
                                                           height_shift_range=0.05,
                                                           rotation_range=20,
                                                           zoom_range=0.2,
                                                           shear_range=0.1)
        

        data_gen.fit(x_train)

        checkpoint_path = "training_1/cp.ckpt"
        cp_callback = tf.keras.callbacks.ModelCheckpoint(filepath=checkpoint_path,
                                                 save_weights_only=True,
                                                 verbose=1,
                                                 save_best_only=True,
                                                 monitor='val_accuracy')

        tf_model.compile(optimizer='adam', loss='categorical_crossentropy', metrics=['accuracy'])
        tf_model.summary()
        #SVG(model_to_dot(tf_model, show_shapes = True, expand_nested = True, dpi = 50).create(prog='dot', format='svg'))

        steps_per_epoch = y_train.shape[0] // 256
        tf_model.fit(data_gen.flow(x_train, y_train, batch_size=256),
           validation_data=(x_test, y_test), 
           epochs=200,
           steps_per_epoch=steps_per_epoch,
           batch_size=256,
           callbacks=[cp_callback])
        # The model weights (that are considered the best) are loaded into the model.
        tf_model.load_weights(checkpoint_path)
        
        models.save_model(tf_model, 'resnet_tf_model', save_format='h5')

    tf_eval_start_time = perf_counter()
    tf_model.evaluate(x_test, y_test)
    print("TF evaluation:%f" % (perf_counter() - tf_eval_start_time))

    # Create, suitable converter to convert TF model to ML GeNN
    converter = args.build_converter(x_norm, K=10, norm_time=2500)


    # Convert and compile ML GeNN model
    mlg_model = Model.convert_tf_model(
        tf_model, converter=converter, connectivity_type='procedural',
        dt=1.0, batch_size=1, rng_seed=0, 
        kernel_profiling=True)
    
    time = 2500
    mlg_eval_start_time = perf_counter()
    acc, spk_i, spk_t = mlg_model.evaluate([x_test], [y_test], time, save_samples=args.save_samples)
    print("MLG evaluation:%f" % (perf_counter() - mlg_eval_start_time))

    if args.kernel_profiling:
        print("Kernel profiling:")
        for n, t in iteritems(mlg_model.get_kernel_times()):
            print("\t%s: %fs" % (n, t))

    # Report ML GeNN model results
    print('Accuracy of VGG13 GeNN model: {}%'.format(acc[0]))
    if args.plot:
        neurons = [l.neurons.nrn for l in mlg_model.layers]
        raster_plot(spk_i, spk_t, neurons, time=time)
