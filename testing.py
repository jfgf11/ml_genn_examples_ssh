import ml_genn as mlg
import tensorflow as tf
from tensorflow.keras import models, layers

for gpu in tf.config.experimental.list_physical_devices('GPU'):
    tf.config.experimental.set_memory_growth(gpu, True)


#tf_model = models.load_model('simple_cnn_tf_model')
#tf_model = tf.keras.applications.resnet.ResNet50()






# # =============== SEQUENTIAL MODEL =============

# tf_model = models.Sequential(name='sequential_model')

# tf_model.add(layers.Input(shape=(32, 32, 3), name='in'))

# tf_model.add(layers.Conv2D(32, 3, padding='same', activation='relu', use_bias=False, name='b1c1'))
# tf_model.add(layers.Conv2D(64, 3, padding='same', activation='relu', use_bias=False, name='b1c2'))
# tf_model.add(layers.AveragePooling2D(2, name='b1p'))

# tf_model.add(layers.Conv2D(64, 3, padding='same', activation='relu', use_bias=False, name='b2c1'))
# tf_model.add(layers.Conv2D(64, 3, padding='same', activation='relu', use_bias=False, name='b2c2'))
# tf_model.add(layers.AveragePooling2D(2, name='b2p'))

# tf_model.add(layers.Flatten())
# tf_model.add(layers.Dense(256, activation='relu', use_bias=False, name='d1'))
# tf_model.add(layers.Dense(10, activation='relu', use_bias=False, name='d2'))

# #tf_model.summary()

# mlg_model = mlg.Model.convert_tf_model(tf_model)
# mlg_model.summary()





# =============== FUNCTIONAL MODEL =============

inputs =  layers.Input(shape=(32, 32, 3), name='in')

b1c1 =    layers.Conv2D(32, 3, padding='same', activation='relu', use_bias=False, name='b1c1')(inputs)
b1c2 =    layers.Conv2D(64, 3, padding='same', activation='relu', use_bias=False, name='b1c2')(b1c1)
b1p =     layers.AveragePooling2D(2, name='b1p')(b1c2)

b2c1 =    layers.Conv2D(64, 3, padding='same', activation='relu', use_bias=False, name='b2c1')(b1p)
b2c2 =    layers.Conv2D(64, 3, padding='same', activation='relu', use_bias=False, name='b2c2')(b2c1)
b2p =     layers.AveragePooling2D(2, name='b2p')(b2c2)

b1 =      layers.AveragePooling2D(4, name='b1')(b1c2)
b2 =      b2p
add =     layers.add([b1, b2])

flat =    layers.Flatten()(add)
d1 =      layers.Dense(256, activation='relu', use_bias=False, name='d1')(flat)
d2 =      layers.Dense(10, activation='relu', use_bias=False, name='d2')(d1)

outputs = d2

tf_model = models.Model(inputs, outputs, name='functional_model')
#tf_model.summary()

mlg_model = mlg.Model.convert_tf_model(tf_model)
mlg_model.summary()
