

# AdaFactor: An Advanced Optimization Algorithm

AdaFactor is an optimization algorithm designed for training deep learning models, particularly neural networks. It belongs to the family of adaptive moment estimation (Adam) methods but introduces unique features that enhance its performance and efficiency.

## Definition

AdaFactor operates by maintaining parameter-wise learning rates, which are updated based on the historical gradients of each parameter. This approach allows each weight in a neural network to have its own learning rate, addressing the limitations of one-size-fits-all optimization strategies used in methods like Adam or RMSProp.

The key equations governing AdaFactor are:

1. **Parameter Update Rule**:

$$
\theta_{t+1} = \theta_t - \eta_t \cdot m_t
$$

   where $\eta_t$ is the parameter-specific learning rate at time step $t$, and $m_t$ is the adaptive moment estimate.

2. **Adaptive Learning Rate Calculation**:

$$
\eta_t = \alpha \cdot \sqrt{1 - \beta_2^t} / (1 - \beta_2^t)
$$

Here, $\alpha$ is the base learning rate, and $\beta_2$ is a hyperparameter smoothing the moving average of squared gradients.

3. **Gradient Clipping**:
   
$$
g_ t = \min\left(\frac{g_ t}{clipratio}, 1\right)
$$

   This ensures that gradient values do not explode, improving training stability.

4. **Parameter Scaling**:

$$
w_i^{(t)} = w_i^{(t-1)} - \eta_t \cdot m_t^{(i)}
$$

   Each parameter $w_i$ is updated individually with its own learning rate $\eta_t$.

## Example

Consider a simple linear regression model where we aim to minimize the mean squared error. Using AdaFactor, each weight's learning rate is adjusted based on past gradients:

1. **Initialization**: Set initial parameters $\theta_0$, learning rates $ \alpha = 0.001$, and decay factors $\beta_2 = 0.99$.

2. **Gradient Calculation**: Compute the gradient of the loss with respect to each parameter.

3. **Adaptive Learning Rate**: Update each parameter's learning rate using the adaptive formula, ensuring individualized updates.

4. **Parameter Update**: Adjust each weight using its specific learning rate and computed gradient.

This example illustrates how AdaFactor dynamically adjusts each parameter's learning rate, leading to efficient convergence.

## Properties

- **Parameter-wise Learning Rates**: Each weight has its own learning rate based on historical gradients.
  
- **Gradient Clipping**: Limits gradient values to prevent exploding updates.
  
- **Memory Efficiency**: Requires storing only moving averages instead of full history, reducing memory usage.

## Applications

AdaFactor is widely used in training large-scale models such as transformer architectures in natural language processing and deep learning systems. Its efficiency makes it suitable for scenarios with high-dimensional data and limited computational resources.

In summary, AdaFactor enhances optimization by providing parameter-specific learning rates, incorporating gradient clipping, and optimizing memory usage, making it a powerful tool in modern machine learning applications.

## Code

```python
import numpy as np

class AdaFactor:
    def __init__(self, shape, lr=1e-2, beta2=0.999, eps=1e-30, clip_threshold=1.0, scale_parameter=True):
        """
        Args:
            shape: shape of parameter tensor
            lr: base learning rate
            beta2: second moment decay (factorized if tensor is matrix)
            eps: small constant for numerical stability
            clip_threshold: threshold for adaptive gradient clipping
            scale_parameter: if True, scale lr by parameter norm
        """
        self.lr = lr
        self.beta2 = beta2
        self.eps = eps
        self.clip_threshold = clip_threshold
        self.scale_parameter = scale_parameter

        # Initialize factored second-moment estimates
        if len(shape) == 2:  # matrix (factorized)
            self.exp_row = np.zeros((shape[0],))
            self.exp_col = np.zeros((shape[1],))
            self.factored = True
        else:  # vector or higher-dim → unfactored
            self.v = np.zeros(shape)
            self.factored = False

        self.t = 0  # step counter

    def update(self, param, grad):
        self.t += 1
        grad2 = grad * grad + self.eps  # squared grad

        if self.factored:
            # Row/col averages for factorization
            new_exp_row = self.beta2 * self.exp_row + (1 - self.beta2) * grad2.mean(axis=1)
            new_exp_col = self.beta2 * self.exp_col + (1 - self.beta2) * grad2.mean(axis=0)

            # Reconstruct v_hat using outer product approx
            v_hat = np.outer(new_exp_row, new_exp_col) / new_exp_row.mean()

            self.exp_row, self.exp_col = new_exp_row, new_exp_col
        else:
            self.v = self.beta2 * self.v + (1 - self.beta2) * grad2
            v_hat = self.v

        # RMS of gradients
        rms_g = np.sqrt(np.mean(grad2))

        # Adaptive gradient clipping
        grad_norm = grad / (np.sqrt(v_hat) + self.eps)
        grad_rms = np.sqrt(np.mean(grad_norm ** 2))
        clipping_denom = max(1.0, grad_rms / self.clip_threshold)
        grad_norm /= clipping_denom

        # Parameter scaling for lr
        param_scale = np.sqrt(np.mean(param ** 2)) if self.scale_parameter else 1.0
        lr_t = self.lr * param_scale

        # Update params
        param -= lr_t * grad_norm
        return param
```
