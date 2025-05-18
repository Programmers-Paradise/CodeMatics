# SELU Activation Function
The SELU (Scaled Exponential Linear Unit) is a self-normalizing activation function introduced in 2017 as part of Self-Normalizing Neural Networks. Unlike ReLU or tanh, SELU is designed to automatically normalize the mean and variance of its activations throughout the network, which helps improve training stability and convergence.

## What is SELU?
SELU stands for Scaled Exponential Linear Unit. It is an improvement over ELU (Exponential Linear Unit) and combines scale ($\lambda$) and shift ($\alpha$) factors to ensure that neuron outputs maintain zero mean and unit variance across layers — crucial for deep networks.

The function behaves like a linear identity for positive inputs, and an exponential decay for negative inputs, scaled by fixed constants.

## Mathematical Representation of the SELU Function
The SELU function is defined as
$$
\text{SELU}(x) =
\lambda
\begin{cases}
x & \text{if } x > 0 \\
\alpha (e^x - 1) & \text{if } x \leq 0
\end{cases}
$$
Where:

$$
\lambda \approx 1.0507, \quad \alpha \approx 1.6733
$$

These constants are chosen so that the output of each layer maintains a zero mean and unit variance, assuming the inputs are normalized.

### Derivative:
For use in backpropagation, the derivative is:

$$
\frac{d}{dx} \text{SELU}(x) =
\lambda
\begin{cases}
1 & \text{if } x > 0 \\
\alpha e^x & \text{if } x \leq 0
\end{cases}
$$

## Key Applications:
**Self-Normalizing Neural Networks (SNNs):**
SELU is the core of SNNs. It helps the activations converge to zero mean and unit variance without batch normalization.

**Fully Connected Deep Networks:**
Ideal for deep MLPs where maintaining activation scale across layers is critical.

**Autoencoders:**
SELU can improve convergence and reduce reconstruction error in unsupervised models.

## Why Use SELU?
**Self-normalizing behavior:**
 Keeps the network stable without requiring explicit normalization like BatchNorm.

**Faster convergence:**
 Reduces the need for learning rate tuning and normalization tricks.

**Better gradient flow:**
Reduces exploding/vanishing gradients in deep networks.

**Smooth and differentiable:**
Like ELU, but better scaled.

## Requirements
### To retain the self-normalization effect, you must:

- Use SELU as the activation function in all layers

- Use **LeCun normal initialization**

- Avoid dropout; instead, use Alpha Dropout (which preserves self-normalizing properties)

## Challenge
Implement the SELU function and compare its output distribution to ReLU and tanh when applied to normally distributed input data. Check how well it preserves zero mean and unit variance.

