# Softsign Activation Function
The Softsign activation function is a smooth, non-linear function used in deep learning. It compresses input values into the range (−1, 1), similar to tanh, but with a simpler mathematical form and more stable gradient properties. It is particularly valued in tasks where gradient stability is important, such as RNNs and sequence modeling.

## What is Softsign?
Softsign maps large positive and negative inputs asymptotically to +1 and −1, respectively, using a formula that involves only the absolute value. This makes it computationally cheaper than other functions like tanh or sigmoid, which rely on exponential operations.

It is often used as an alternative to tanh in recurrent neural networks, where it helps prevent the vanishing gradient problem more effectively.

Mathematical Representations of Activation Function
The Softsign function is defined as:
$$
\text{Softsign}(x) = \frac{x}{1 + |x|}
$$

### Derivative:
Its derivative, which is useful during backpropagation, is:

$$
\frac{d}{dx} \left( \frac{x}{1 + |x|} \right) =
\begin{cases}
\frac{1}{(1 + x)^2}, & \text{if } x > 0 \\
\frac{1}{(1 - x)^2}, & \text{if } x < 0
\end{cases}
$$

It is differentiable at all points.

### Uniform Form using Absolute Value:
$$
\frac{d}{dx} \, \text{Softsign}(x) = \frac{1}{(1 + |x|)^2}
$$


The gradient approaches 0 gradually, which is helpful in training deep models without sudden gradient drops.

## Key Applications:
**Recurrent Neural Networks (RNNs):**
- Acts as a substitute for tanh in hidden layers of RNNs, LSTMs, and GRUs.

- Provides smoother convergence and gradient flow, especially in long sequences.

**Text and Language Models:**

- Used in character-level language modeling where sequences can be very deep and prone to gradient issues.

**Reinforcement Learning:**
- Can be used in policy networks where soft gating of values is preferable to hard thresholding.

## Why Use Softsign?
**Computationally Efficient:**
Unlike tanh or sigmoid, it uses only absolute value and division.

**Gradient-Friendly:**
The derivative avoids sharp transitions, promoting smooth learning.

**Bounded Output:**
Helps control activations and avoids exploding outputs in deep networks.

**Zero-Centered:**
Outputs are symmetric around 0, aiding in convergence during gradient descent.

## Challenge
Implement the Softsign function and plot it along with tanh and sigmoid to compare their behaviors. Observe how gradually Softsign flattens near ±1 without sharp saturation.
