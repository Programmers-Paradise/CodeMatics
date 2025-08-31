

# Adadelta

Adadelta is an optimization algorithm used in training deep learning models. It belongs to the family of adaptive optimization methods, which adjust the learning rate during training based on the gradients' history. Unlike Adam, Adadelta does not use moving averages of gradients but instead relies on a decaying average of past gradients.

## Definition

Adadelta adapts the learning rate for each parameter by using an exponentially decaying average of squared gradients (E[g²]) and the current gradient (g). The update rule is defined as:

$$
θ_{t+1} = θ_t - \left( Δt * g_t / \sqrt{E[g²]_t + ε} \right)
$$

where:
- $Δt = E[g²]_{t-1} / \sqrt{E[g²]_t + ε}$
- $E[g²]_0 = 0$ (initial value)

## Example

Consider a simple logistic regression model with parameters θ. We aim to minimize the loss function using Adadelta.

**Step-by-Step Explanation:**

1. **Initialize Parameters and Variables:**
   - Set initial parameters θ₀.
   - Initialize $E[g²] = 0$ , $Δt = 0$ , $γ = 0.9$ (decay rate), $ε = 1e-8$.

2. **Compute Gradient:**
   - Calculate the gradient g_t of the loss function with respect to θ at step t.

3. **Update Running Average:**
   - Update $E[g²]$ using:

$$
E[g²]_t = γ * E[g²]_{t-1} + (1 - γ) * g_t^2
$$

4. **Compute Δt:**
   - Calculate the adaptive learning rate component:

$$
Δt = E[g²]_{t-1} / \sqrt{E[g²]_t + ε}
$$

5. **Update Parameters:**
   - Update θ using:

$$
θ_{t+1} = θ_t - (Δt * g_t) 
$$

6. **Repeat Steps 2-5 Until Convergence**

## Properties

1. **No Learning Rate Tuning:** Adadelta automatically adapts the learning rate, eliminating the need for manual tuning.

2. **Memory Efficiency:** It maintains only a running average of squared gradients, making it memory efficient.

3. **Decaying Average:** Uses an exponentially decaying average of past gradients to adaptively adjust the learning rate.

4. **Robustness:** Often performs well on problems where the gradient scale varies significantly across parameters.

5. **Adaptability:** Suitable for non-stationary objectives and online learning scenarios.

## Applications

1. **Deep Learning Models:** Widely used in training deep neural networks, particularly in natural language processing (NLP) tasks like text generation and classification.

2. **Computer Vision:** Applied in image classification, object detection, and segmentation models.

3. **Reinforcement Learning:** Effective for policy gradient methods where adaptive learning rates are beneficial.

4. **Recommendation Systems:** Used in collaborative filtering to optimize user preference models.

Adadelta's ability to adaptively adjust learning rates makes it a versatile and efficient optimization algorithm in various machine learning applications, particularly where manual tuning is impractical or ineffective.

## Code

```python
import numpy as np

# Loss and gradient
def loss(theta):
    return (theta - 5)**2

def grad(theta):
    return 2 * (theta - 5)

# Hyperparameters
rho = 0.95     # decay rate
eps = 1e-6     # small constant
epochs = 20

# Initialize
theta = 0.0
Eg2 = 0.0      # running avg of squared gradients
Edx2 = 0.0     # running avg of squared updates

print(f"Initial theta = {theta:.4f}, loss = {loss(theta):.4f}")

# Training loop
for t in range(1, epochs+1):
    g = grad(theta)
    
    # Accumulate gradient squares
    Eg2 = rho * Eg2 + (1 - rho) * (g ** 2)
    
    # Compute update
    dx = - (np.sqrt(Edx2 + eps) / np.sqrt(Eg2 + eps)) * g
    
    # Accumulate updates
    Edx2 = rho * Edx2 + (1 - rho) * (dx ** 2)
    
    # Apply update
    theta = theta + dx
    
    print(f"Step {t:2d}: theta = {theta:.6f}, loss = {loss(theta):.6f}")

```