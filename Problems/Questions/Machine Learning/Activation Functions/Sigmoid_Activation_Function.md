# Sigmoid Activation Function

The sigmoid function is a type of activation function commonly used in neural networks. It maps any real-valued number into a range between 0 and 1, making it particularly useful for binary classification tasks. Here's an introduction to the sigmoid function:

## What is the Sigmoid Function?
The sigmoid function is defined mathematically as:

The sigmoid function is defined as:

$$
\sigma(x) = \frac{1}{1 + e^{-x}}
$$

where:
- $x$ is the input to the function.
- $e$ is the base of the natural logarithm (approximately 2.718).

## Challenge
Create a Sigmoid function and plot its curve.

## Extras
The gradient of the sigmoid function is:

$$
\sigma'(x) = \sigma(x) \cdot (1 - \sigma(x))
$$

This gradient is used during backpropagation in neural networks to update weights.
