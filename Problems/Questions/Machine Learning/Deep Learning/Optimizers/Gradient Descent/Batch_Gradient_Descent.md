

# Batch Gradient Descent

Batch Gradient Descent is an optimization algorithm used to minimize the cost function in machine learning models, particularly in supervised learning tasks like linear regression. It iteratively adjusts model parameters (θ) by computing the average gradient of the loss function across all training examples.

## Definition

**Formal Definition:**

Batch Gradient Descent updates the parameters θ using the following equations:

$$
\theta_j := \theta_j - \alpha \frac{1}{m} \sum_{i=1}^{m} (h_\theta(x^{(i)}) - y^{(i)}) x_j^{(i)}
$$

where:
- $\theta_j$ is the parameter being updated.
- $\alpha$ is the learning rate.
- $m$ is the number of training examples.
- $h_\theta(x^{(i)})$ is the hypothesis function predicting the output for the i-th example.
- $x_j^{(i)}$ is the j-th feature of the i-th training example.

The cost function to minimize is:

$$
J(\theta) = \frac{1}{2m} \sum_{i=1}^{m} (h_\theta(x^{(i)}) - y^{(i)})^2
$$

**Example:**

Consider a simple linear regression model with two features and three training examples. The goal is to find the best fit line $h_\theta(x) = \theta_0 + \theta_1 x_1 + \theta_2 x_2$.

Given:
- Training examples: (x₁, y), (x₂, y), (x₃, y)
- Learning rate α
- Initial θ values

Compute gradients for each θ:

$$
\text{Gradient for } \theta_j = \frac{1}{m} \sum_{i=1}^{m} (h_\theta(x^{(i)}) - y^{(i)}) x_j^{(i)}
$$

Update θ using the learning rate α.

## Properties

- **Computational Complexity:** O(n) per iteration, where n is the number of training examples.
- **Convergence Speed:** Slower for large datasets but guarantees a minimum in convex functions.
- **Memory Usage:** Requires storing all training examples in memory.
- **Applicability:** Suitable for small to medium-sized datasets.

## Applications

Batch Gradient Descent is used in:
- **Linear Regression** for predicting continuous outcomes.
- **Logistic Regression** for classification tasks.
- **Neural Networks** during the training phase, especially with smaller datasets.
- **Support Vector Machines** for optimization problems.

This method ensures a systematic approach to minimizing the cost function by leveraging all available data points in each iteration.

## Code

```python
import numpy as np

# Create synthetic dataset
np.random.seed(42)
X = np.linspace(0, 10, 50)
y = 3 * X + 7 + np.random.randn(50) * 2   # true w=3, b=7 + noise

# Initialize parameters
w, b = 0.0, 0.0

# Hyperparameters
eta = 0.01   # learning rate
epochs = 1000
N = len(X)

# Training loop (Batch Gradient Descent)
for epoch in range(1, epochs+1):
    # Predictions
    y_pred = w * X + b
    
    # Compute gradients (averaged over the batch)
    dw = -(2/N) * np.sum((y - y_pred) * X)
    db = -(2/N) * np.sum(y - y_pred)
    
    # Parameter updates
    w -= eta * dw
    b -= eta * db
    
    # Print every 100 steps
    if epoch % 100 == 0:
        loss = np.mean((y - y_pred)**2)
        print(f"Epoch {epoch}: w={w:.4f}, b={b:.4f}, loss={loss:.4f}")

print(f"\nFinal model: y = {w:.4f}x + {b:.4f}")
```