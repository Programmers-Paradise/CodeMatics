

# Step Decay

Step decay is a learning rate schedule used in machine learning, particularly for training neural networks. It systematically reduces the learning rate at fixed intervals, enhancing model convergence and performance by preventing overshooting of the minimum loss.

## Definition

The step decay learning rate is defined by the formula:

$$
\eta(t) = \eta_0 \times \gamma^s
$$

where:
- $\eta(t)$ is the learning rate at step \( t \),
- $\eta_0$ is the initial learning rate,
- $\gamma$ is the decay factor (typically between 0 and 1),
- $s$ is the number of completed decay steps.

The decay occurs every $k$ epochs, incrementing $s$ by 1 each time. This creates a piecewise exponential decay in the learning rate.

## Example

Consider training a neural network with:
- Initial learning rate ($\eta_0$) = 0.1,
- Decay factor ($\gamma$) = 0.5,
- Decay interval ($k$) = 10 epochs,
- Training for 30 epochs.

The learning rate evolves as follows:

- Epochs 1-10: $\eta = 0.1$
- Epochs 11-20: $\eta = 0.05$
- Epochs 21-30: $\eta = 0.025$

This example illustrates how the learning rate decreases every 10 epochs, accelerating convergence.

## Properties

1. **Exponential Decay**: The learning rate reduces exponentially over time.
2. **Parameter Tuning**: Requires selecting initial rate ($\eta_0$), decay factor ($\gamma$), and interval ($k$).
3. **Prevents Overfitting**: Reduces the risk of early convergence by adjusting the learning rate, aiding in finding optimal minima.

## Applications

Step decay is widely used in:
- **Neural Network Training**: To optimize model performance through adaptive learning rates.
- **Optimization Algorithms**: Implicitly used by algorithms like Adam to adjust learning rates dynamically.
- **Domain-Specific Models**: Beneficial in fields requiring adaptive parameter tuning for optimal results.