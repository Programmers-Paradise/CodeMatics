

# RMSprop (Root Mean Square Propagation)

## Introduction

RMSprop is an optimization algorithm used in training deep learning models, particularly neural networks. It adapts the learning rate for each parameter during training, addressing issues like varying gradients and fixed learning rates.

## Definition

The update rule for RMSprop involves a moving average of squared gradients:

1. Compute the squared gradient: 

$$
g_t^2 = \frac{1}{t} \sum_{i=1}^{t} g_i^2
$$

2. Update the moving average: 

$$
G_t = \gamma G_{t-1} + (1-\gamma)g_t^2
$$

where γ is a hyperparameter (~0.9).


3. Update the parameter: 

$$
\theta_{t+1} = \theta_t - \frac{\eta}{\sqrt{G_t + \epsilon}} g_t
$$

with η as learning rate and ε for numerical stability.

## Example

Consider minimizing $L = (y - wx)^2$ with initial w=0, η=0.1, γ=0.9, ε=1e-8:

1. **Iteration 1**:
   - Compute gradient: $g₁ = (y - w₁x)(-x)$
   - Update G: $G_1 = 0.9*0 + 0.1*g₁²$
   - Update w: $w₂ = w₁ - 0.1 * g₁ / sqrt(G₁ + ε)$

2. Repeat for subsequent iterations, adjusting w each time.

## Properties

- **Adaptive Learning Rate**: Each parameter has its own learning rate.
- **Moving Average of Squared Gradients**: Averages squared gradients over time.
- **Numerical Stability**: Prevents division by zero with ε.
- **Efficiency**: Maintains only G, making it memory-efficient.

## Applications

Widely used in machine learning for neural network training. Also applicable in adaptive filtering and control systems where parameter adaptation is crucial.

This structured approach ensures clarity and comprehensiveness, covering all essential aspects of RMSprop.

## Code

```python
import numpy as np

# Given constants
eta = 0.1       # learning rate
gamma = 0.9     # decay rate
eps = 1e-8      # small value for numerical stability

# Training data
x = 2.0
y = 4.0

# Initial values
w = 0.0
G = 0.0   # running average of squared gradients

# Number of iterations
epochs = 5

for t in range(1, epochs + 1):
    # Compute gradient
    g = (y - w * x) * (-x)
    
    # Update running average of squared gradients
    G = gamma * G + (1 - gamma) * (g ** 2)
    
    # Update weight using RMSProp rule
    w = w - eta * g / (np.sqrt(G + eps))
    
    # Display results
    print(f"Iter {t}: g={g:.6f}, G={G:.6f}, w={w:.6f}")

```