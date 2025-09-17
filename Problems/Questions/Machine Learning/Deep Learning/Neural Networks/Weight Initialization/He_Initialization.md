# He Initialization in Neural Networks

## Introduction
**He initialization**, also known as Kaiming initialization, is a widely used and effective strategy for initializing the weights of deep neural networks. Introduced by Kaiming He et al., this technique was specifically designed to address the **vanishing and exploding gradient problem** when using non-saturating activation functions like the **Rectified Linear Unit (ReLU)**. By setting the initial weights of the network according to a carefully chosen variance, He initialization ensures that the signal (both activations and gradients) can propagate effectively through deep architectures, enabling stable and efficient training.

## The Problem: Vanishing and Exploding Gradients
In a deep network, the output of one layer becomes the input to the next. This involves a sequence of matrix multiplications.
-   If the weights are, on average, too small, the variance of the activations will shrink as it passes through each layer, eventually vanishing to zero. This leads to **vanishing gradients** during backpropagation, and the network stops learning.
-   If the weights are, on average, too large, the variance will grow exponentially, leading to **exploding activations** and **exploding gradients**, causing the training process to become unstable and diverge.

The goal of a good initialization scheme is to ensure that the variance of the activations and gradients remains roughly constant as they propagate through the network.

## The He Initialization Method
The core insight of He initialization is that the choice of the correct initial variance for the weights depends on the **activation function** being used. The popular Xavier/Glorot initialization was derived for symmetric activations like `tanh`. However, the **ReLU** activation, $f(x)=\max(0,x)$, sets all negative inputs to zero, which effectively halves the variance of its inputs.

To compensate for this, He initialization doubles the variance of the weights.

### The Rule
For a weight matrix in a layer with $n_{in}$ input connections, the weights should be drawn from a distribution with a mean of 0 and a variance of:

$$Var(W) = \frac{2}{n_{in}}$$

### Practical Implementations
This is typically implemented in one of two ways:
1.  **He Normal Initialization**: Weights are drawn from a normal distribution $\mathcal{N}(0, \sigma^2)$ where the standard deviation is:

$$\sigma = \sqrt{\frac{2}{n_{in}}}$$

2.  **He Uniform Initialization**: Weights are drawn from a uniform distribution in the range $[-b, b]$ where the bound $b$ is:

$$b = \sqrt{\frac{6}{n_{in}}}$$

## Comparison with Xavier/Glorot Initialization
| Initialization Method | Recommended Activation | Variance ($Var(W)$) |
|---|---|---|
| **Xavier/Glorot** | `tanh`, `sigmoid`, `softmax` | $\frac{1}{n_{in}}$ or $\frac{2}{n_{in} + n_{out}}$ |
| **He** | **`ReLU`** and its variants (Leaky ReLU, etc.) | $\mathbf{\frac{2}{n_{in}}}$ |

**Rule of Thumb**: Use Xavier/Glorot initialization for saturating activation functions like `tanh` and `sigmoid`. For modern deep learning networks that predominantly use `ReLU` and its variants, **He initialization is the standard and recommended choice**.

## Example
**Scenario**: We are initializing a fully connected hidden layer in a deep network that uses ReLU activation. This layer receives input from a previous layer with **512 neurons**.
-   The number of input connections to each neuron in our current layer is $n_{in} = 512$.

**He Initialization Calculation:**
-   According to the He normal initialization rule, the variance of the weights should be:

$$Var(W) = \frac{2}{512} = \frac{1}{256}$$

-   The standard deviation is therefore:

$$\sigma = \sqrt{\frac{1}{256}} = \frac{1}{16} = 0.0625$$

**Conclusion**: The weights for this layer should be drawn from a normal distribution with a mean of 0 and a standard deviation of 0.0625, i.e., $`\mathcal{N}(0, 0.0625^2)`$.

## Properties
-   **Variance Consistency**: Its primary purpose is to maintain the variance of activations as they pass through the layers, preventing the signal from dying out or exploding.
-   **Gradient Stability**: By keeping the activation variances stable, it also helps maintain a healthy scale for the gradients during backpropagation, leading to stable training.
-   **ReLU Compatibility**: It is mathematically derived to work specifically with the properties of ReLU and its variants, which are the most common activators in modern deep learning.

## Applications
He initialization is the **default and recommended** initialization strategy in all modern deep learning frameworks (like PyTorch and TensorFlow) for layers that are followed by a ReLU-family activation function. It is used in virtually all modern deep learning architectures:
-   **Computer Vision**: For training deep **Convolutional Neural Networks (CNNs)** like ResNet, VGG, etc.
-   **Natural Language Processing**: For initializing the weights in deep **Transformer** models and other NLP architectures.
-   **Generative Models**: Facilitating the stable training of **Generative Adversarial Networks (GANs)** and autoencoders.

In summary, He initialization is a simple but critical innovation that was a key enabler for the successful training of very deep neural networks. By correctly accounting for the statistical properties of the ReLU activation function, it has become the standard for building stable and efficient deep learning models.