import tempfile
import os

import tensorflow as tf
from tensorflow.keras import datasets, layers, models
from tensorflow.keras.utils import to_categorical

# Load MNIST dataset
mnist = tf.keras.datasets.mnist
(train_images, train_labels), (test_images, test_labels) = mnist.load_data()

image = train_images[0].reshape(-1)
# Open a file in write mode
with open('image.txt', 'w') as f:
    # Write some content to the file
    for pixel in image:
        f.write(f"{pixel}, ")

# train_labels = to_categorical(train_labels)
# test_labels = to_categorical(test_labels)

# train_images = train_images.reshape(train_images.shape[0], -1)
# test_images = test_images.reshape(test_images.shape[0], -1)

# # Define the model architecture.
# model = models.Sequential()
# model.add(layers.Dense(units=128, activation="relu", input_shape = (784,)))
# model.add(layers.Dense(units=128, activation="relu"))
# model.add(layers.Dense(units=128, activation="relu"))
# model.add(layers.Dense(units=10, activation="softmax"))
# model.compile(optimizer='adam',loss="categorical_crossentropy",metrics=["accuracy"])
# model.fit(train_images, train_labels, batch_size=1, epochs=1, verbose=2)

# # score = model.evaluate(test_images, test_labels, batch_size=1)
# # print(score)
