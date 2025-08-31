

# Adagrad

Adagrad is an optimization algorithm used in machine learning to minimize a loss function by iteratively adjusting parameters. It is particularly effective for sparse data and non-stationary objectives due to its adaptive learning rates.

## Definition

The update rule for Adagrad is defined as:

$$
\theta_{t+1} = \theta_t - \frac{\eta}{\sqrt{G_t + \epsilon}} g_t
$$

Where:
- $\eta$ is the initial learning rate.
- $G_t = \text{diag}(g_1^2, g_2^2, ..., g_n^2)$, a diagonal matrix containing squared gradients up to time $t$.
- $g_t$ is the gradient at time $t$.
- $\epsilon$ is a small value added for numerical stability.

Each parameter has its own learning rate, calculated as the initial learning rate divided by the square root of the sum of squared past gradients plus a small epsilon.

## Example

Consider a simple linear regression problem with two features. Let’s use Adagrad to update parameters $\theta_1$ and $\theta_2$.

**Step 1:** Initialize parameters, learning rate $\eta = 0.1$, and G as identity matrix.

$$
G_0 = I
$$

**Step 2:** Compute gradients for each feature:

$$
g_1 = [2x_1(y - (w x_1 + b))]
$$

$$
g_2 = [2x_2(y - (w x_2 + b))]
$$

**Step 3:** Update parameters using the Adagrad update rule.

$$
G_t = G_{t-1} + g_t g_t^\top
$$

$$
\theta_{t+1} = \theta_t - \frac{\eta}{\sqrt{G_t}} g_t
$$

This iterative process adjusts each parameter's learning rate based on historical gradients, leading to efficient convergence.

## Properties

- **Adaptive Learning Rates:** Each parameter has its own learning rate.
- **RMS in Denominator:** Uses the root mean square of past gradients.
- **Sparse Data Handling:** Efficient for features with many zeros.
- **Non-stationary Objectives:** Suitable for objectives where optimal parameters change over time.
- **Memory Intensive:** Requires storing $G_t$x matrix.

## Applications

Adagrad is beneficial in:
- **Natural Language Processing (NLP):** Handles sparse word embeddings.
- **Recommendation Systems:** Manages cold start and sparsity issues.
- **Computer Vision:** Processes high-dimensional data efficiently.

This algorithm's ability to adapt learning rates makes it a valuable tool in various machine learning applications.


## Code

```python
import numpy as np

# Loss and gradient
def loss(theta):
    return (theta - 5)**2

def grad(theta):
    return 2 * (theta - 5)

# Hyperparameters
eta = 1.0      # initial learning rate
eps = 1e-8     # small constant
epochs = 20

# Initialize
theta = 0.0
G = 0.0        # sum of squared gradients

print(f"Initial theta = {theta:.4f}, loss = {loss(theta):.4f}")

# Training loop
for t in range(1, epochs+1):
    g = grad(theta)
    
    # Accumulate squared gradients
    G += g**2
    
    # Adaptive update
    theta = theta - (eta / (np.sqrt(G) + eps)) * g
    
    print(f"Step {t:2d}: theta = {theta:.6f}, loss = {loss(theta):.6f}")
```