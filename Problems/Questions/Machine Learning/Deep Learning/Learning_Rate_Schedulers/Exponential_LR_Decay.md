

# Exponential Learning Rate Decay

Exponential learning rate decay is a crucial technique in machine learning that adjusts the learning rate during training by reducing it multiplicatively over time. This method helps optimize the training process by preventing overshooting minima and ensuring convergence.

## Definition

The exponential learning rate decay formula is defined as:

$$
\eta(t) = \eta_0 \times e^{-\gamma t}
$$

Where:
- $\eta(t)$ is the learning rate at epoch $t$.
- $\eta_0$ is the initial learning rate.
- $\gamma$ is the decay rate, a positive constant that controls how quickly the learning rate decreases.
- $e$ is Euler's number (approximately 2.71828).

This formula ensures that the learning rate decays exponentially over time.

## Example

Suppose we have an initial learning rate ($\eta_0$) of 0.1 and a decay rate ($\gamma$) of 0.05 per epoch. We want to compute the learning rate after 10 epochs.

Using the formula:

$$
\eta(10) = 0.1 \times e^{-0.05 \times 10} = 0.1 \times e^{-0.5} \approx 0.1 \times 0.6065 = 0.06065
$$

Thus, after 10 epochs, the learning rate is approximately 0.06065.

## Properties

- **Multiplicative Decay**: The learning rate decreases by a factor of $e^{-\gamma}$ each epoch.
- **Smooth Adjustment**: Provides a smooth transition from higher to lower learning rates, preventing abrupt changes that might destabilize training.
- **Escape Local Minima**: Allows the model to escape shallow local minima with larger steps early on and fine-tune later.

## Applications

Exponential learning rate decay is widely used in deep learning for:
- Training neural networks where initial large steps help explore the parameter space efficiently.
- Optimization algorithms like Adam, where adaptive rates are beneficial.
- Ensuring stability during training by controlling the learning rate's magnitude over time.