import tensorflow as tf
import numpy as np

train_1 = np.loadtxt('data.txt')
answer = np.loadtxt('answer.txt')
train_2 = answer.reshape((answer.shape[0],1))
input_1 = tf.placeholder(tf.float32, shape = [None, 32])
input_2 = tf.placeholder(tf.float32, shape = [None, 1])
weight_1 = tf.get_variable(name = "weight_1", shape = [32,16], dtype = tf.float32, initializer = tf.truncated_normal_initializer(mean=0.0, stddev=0.1))
bias_1 = tf.get_variable(name='bias_1', shape= [16], dtype= tf.float32, initializer= tf.truncated_normal_initializer(mean=0.0, stddev=0.1))
layer_1_output = tf.add(tf.matmul( input_1, weight_1 ), bias_1)
weight_2 = tf.get_variable(name = "weight_2", shape = [16,8], dtype = tf.float32, initializer = tf.truncated_normal_initializer(mean=0.0, stddev=0.1))
bias_2 = tf.get_variable(name='bias_2', shape= [8], dtype= tf.float32, initializer= tf.truncated_normal_initializer(mean=0.0, stddev=0.1))
layer_2_output =  tf.add( tf.matmul( layer_1_output, weight_2 ), bias_2)
weight_3 = tf.get_variable(name = "weight_3", shape = [8,4], dtype = tf.float32, initializer = tf.truncated_normal_initializer(mean=0.0, stddev=0.05))
bias_3 = tf.get_variable(name='bias_3', shape= [4], dtype= tf.float32, initializer= tf.truncated_normal_initializer(mean=0.0, stddev=0.05))
layer_3_output =  tf.add( tf.matmul( layer_2_output, weight_3 ), bias_3)
weight_last = tf.get_variable(name = "weight_last", shape = [4,1], dtype = tf.float32, initializer = tf.truncated_normal_initializer(mean=0.0, stddev=0.05))
bias_last = tf.get_variable(name='bias_last', shape= [1], dtype= tf.float32, initializer= tf.truncated_normal_initializer(mean=0.0, stddev=0.05))
layer_last_output = tf.sigmoid( tf.add( tf.matmul( layer_3_output, weight_last ), bias_last) )

loss = tf.losses.mean_squared_error(train_2, layer_last_output)
optimizer = tf.train.GradientDescentOptimizer(0.1)
train = optimizer.minimize(loss)

with tf.Session() as sess:
    init = tf.global_variables_initializer()
    sess.run( init )
    loss_array = []
    accuracy_array = []
    for step in range(475):
        loss_value = sess.run(loss, feed_dict = {input_1: train_1, input_2: train_2})
        accuracy_value = sess.run(layer_last_output, feed_dict = {input_1: train_1})
        loss_array.append(loss_value)
        accuracy_array.append(accuracy_value)
        if step % 20 == 0:
            print('loss: ', loss_value )
            print('predict: ',  accuracy_value)
        sess.run(train, feed_dict = {input_1: train_1, input_2: train_2})

  