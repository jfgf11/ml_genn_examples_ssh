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


if __name__ == '__main__':
    args = parse_arguments('Simple CNN classifier model')
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


    # Create, train and evaluate TensorFlow model
    # Create L2 regularizer
    regularizer = tf.keras.regularizers.l2(0.00001)
    kernel_init = 'he_uniform'

    # Creating the model
    tf_model = tf.keras.Sequential([
        tf.keras.layers.Conv2D(64, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False, input_shape=(32, 32, 3) ),
        # tf.keras.layers.Dropout(0.4),
        tf.keras.layers.Conv2D(64, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        # tf.keras.layers.Dropout(0.4),
        tf.keras.layers.AveragePooling2D((2,2), padding='same'),

        tf.keras.layers.Conv2D(128, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        # tf.keras.layers.Dropout(0.4),
        tf.keras.layers.Conv2D(128, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        # tf.keras.layers.Dropout(0.4),
        tf.keras.layers.AveragePooling2D((2,2), padding='same'),

        tf.keras.layers.Conv2D(256, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        # tf.keras.layers.Dropout(0.4),
        tf.keras.layers.Conv2D(256, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        # tf.keras.layers.Dropout(0.4),
        tf.keras.layers.AveragePooling2D((2,2), padding='same'),

        tf.keras.layers.Conv2D(512, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        # tf.keras.layers.Dropout(0.4),
        tf.keras.layers.Conv2D(512, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        # tf.keras.layers.Dropout(0.4),
        tf.keras.layers.AveragePooling2D((2,2), padding='same'),

        tf.keras.layers.Conv2D(512, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        #tf.keras.layers.Dropout(0.4),
        tf.keras.layers.Conv2D(512, (3,3), padding='same', activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        tf.keras.layers.Dropout(0.2),
        tf.keras.layers.AveragePooling2D((2,2), padding='same'),

        tf.keras.layers.Flatten(),

        tf.keras.layers.Dense(4096, activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        tf.keras.layers.Dropout(0.5),
        tf.keras.layers.Dense(4096, activation='relu', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False),
        tf.keras.layers.Dropout(0.5),
        tf.keras.layers.Dense(10, activation='softmax', kernel_initializer=kernel_init, kernel_regularizer=regularizer, use_bias=False)
    ])

    #optimizer = tf.keras.optimizers.RMSprop(lr=0.00001, momentum=0.9)
    #vgg13_model.summary()
    #vgg13_model.compile(optimizer='adam', loss='categorical_crossentropy', metrics=['accuracy'])

    if args.reuse_tf_model:
        tf_model = models.load_model('vgg13_tf_model')
    else:

        data_gen = tf.keras.preprocessing.image.ImageDataGenerator(horizontal_flip=True,
                                                           width_shift_range=0.05,
                                                           height_shift_range=0.05,
                                                           rotation_range=20,
                                                           zoom_range=0.2,
                                                           shear_range=0.1)
        data_gen.fit(train_images)

        checkpoint_path = "training_1/cp.ckpt"
        cp_callback = tf.keras.callbacks.ModelCheckpoint(filepath=checkpoint_path,
                                                 save_weights_only=True,
                                                 verbose=1,
                                                 save_best_only=True,
                                                 monitor='val_accuracy')

        tf_model.compile(optimizer='adam', loss='categorical_crossentropy', metrics=['accuracy'])
        tf_model.summary()
        steps_per_epoch = y_train.shape[0] // 128
        tf_model.fit(data_gen.flow(x_train, y_train, batch_size=128),
           validation_data=(x_test, y_test), 
           epochs=200,
           steps_per_epoch=steps_per_epoch,
           batch_size=128,
           callbacks=[cp_callback])
        # The model weights (that are considered the best) are loaded into the model.
        tf_model.load_weights(checkpoint_path)
        models.save_model(tf_model, 'vgg13_tf_model', save_format='h5')

    tf_eval_start_time = perf_counter()
    tf_model.evaluate(x_test, y_test)
    print("TF evaluation:%f" % (perf_counter() - tf_eval_start_time))

    # Create, suitable converter to convert TF model to ML GeNN
    converter = args.build_converter([x_norm], K=10, norm_time=2500)
    
    #DataNorm(input_type='poisson', norm_data=[x_norm])

    #FewSpike(K=10, signed_input=True, norm_data=[x_norm]) 


    # Convert and compile ML GeNN model
    mlg_model = Model.convert_tf_model(
        tf_model, converter=converter, connectivity_type='procedural',
        dt=1.0, batch_size=1, rng_seed=0, 
        kernel_profiling=True)
    
    time = 5000
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
