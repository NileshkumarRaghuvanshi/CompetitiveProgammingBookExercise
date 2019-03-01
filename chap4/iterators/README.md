1 2 4 5 6 9 
1
1 2 4 5 6 9 printing smallest and largest number
1<-- this is smallest number in set
9<-- This is largetst number in set
The number 7 is not present in set
Understanding lower_bound and upper_bound API
lower bound for 3 is 4
upper bound for 3 is 4
lower bound for 6 is 6
upper bound for 6 is 9



#### Convolution
Convolution defines way of multiplying two object together in a certain way. Convolution is a concept used in different fields like, signal processing image processing, audio proecssing.
In image processing the image is convolve with different filter to detect different feature form the image.
There are different types of kernels like, edge detector which detects edge from the image when convolved with the image
Blur kernel will make the image look blur.
Convolution is performed by sliding the kernel over the image and then summing all the number in the multiplication and returning one number.

#### Filter/Kernel

Kernel/Feature in image processing is a small matrix compared to the image. 
This small matrix can be used to enhance some portion of the image or filter out few features of the image, like eyes of the person, or ears, etc.
That is why it is also called as feature extractor. There are few standard filter available for blurring an image or sharpening an image


#### 3x3 Convolution

3x3 convolution indicate the kernel is of size 3x3. The convolution uses two option while convolving an filter with image
1. Strides

 ...This defines the steps to be taken for moving the kernel to the next position in the image. More the strides, smaller the resultant matrix.

 ...For the stride of 0 the image dimension reduces by 2.
2. Pinaddg

 ...This is used mainly to increase/maintain the result matrix size same as original matrix
 ...Equation for finding the final result dimension after applying the strides (S) and padding(P) on matrix of size (NXN) and convolving with mxm kernel is  ( N - m +2p)/S + 1


#### Receptive Field

Receptive Field is indicate the view of actual image from the current layer in the neural network.
If you tale all the neurons connected from the current layer to all the lower layer and project them on the original image.
The projected portion of the original image or first layer is the receptive filed of the current layer. 
The higher layers in neural net are connected to fewer neurons in the previous layer. 
This can be also said as higher layer neurons will see several receptive fields of lower layers.
so this way the more we move towards higher layer the total receptive field of the neuron increases and can reach up to full image


### Activation Function

Activation function is used as the output of a neuron. The activation help bounding the output of a function to specific value range. 
There are different type of activation functions Below are few most commonly used:
1. Relu

... Used when you want to transfer output of the value in range of (0, infinity), This help mask all the negative value
2. Sigmoid

... Used when you want to transfer output of the value in range of (0, 1)
3. Tanh

... Used when you want to transfer output of the value in range of (-1, 1)
