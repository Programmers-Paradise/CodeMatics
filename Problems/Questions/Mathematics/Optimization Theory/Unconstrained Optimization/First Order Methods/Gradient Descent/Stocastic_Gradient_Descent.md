

# Stochastic Gradient Descent (SGD)

## Introduction

Stochastic Gradient Descent (SGD) is a fundamental optimization algorithm widely used in machine learning and deep learning for minimizing the cost function of a model. It is particularly valuable for training large-scale models due to its efficiency and scalability. SGD iteratively adjusts model parameters by taking steps proportional to the negative gradient of the loss function, making it an essential tool for navigating complex error landscapes.

## Definition

Stochastic Gradient Descent updates model parameters using the following formula:

$$
\theta^{(t+1)} = \theta^{(t)} - \eta \nabla_\theta J(\theta; x^{(i)}, y^{(i)})
$$

Where:
- $\theta$ represents the model parameters (e.g., weights and biases).
- $\eta$ is the learning rate, controlling the step size at each iteration.
- $J(\theta; x^{(i)}, y^{(i)})$ is the loss function for a single training example $(x^{(i)}, y^{(i)})$.

This approach differs from batch gradient descent by computing the gradient using only one randomly selected sample, making it computationally efficient and suitable for large datasets.

## Example

Consider linear regression with parameters $w$ and $b$, aiming to minimize the mean squared error (MSE) loss:

$$
L(w, b) = \frac{1}{m} \sum_{i=1}^{m} (wx_i + b - y_i)^2
$$

The gradients for each parameter are:

$$
\nabla_w L = \frac{2}{m} \sum_{i=1}^{m} (wx_i + b - y_i) x_i
$$

$$
\nabla_b L = \frac{2}{m} \sum_{i=1}^{m} (wx_i + b - y_i)
$$

Using SGD, we update \(w\) and \(b\) with a single sample at each iteration:

$$
w := w - \eta \nabla_w L(w, b) \\
b := b - \eta \nabla_b L(w, b)
$$

This iterative process gradually adjusts the parameters to minimize the loss function.

## Properties

1. **Learning Rate ($\eta$)**: Controls convergence speed and stability. A high learning rate may overshoot minima, while a low rate can lead to slow convergence.
   
2. **Stochastic Nature**: Updates are based on single samples, introducing randomness that helps escape local minima.

3. **Computational Efficiency**: O(n) per iteration, making it suitable for large datasets compared to batch GD's O(n²).

4. **Scalability**: Effective for big data and high-dimensional problems due to its memory efficiency.

5. **Variance in Gradients**: Higher variance can lead to faster convergence but may result in noisier parameter updates.

## Applications

SGD is extensively used in:
- **Machine Learning**: Training neural networks, support vector machines, and linear regression models.
- **Deep Learning**: Efficiently handling large datasets with millions of parameters.
- **Economics/Finance**: Optimizing portfolio allocations and risk management models.
- **Engineering**: Resource allocation and control systems.

SGD's versatility makes it a cornerstone in both theoretical research and industrial applications across various domains.

## Code

```python
import numpy as np

# ----- Example dataset -----
np.random.seed(42)
X = np.random.rand(10, 1)  # 10 samples, 1 feature
y = 3 * X[:, 0] + 2 + np.random.randn(10) * 0.1  # y = 3x + 2 + noise

# Hyperparameters
eta = 0.1       # learning rate
epochs = 20
n_samples = X.shape[0]

# Initialize weight and bias
w = np.random.randn()  # slope
b = 0.0                # intercept

# ----- SGD training -----
for epoch in range(epochs):
    # Shuffle data each epoch for true stochasticity
    indices = np.arange(n_samples)
    np.random.shuffle(indices)
    
    for i in indices:
        xi = X[i]
        yi = y[i]
        
        # Prediction
        y_pred = w * xi + b
        
        # Gradients for MSE loss (per sample)
        dw = -2 * xi * (yi - y_pred)
        db = -2 * (yi - y_pred)
        
        # Update parameters
        w -= eta * dw
        b -= eta * db
    
    # Compute loss for monitoring
    y_pred_all = w * X[:, 0] + b
    mse = np.mean((y - y_pred_all) ** 2)
    print(f"Epoch {epoch+1}: w={w:.4f}, b={b:.4f}, MSE={mse:.6f}")

print("\nFinal parameters:")
print(f"w = {w:.4f}, b = {b:.4f}")

```