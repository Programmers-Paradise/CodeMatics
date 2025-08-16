# **Introduction**  
The **Adam (Adaptive Moment Estimation)** optimizer is a first-order stochastic gradient descent method that combines the benefits of two other optimization techniques: **Momentum (from SGD with momentum)** and **RMSProp (adaptive learning rates)**. It dynamically adjusts the learning rate for each parameter during training, making it highly effective for deep learning tasks where gradients vary in magnitude or are sparse.

---

## **Equations & Derivation**

**Key Concepts**:  
- **First Moment Estimate (Momentum)**: Tracks the exponential moving average of gradients.
- **Second Moment Estimate (RMSProp)**: Tracks the exponential moving average of squared gradients.
- **Bias Correction**: Adjusts initial bias in moving averages due to initialization at zero.


### **Step 1: Compute First Moment Estimate (Momentum)**  

$$
m_t = \beta_1 m_{t-1} + (1 - \beta_1) g_t
$$  

This computes the EMA of gradients over time, with $\beta_1$ controlling how much weight is given to past gradients.  

**Example**: For $\beta_1 = 0.9$, recent gradients contribute more heavily than older ones.

### **Step 2: Compute Second Moment Estimate (RMSProp)** 

$$
v_t = \beta_2 v_{t-1} + (1 - \beta_2) g_t^2
$$  

This computes the EMA of squared gradients, enabling adaptive learning rate scaling.  

**Example**: For $\beta_2 = 0.999$, this smooths out noisy or sparse gradients.

### **Step 3: Bias Correction**  
Since $m_1 = v_1 = 0$ at initialization, the initial estimates are biased toward zero. Bias correction is applied as:  

$$
\hat{m}_t = \frac{m_t}{1 - \beta_1^t}, \quad \hat{v}_t = \frac{v_t}{1 - \beta_2^t}
$$  

**Derivation of Bias Correction**:  
The EMA is initialized at zero, leading to an underestimation of early gradients. The correction term $1/(1 - \beta_i^t)$ approximates the expected value of the true moments. As $t \to \infty$, $\hat{m}_t \approx m_t$.  

### **Step 4: Parameter Update** 

$$
\theta_{t+1} = \theta_t - \alpha \cdot \frac{\hat{m}_t}{\sqrt{\hat{v}_t} + \epsilon}
$$  

This updates parameters using the corrected moments, with adaptive learning rates scaled by $\sqrt{\hat{v}_t}$.  

**Key Components**:  
- **Numerator ($\hat{m}_t$)**: Direction of update (from momentum).  
- **Denominator ($\sqrt{\hat{v}_t} + \epsilon$)**: Adapts learning rate based on gradient magnitude.  

---

### **Derivation Overview**  

### **From SGD with Momentum to ADAM**  
SGD with momentum updates parameters as: 

$$
\theta_{t+1} = \theta_t - \alpha m_t, \quad \text{where } m_t = \beta_1 m_{t-1} + (1 - \beta_1) g_t
$$  

This improves convergence but uses a fixed learning rate $ \alpha $.  

### **From RMSProp to ADAM**  
RMSProp scales the learning rate by the square root of the EMA of squared gradients: 

$$
\theta_{t+1} = \theta_t - \frac{\alpha}{\sqrt{v_t + \epsilon}} g_t, \quad v_t = \beta_2 v_{t-1} + (1 - \beta_2) g_t^2
$$  

This adapts the learning rate per parameter but lacks momentum.  

### **Combining Both Concepts**  
ADAM unifies these ideas:  
1. Use $m_t$ for direction (momentum).  
2. Scale $m_t$ by $1/\sqrt{v_t}$ to adapt learning rates.  
3. Apply bias correction to improve early training stability.  

---

## **Role of Hyperparameters**  

| Hyperparameter | Value Range | Role | Equation Impact |
|---------------|-------------|------|------------------|
| $\alpha$ (learning rate) | $10^{-3}$–$10^{-2}$ | Controls step size. | Scales the update magnitude: $\theta_{t+1} = \theta_t - \alpha \cdot \frac{\hat{m}_t}{\sqrt{\hat{v}_t} + \epsilon}$. |
| $\beta_1$ (first moment decay) | 0.9–0.999 | Controls momentum smoothing. | Determines how much past gradients influence the current update: $m_t = \beta_1 m_{t-1} + (1 - \beta_1) g_t$. |
| $\beta_2$ (second moment decay) | 0.99–0.9999 | Controls variance smoothing. | Determines how much past squared gradients influence the current learning rate scale: $v_t = \beta_2 v_{t-1} + (1 - \beta_2) g_t^2$. |
| $\epsilon$ | $10^{-8}$ – $10^{-4}$ | Prevents division by zero. | Ensures numerical stability: $\sqrt{\hat{v}_t} + \epsilon$. |

---

### **Key Equations Recap**  

1. **First Moment**:

$$
m_t = \beta_1 m_{t-1} + (1 - \beta_1) g_t
$$  

2. **Second Moment**:  

$$
v_t = \beta_2 v_{t-1} + (1 - \beta_2) g_t^2
$$  

3. **Bias-Corrected Moments**:  

$$
\hat{m}_t = \frac{m_t}{1 - \beta_1^t}, \quad \hat{v}_t = \frac{v_t}{1 - \beta_2^t}
$$  

4. **Parameter Update**: 

$$
\theta_{t+1} = \theta_t - \alpha \cdot \frac{\hat{m}_t}{\sqrt{\hat{v}_t} + \epsilon}
$$  

---
### **Features and Advantages**  

1. **Adaptive Learning Rates**: Adjusts learning rates per parameter based on gradient magnitude, making it robust to sparse gradients (e.g., in NLP).  
2. **Computational Efficiency**: Uses only first-order information and avoids matrix inversions.  
3. **Robustness to Hyperparameters**: Works well with default settings for most tasks, though tuning is still important for optimal performance.  
4. **Bias Correction**: Improves early training stability by correcting the initial bias in moving averages.  

**Disadvantages**:  
- May converge to a suboptimal point near the minimum due to adaptive learning rates.  
- Less effective on very small datasets or when the problem requires precise convergence (e.g., convex optimization).  

---

### **Practical Considerations**  
- **Bias Correction**: Crucial for early training stability (e.g., in the first few steps, $m_1 = 0$ would otherwise lead to zero updates).  
- **Adaptive Learning Rates**: The denominator $\sqrt{\hat{v}_t}$ ensures that parameters with large gradients are updated more conservatively.  
- **Hyperparameter Tuning**: While ADAM is robust to defaults ($\alpha = 10^{-3}, \beta_1 = 0.9, \beta_2 = 0.999$), tuning can improve performance in specific tasks (e.g., image segmentation, NLP).  

---

### **Use Cases for ADAM**  
ADAM is widely used in scenarios where:  
- Gradients are sparse or noisy (e.g., NLP, reinforcement learning).  
- Learning rates need to be adaptive across parameters (e.g., CNNs, RNNs).  
- Rapid convergence is required with minimal hyperparameter tuning.

Examples Include:
- **Computer Vision**: Training CNNs with large datasets and high-dimensional gradients (e.g., ImageNet).  
- **NLP**: Fine-tuning transformer models (e.g., BERT) where sparse gradients are common.  
- **Reinforcement Learning**: Policy gradient methods requiring adaptive learning rates for unstable environments.  

---

### **Limitations of ADAM**  
- **Convergence Guarantees**: ADAM lacks strong theoretical guarantees compared to SGD with momentum.  
- **Suboptimal Performance in Some Cases**: May converge to a flat region near minima, especially in highly non-convex problems (e.g., GANs).  


---

### **Other Important Considerations**  

1. **Variants of ADAM**:  
   - **AMSGrad**: Fixes potential issues with ADAM by using the maximum of past second moment estimates instead of $ v_t $.  
   - **AdamW**: Introduces weight decay (L2 regularization) for better generalization.  

2. **Warmup Schedules**:  
   Gradually increasing learning rates in early training stages can improve convergence, especially with large batch sizes or complex models.  

3. **Learning Rate Scheduling**:  
   ADAM is often combined with cosine or step-based decay schedules to further optimize performance.  

4. **Numerical Stability**:  
   Ensure $\epsilon$ is sufficiently small but avoids numerical instability (e.g., $10^{-8}$).  

5. **Theoretical Limitations**:  
   ADAM’s convergence guarantees are weaker than those of SGD with momentum, though practical experiments often favor it.  
   
## Code

```python
import numpy as np

class AdamOptimizer:
    def __init__(self, learning_rate=0.001, beta1=0.9, beta2=0.999, epsilon=1e-8):
        self.learning_rate = learning_rate
        self.beta1 = beta1
        self.beta2 = beta2
        self.epsilon = epsilon
        self.m = None
        self.v = None
        self.t = 0

    def initialize(self, params_shape):
        self.m = np.zeros(params_shape)
        self.v = np.zeros(params_shape)

    def update_params(self, params, grads):
        if self.m is None or self.v is None:
            self.initialize(grads.shape)

        self.t += 1
        m_t = self.beta1 * self.m + (1 - self.beta1) * grads
        v_t = self.beta2 * self.v + (1 - self.beta2) * (grads ** 2)
        
        m_hat = m_t / (1 - self.beta1 ** self.t)
        v_hat = v_t / (1 - self.beta2 ** self.t)

        params -= self.learning_rate * m_hat / (np.sqrt(v_hat) + self.epsilon)
        self.m, self.v = m_t, v_t

# Example usage:
if __name__ == "__main__":
    # Initialize parameters and gradients
    params = np.random.randn(3, 4)
    grads = np.random.randn(3, 4)

    optimizer = AdamOptimizer()
    optimizer.update_params(params, grads)
```



This code defines a simple `AdamOptimizer` class that can be used to update model parameters using the Adam algorithm. The initialize method initializes the first and second moment estimates (m and v). The update_params method updates the parameters based on the gradients.
