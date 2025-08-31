

# Nesterov Accelerated Gradient (NAG / Nesterov Momentum)

## Introduction

Nesterov Accelerated Gradient (NAG) is an advanced optimization algorithm used in machine learning, particularly for training neural networks. It builds upon the concept of momentum methods by introducing a lookahead mechanism, which allows it to accelerate convergence and escape local minima more effectively than traditional gradient descent.

In mathematical terms, NAG modifies the standard Momentum update rule by incorporating a look-ahead step, making it more efficient in optimization problems where the loss function is convex or non-convex. This method is particularly valuable in deep learning due to its ability to handle large datasets and high-dimensional parameter spaces efficiently.

## Definition

The Nesterov Accelerated Gradient (NAG) algorithm can be formally defined with the following equations:

1. **Velocity Update**:

$$
v_{t} = \gamma \cdot v_{t-1} + \eta \cdot g_{t+1}
$$

   where  $\gamma$ is the momentum term, $\eta$ is the learning rate, and $g_{t+1}$ is the gradient computed at the point $\theta_t + \gamma v_{t-1}$.

2. **Parameter Update**:

$$
\theta_{t+1} = \theta_t - v_t
$$

This formulation shows that NAG computes the gradient based on a future point, which is determined by the current velocity and momentum term. This lookahead step helps in reducing oscillations and accelerating convergence.

## Example

Consider minimizing the function  $f(\theta) = 0.5\theta^2$. Starting with initial parameters:
- Initial parameter: $\theta_0 = 2$
- Momentum term: $\gamma = 0.9$
- Learning rate: $\eta = 0.1$

**Step-by-Step Update:**

1. **Initial Velocity**: $v_0 = 0$
2. **First Iteration (t=0)**:
   - Compute gradient at $\theta_0 + \gamma v_{-1} = 2$ (since $v_{-1}=0$)
   - $g_1 = f'(2) = 2$
   - Update velocity: $v_1 = 0.9 \cdot 0 + 0.1 \cdot 2 = 0.2$
   - Update parameter: $\theta_1 = 2 - 0.2 = 1.8$

3. **Second Iteration (t=1)**:
   - Compute gradient at $\theta_1 + \gamma v_0 = 1.8$
   - $g_2 = f'(1.8) = 1.8$
   - Update velocity: $v_2 = 0.9 \cdot 0.2 + 0.1 \cdot 1.8 = 0.28$
   - Update parameter: $\theta_2 = 1.8 - 0.28 = 1.52$

This example demonstrates how NAG accelerates convergence by leveraging the lookahead gradient, reducing the number of iterations needed to reach the minimum.

## Properties

- **Acceleration**: NAG accelerates convergence compared to standard Momentum due to its look-ahead step.
- **Parameter Tuning**: It requires tuning two parameters: momentum ($ \gamma$) and learning rate ($\eta$).
- **Computational Complexity**: The complexity is comparable to standard Gradient Descent, with the primary overhead being additional gradient computations.

## Applications

NAG is widely used in:
- **Deep Learning**: For training neural networks where optimization efficiency is crucial.
- **Reinforcement Learning**: In policy gradient methods for efficient parameter updates.
- **Physics Simulations**: Where similar optimization techniques are applied to model dynamic systems.

In summary, Nesterov Accelerated Gradient offers a robust and efficient optimization method, particularly valuable in scenarios requiring rapid convergence and handling of complex loss landscapes.


## Code

```python
import numpy as np

# Loss and gradient
def loss(theta):
    return (theta - 5)**2

def grad(theta):
    return 2 * (theta - 5)

# Hyperparameters
eta = 0.1       # learning rate
mu = 0.9        # momentum coefficient
epochs = 20     # number of iterations

# Initialize
theta = 0.0     # start far from optimum
v = 0.0         # velocity

print(f"Initial theta = {theta:.4f}, loss = {loss(theta):.4f}")

# Training loop (NAG)
for t in range(1, epochs+1):
    # 1. Lookahead position
    theta_lookahead = theta + mu * v
    
    # 2. Compute gradient at lookahead
    g = grad(theta_lookahead)
    
    # 3. Update velocity
    v = mu * v - eta * g
    
    # 4. Update parameters
    theta = theta + v
    
    print(f"Step {t:2d}: theta = {theta:.6f}, loss = {loss(theta):.6f}")
```