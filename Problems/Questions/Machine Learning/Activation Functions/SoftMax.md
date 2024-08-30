# Softmax 

The softmax function is a mathematical function commonly used in machine learning and neural networks, especially for multi-class classification problems. It transforms a vector of raw scores (logits) into a probability distribution, where each value represents the probability of a class, and the probabilities sum up to 1. Here’s an introduction to the softmax function:

## What is the Softmax Function?
The softmax function converts a vector of real-valued numbers into a vector of probabilities that sum to 1.

The denominator is the sum of the exponentials of all scores in the vector, ensuring that the output values are normalized.
The softmax function is commonly used in classification problems to convert raw scores (logits) into probabilities. It is defined as:

$$
\text{softmax}(x_i) = \frac{e^{x_i}}{\sum_{j} e^{x_j}}
$$

where:
- $x_i$ is the raw score (logit) for the $i$-th class.
- The denominator is the sum of the exponential functions of all the logits $x_j$, which ensures that the output probabilities sum up to 1.

### Example

If you have logits $[x= x_1,x_2,x_3]$, the softmax function converts these logits into a probability distribution:

$$
\text{softmax}(x_1) = \frac{e^{x_1}}{e^{x_1} + e^{x_2} + e^{x_3}}
$$

$$
\text{softmax}(x_2) = \frac{e^{x_2}}{e^{x_1} + e^{x_2} + e^{x_3}}
$$

$$
\text{softmax}(x_3) = \frac{e^{x_3}}{e^{x_1} + e^{x_2} + e^{x_3}}
$$

## Challenge

Create a Softmax Function.
Test the functions for some values of
$x_i$