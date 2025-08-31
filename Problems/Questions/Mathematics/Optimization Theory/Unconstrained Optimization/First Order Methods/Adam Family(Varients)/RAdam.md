# RAdam

RAdam (Rectified Adam) is an optimization algorithm that builds upon the Adam optimizer by addressing some of its limitations. It is particularly useful in training deep learning models efficiently.

## Definition

The RAdam algorithm modifies the Adam optimizer to handle sparse gradients more effectively and improve convergence properties.  
The key idea is to correct the bias in the second moment estimate, which can be significant when dealing with sparse data or varying gradient magnitudes.

### Update Rule

For each parameter $\theta_t$, the update rule is:

$$
s_{t+1} = \beta_1 (1 - \gamma_t) g_t + \beta_1 s_t
$$

$$
v_{t+1} = \beta_2 v_t + (1 - \beta_2) g_t^2
$$

$$
\hat{s}_ {t+1} = \frac{s_{t+1}}{1 - \beta_1^{t+1}}
$$

$$
\hat{v}_ {t+1} = \frac{v_{t+1}}{1 - \beta_2^{t+1}}
$$

Where:  
- $g_t$ is the gradient at step $t$.  
- $\beta_1, \beta_2$ are hyperparameters (typically $0.9$ and $0.999$).  
- $\gamma_t = \min\left(1, \frac{\sqrt{v_t} + \epsilon}{\|g_t\| + \epsilon}\right)$.  

---

### Rectification Term

The key difference from Adam is the **rectification term** $\gamma_t$:

$$
\gamma_t = 
\begin{cases}
\min\left(1, \frac{\sqrt{v_t} + \epsilon}{\|g_t\| + \epsilon}\right), & \text{if } \|g_t\| > 0 \\
1, & \text{otherwise}
\end{cases}
$$

This adjusts the second moment estimate depending on whether the gradient is sparse.

---

### Final Update

The parameter update becomes:

$$
\theta_{t+1} = \theta_t - \eta_t \frac{\hat{s}_ {t+1}}{\sqrt{\hat{v}_{t+1}} + \epsilon}
$$

where $\eta_t$ is the learning rate.

---

## Example

Consider training a linear regression model with parameters $\theta = [w, b]$.  
Given data $(x_i, y_i)$, we minimize the mean squared error:

$$
L(\theta) = \frac{1}{n} \sum_{i=1}^{n} (y_i - w x_i - b)^2
$$

Using RAdam:

1. **Compute gradients** $g_w, g_b$.  

2. **Update first moments**:  

$$
s_w = 0.9 s_w + 0.1 g_w
$$

$$
s_b = 0.9 s_b + 0.1 g_b
$$

3. **Update second moments**:  

$$
v_w = 0.99 v_w + 0.01 g_w^2
$$

$$
v_b = 0.99 v_b + 0.01 g_b^2
$$

4. **Bias-corrected estimates**:  

$$
\hat{s} = \frac{s}{1 - 0.9^{t+1}}, \quad 
\hat{v} = \frac{v}{1 - 0.99^{t+1}}
$$

5. **Rectification and parameter update**:  

$$
\gamma_w = \min\left(1, \frac{\sqrt{v_w} + 10^{-8}}{|g_w| + 10^{-8}}\right)
$$

$$
w_{\text{new}} = w - 0.001 \cdot \frac{\hat{s}_w}{\sqrt{\hat{v}_w} + 10^{-8}} \cdot (1 - \gamma_w)
$$

Similarly for $b_{\text{new}}$.

---

## Properties

- **Adaptive Learning Rate**: Adjusts per parameter, accelerating convergence on sparse gradients.  
- **Bias Correction**: Corrects biased estimates early in training.  
- **Rectification**: Handles varying gradient magnitudes, avoiding instability.  

---

## Applications

- **Machine Learning**: Speeds up training across models.  
- **Deep Learning**: Effective for large networks.  
- **Computer Vision**: Used in classification and segmentation.  
- **Natural Language Processing**: Improves training stability in transformer models (e.g., BERT).  
- **Reinforcement Learning**: Aids faster policy optimization.  

---

## Code

```python
import numpy as np

class RAdamOptimizer:
    def __init__(self, lr=0.001, beta1=0.9, beta2=0.999, eps=1e-8):
        self.lr = lr
        self.beta1 = beta1
        self.beta2 = beta2
        self.eps = eps
        self.m = None   # first moment
        self.v = None   # second moment
        self.t = 0      # timestep

    def update(self, params, grads):
        if self.m is None:
            self.m = np.zeros_like(params)
            self.v = np.zeros_like(params)

        self.t += 1

        # Update biased first and second moment estimates
        self.m = self.beta1 * self.m + (1 - self.beta1) * grads
        self.v = self.beta2 * self.v + (1 - self.beta2) * (grads ** 2)

        # Bias correction
        m_hat = self.m / (1 - self.beta1 ** self.t)
        v_hat = self.v / (1 - self.beta2 ** self.t)

        # Rectification term
        denom = np.sqrt(v_hat) + self.eps
        rect = np.minimum(1.0, (np.sqrt(self.v) + self.eps) / (np.abs(grads) + self.eps))

        # Parameter update
        params = params - self.lr * (m_hat / denom) * rect
        return params


# ------------------------
# Example: minimize f(x) = (x-3)^2
# ------------------------
def f(x):
    return (x - 3) ** 2

def grad(x):
    return 2 * (x - 3)

x = np.array([10.0])  # initial guess
opt = RAdamOptimizer(lr=0.1)

for i in range(100):
    g = grad(x)
    x = opt.update(x, g)

print("Optimal x:", x)
print("f(x) =", f(x))
```
