

# Adaptive Weighting (Adaw)

## Introduction

Adaptive weighting is a dynamic approach used in machine learning and optimization to adjust parameters based on real-time data. This method is crucial for enhancing model performance by continuously updating weights to minimize errors or optimize outcomes.

## Definition



**AdamW** (short for *Adam with Weight Decay*) is an optimization algorithm that improves on **Adam** by **decoupling weight decay from the gradient-based parameter updates**.

* In **Adam**, weight decay (L2 regularization) is usually implemented by adding $\lambda \theta$ to the gradient. This couples the effect of weight decay with the adaptive learning rate scaling of Adam.
* In **AdamW**, weight decay is applied **directly to the parameters after the adaptive gradient update**, not through the gradient term.

---

### 🔹 Update Rule

For parameters $\theta_t$:

1. Compute gradient:

$$
g_t = \nabla_\theta J(\theta_t)
$$

2. First and second moment estimates:

$$
m_t = \beta_1 m_{t-1} + (1-\beta_1) g_t
$$

$$
v_t = \beta_2 v_{t-1} + (1-\beta_2) g_t^2
$$

3. Bias correction:

$$
\hat m_t = \frac{m_t}{1-\beta_1^t}, \quad
\hat v_t = \frac{v_t}{1-\beta_2^t}
$$

4. **AdamW parameter update**:

$$
\theta_{t+1} = \theta_t - \eta \cdot \frac{\hat m_t}{\sqrt{\hat v_t}+\epsilon} - \eta \cdot \lambda \theta_t
$$

   where:

   * $\eta$ = learning rate
   * $\lambda$ = weight decay coefficient


$$
\theta_{t+1} = \theta_t - \eta_t \nabla_\theta J(\theta_t)
$$

where $\eta_t$ is the learning rate at iteration $t$, and $J$ is the cost function.

## Example

We want to minimize 

$$
J(\theta) = (\theta - 3)^2
$$

with gradient  

$$
g_t = \nabla_\theta J(\theta_t) = 2(\theta_t - 3).
$$

---

### Hyperparameters
- Initial parameter: $\theta_0 = 0$  
- Learning rate: $\eta = 0.1$
- $\beta_1 = 0.9, \ \beta_2 = 0.999, \ \epsilon = 10^{-8}, \ \lambda = 0.01$  
- Moments: $$m_0 = 0, \ v_0 = 0$$  

Update rule (AdamW):

$$
\theta_{t+1} = \theta_t - \eta\Big(\frac{\hat m_t}{\sqrt{\hat v_t}+\epsilon} + \lambda \theta_t\Big).
$$

---

###  Iterations

#### Iteration 1
- $\theta_0 = 0$, $g_1 = -6$  
- $m_1 = -0.6,\ v_1 = 0.036$  
- $\hat m_1 = -6,\ \hat v_1 = 36$  
- Update term $= -1.0$  
- $\theta_1 = 0.1$

---

### Iteration 2
- $\theta_1 = 0.1$, $g_2 = -5.8$  
- $m_2 = -1.12,\ v_2 = 0.069604$  
- $\hat m_2 \approx -5.8947,\ \hat v_2 \approx 34.8194$  
- Update term $\approx -0.99797$  
- $\theta_2 \approx 0.1998$

---

### Iteration 3
- $\theta_2 \approx 0.1998$, $g_3 \approx -5.6004$  
- $m_3 \approx -1.5680,\ v_3 \approx 0.1009$  
- $\hat m_3 \approx -5.7861,\ \hat v_3 \approx 33.6666$  
- Update term $\approx -0.99522$  
- $\theta_3 \approx 0.2993$

---

### Iteration 4
- $\theta_3 \approx 0.2993$, $g_4 \approx -5.4014$  
- $m_4 \approx -1.9514,\ v_4 \approx 0.1300$  
- $\hat m_4 \approx -5.6742,\ \hat v_4 \approx 32.5420$  
- Update term $\approx -0.99169$  
- $\theta_4 \approx 0.3985$

---

### Iteration 5
- $\theta_4 \approx 0.3985$, $g_5 \approx -5.2030$  
- $m_5 \approx -2.2765,\ v_5 \approx 0.1569$  
- $\hat m_5 \approx -5.5592,\ \hat v_5 \approx 31.4457$  
- Update term $\approx -0.98737$  
- $\theta_5 \approx 0.4972$

---

## Convergence trend

$$
\theta_0 = 0 \;\;\to\;\; 0.1 \;\;\to\;\; 0.1998 \;\;\to\;\; 0.2993 \;\;\to\;\; 0.3985 \;\;\to\;\; 0.4972 \;\;\dots
$$

The parameter $\theta_t$ iteratively moves toward the optimum $\theta^\star = 3$.
.

## Properties

1. **Adaptability**: The algorithm adapts to data changes by updating weights in real-time.
2. **Convergence**: Typically converges faster than static methods due to dynamic learning rate adjustments.
3. **Robustness**: Resilient to non-stationary data, making it suitable for time-varying environments.

## Applications

Adaptive weighting is widely used in:
- **Wireless Communications**: For channel equalization and signal processing.
- **Robotics**: In control systems adjusting parameters based on sensor inputs.
- **Autonomous Vehicles**: Enhancing decision-making through real-time data optimization.

This structured approach ensures that Adaw is effectively utilized across various engineering and scientific domains, enhancing performance in dynamic environments.

## Code

```python
import numpy as np

# loss: (theta - 3)^2
def grad(theta): 
    return 2*(theta - 3)

theta = 0.0
m, v = 0.0, 0.0
eta, beta1, beta2, eps, lam = 0.1, 0.9, 0.999, 1e-8, 1e-2

for t in range(1, 6):
    g = grad(theta)
    m = beta1*m + (1-beta1)*g
    v = beta2*v + (1-beta2)*(g*g)
    m_hat = m / (1 - beta1**t)
    v_hat = v / (1 - beta2**t)
    update = m_hat / (np.sqrt(v_hat) + eps) + lam*theta  # AdamW
    theta = theta - eta * update
    print(f"t={t:>2} | theta={theta:.6f}")
```
