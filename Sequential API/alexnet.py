import tensorflow as tf
from tensorflow.compat.v1 import ConfigProto
from tensorflow.compat.v1 import InteractiveSession

#Configure GPU
config = ConfigProto()
config.gpu_options.allow_growth = True
session = InteractiveSession(config=config)

for gpu in tf.config.experimental.list_physical_devices('GPU'):
    tf.config.experimental.set_memory_growth(gpu, True)
    print(tf.config.experimental.get_memory_growth(gpu))

from tensorflow.keras import (models, layers, datasets, callbacks, optimizers,
                              initializers, regularizers)
from tensorflow.keras.utils import CustomObjectScope
from tensorflow.keras.preprocessing.image import ImageDataGenerator
from sklearn.preprocessing import OneHotEncoder
import matplotlib.pyplot as plt
import os
import time
import numpy as np
from six import iteritems
from time import perf_counter
from ml_genn import Model
from ml_genn.utils import parse_arguments, raster_plot

if __name__ == '__main__':
    args = parse_arguments('AlexNet classifier model')
    print('arguments: ' + str(vars(args)))

    #check if tensorflow is running on GPU
    print(tf.test.is_gpu_available())
    print(tf.test.is_built_with_cuda())

    n_norm_samples=1000
    #Load Dataset
    (x_train, y_train), (x_test, y_test) = datasets.cifar10.load_data()

    train_ds = tf.data.Dataset.from_tensor_slices((x_train, y_train))


    #Normalize data
    x_train = x_train / 255.0
    x_test = x_test / 255.0

    #OneHotEncoder
    encoder = OneHotEncoder()
    encoder.fit(y_train)
    y_train = encoder.transform(y_train).toarray()
    y_test = encoder.transform(y_test).toarray()


    index_norm=np.random.choice(x_train.shape[0], n_norm_samples, replace=False)
    x_norm = x_train[index_norm]
    y_norm = y_train[index_norm]


    # Create L2 regularizer
    regularizer = regularizers.l2(0.000001)

    # Create image data generator
    data_gen = ImageDataGenerator(width_shift_range=0.8,height_shift_range=0.8,rotation_range=30,zoom_range=0.1,
    shear_range=0.01)
    # Get training iterator
    iter_train = data_gen.flow(x_train, y_train, batch_size=256)

    initializer="he_uniform"

    tf_model = models.Sequential([
        layers.Conv2D(filters=96,kernel_size=(11,11), padding='same', activation='relu', use_bias=False,
        kernel_initializer=initializer, kernel_regularizer=regularizer,input_shape=(32,32,3)),
        layers.AveragePooling2D(2),
        layers.Conv2D(filters=256, kernel_size=(5,5),  activation='relu', padding="same", use_bias=False,
        kernel_initializer=initializer, kernel_regularizer=regularizer),
        layers.AveragePooling2D(2),
        layers.Conv2D(filters=384, kernel_size=(3,3),  activation='relu', padding="same", use_bias=False,
        kernel_initializer=initializer, kernel_regularizer=regularizer),
        layers.Conv2D(filters=384, kernel_size=(3,3), activation='relu', padding="same", use_bias=False,
        kernel_initializer=initializer, kernel_regularizer=regularizer),
        layers.Conv2D(filters=256, kernel_size=(3,3), activation='relu', padding="same", use_bias=False,
        kernel_initializer=initializer, kernel_regularizer=regularizer),
        layers.AveragePooling2D(2),
        layers.Flatten(),
        layers.Dense(4096, activation='relu', use_bias=False, kernel_regularizer=regularizer),
        layers.Dense(4096, activation='relu', use_bias=False, kernel_regularizer=regularizer),
        layers.Dense(10, activation='softmax', use_bias=False, kernel_regularizer=regularizer)
    ],name="alexnet")

    tf_model.summary()

    if args.reuse_tf_model:
        tf_model = models.load_model('alexnet_tf_model')
    else:
        optimizer = optimizers.SGD(lr=0.04, momentum=0.9)
        tf_model.compile(loss='categorical_crossentropy', optimizer=optimizer, metrics=['accuracy'])
        checkpoint_path = "training_1/cp.ckpt"
        checkpoint_dir = os.path.dirname(checkpoint_path)
        cp_callback = tf.keras.callbacks.ModelCheckpoint(filepath=checkpoint_path,
                                                        save_weights_only=True,
                                                        verbose=1,
                                                        save_best_only=True,
                                                        monitor='val_accuracy')

        #train TensorFlow model
        steps_per_epoch = x_train.shape[0] // 256
        tf_model.fit(iter_train, steps_per_epoch=steps_per_epoch, epochs=200, callbacks=cp_callback, validation_data=(x_test,y_test))
        #Save alexnet_tf_model
        models.save_model(tf_model, 'alexnet_tf_model', save_format='h5')

    #Evaluate TensorFlow model
    tf_model.evaluate(x_test, y_test)

    tf_eval_start_time = perf_counter()
    tf_model.evaluate(x_test, y_test)
    print("TF evaluation:%f" % (perf_counter() - tf_eval_start_time))

    # Create a suitable converter to convert TF model to ML GeNN
    converter = args.build_converter(x_norm, K=10, norm_time=500)

    # Convert and compile ML GeNN model
    mlg_model = Model.convert_tf_model(
        tf_model, converter=converter, connectivity_type=args.connectivity_type,
        input_type=args.input_type, dt=args.dt, batch_size=args.batch_size, rng_seed=args.rng_seed, 
        kernel_profiling=args.kernel_profiling)

    time = 10 if args.converter == 'few-spike' else 500
    mlg_eval_start_time = perf_counter()
    acc, spk_i, spk_t = mlg_model.evaluate([x_test], [y_test], time, save_samples=args.save_samples)
    print("MLG evaluation:%f" % (perf_counter() - mlg_eval_start_time))

    if args.kernel_profiling:
        print("Kernel profiling:")
        for n, t in iteritems(mlg_model.get_kernel_times()):
            print("\t%s: %fs" % (n, t))

    # Report ML GeNN model results
    print('Accuracy of AlexNet GeNN model: {}%'.format(acc[0]))
    if args.plot:
        neurons = [l.neurons.nrn for l in mlg_model.layers]
        raster_plot(spk_i, spk_t, neurons, time=time)