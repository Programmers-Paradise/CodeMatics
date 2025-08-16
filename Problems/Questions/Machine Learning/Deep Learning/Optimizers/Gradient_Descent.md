
# **Introduction**  
**Gradient Descent (GD)** is the foundation of optimization in machine learning. It iteratively updates model parameters to minimize a loss function by moving in the direction opposite to the gradient of the function at the current point. GD forms the basis for more advanced algorithms like **Stochastic Gradient Descent (SGD)** and **ADAM**.


## **Mathematical Formulation**

### **Variables and Notations**  
Let:  
- $\theta_t$: Parameters at iteration $t$.  
- $f(\theta)$: Objective function to minimize (e.g., loss).  
- $g_t = \nabla_\theta f(\theta_t)$: Gradient of the objective with respect to parameters.  
- $\alpha$: Learning rate (controls step size in updates).  

## **Equations and Derivation**  

### **Step 1: Compute Gradient**  

$$
g_t = \nabla_\theta f(\theta_t)
$$  

The gradient points in the direction of steepest ascent; we move in the opposite direction to minimize $f$.  

---

### **Step 2: Parameter Update Rule**

$$
\theta_{t+1} = \theta_t - \alpha g_t
$$  

This updates parameters by subtracting a fraction ($\alpha$) of the gradient from the current value.  

---

### **Derivation Overview**

Gradient Descent is derived from the **Taylor series expansion** of the objective function $f(\theta)$. For small step sizes, we approximate:  

$$
f(\theta + \Delta\theta) \approx f(\theta) + \nabla_\theta f(\theta)^T \Delta\theta
$$  

To minimize this, set $\Delta\theta = -\alpha \nabla_\theta f(\theta)$. Substituting into the approximation:  

$$
f(\theta_{t+1}) \approx f(\theta_t) - \alpha \|g_t\|^2
$$  

This ensures a decrease in the objective function if $\alpha$ is sufficiently small.

---

## **Features and Advantages**  

| Feature | Description |
|--------|-------------|
| **Simplicity** | Easy to implement and understand. |
| **Guaranteed Convergence (for convex problems)** | For smooth, convex functions with a unique minimum, GD converges to the optimal solution given sufficient iterations. |
| **Global Minima in Convex Problems** | If the loss function is convex, GD avoids local minima. |

---

## **Disadvantages and Limitations**

| Limitation | Description |
|-----------|-------------|
| **Slow Convergence for Non-Convex Problems** | Stuck in local minima or plateaus (e.g., in deep learning). |
| **Sensitivity to Learning Rate ($ \alpha $)** | Too large: overshoots the minimum; too small: converges very slowly. |
| **Computational Cost** | Requires computing gradients over the entire dataset at each step (not suitable for large datasets). |

---

## **Hyperparameters and Their Effects**

| Hyperparameter | Default Value | Description | Impact on Behavior |
|----------------|---------------|-------------|--------------------|
| $\alpha$ (learning rate) | $0.1$ – $0.01$ | Controls the step size of parameter updates. | Larger values accelerate convergence but risk overshooting; smaller values improve stability but slow training. |

---

## **Use Cases**  

Gradient Descent is ideal for:  
- **Convex Optimization Problems**: Linear regression, logistic regression (when data fits in memory).  
- **Theoretical Understanding**: Teaching and research, where simplicity is preferred over speed.  
- **Small Datasets**: When computational resources are limited (e.g., small-scale ML problems).  

**Examples**:  
- Training linear models on small datasets.  
- Solving quadratic optimization problems in finance or engineering.  

---

## **Variants of Gradient Descent**

| Variant | Description |
|--------|-------------|
| **Stochastic Gradient Descent (SGD)** | Uses a single data point per update, reducing computational cost but increasing noise. |
| **Mini-Batch GD** | Balances accuracy and efficiency by using small batches of data. |
| **Momentum-based GD** | Adds momentum to accelerate convergence and escape local minima. |

---

## **Practical Considerations**

### **Learning Rate Scheduling**  
- Use techniques like **step decay**, **exponential decay**, or **cosine annealing** to adjust $\alpha$ over time.  

### **Initialization of Parameters**  
- Poor initialization can lead to vanishing/exploding gradients, even in GD. Use techniques like **Xavier Initialization** or **He Initialization** for neural networks.

### **Numerical Stability**  
- Ensure gradient calculations are numerically stable (e.g., using floating-point precision and avoiding division by zero).  

---

## **Key Equations Recap**

1. **Gradient Calculation**: 

$$
g_t = \nabla_\theta f(\theta_t)
$$  

2. **Parameter Update Rule**:  

$$
\theta_{t+1} = \theta_t - \alpha g_t
$$  

---

## **Example: Linear Regression with GD**

**Objective Function (Mean Squared Error)**:  

$$
f(\theta) = \frac{1}{2n}\sum_{i=1}^n (\theta x_i - y_i)^2
$$  

**Gradient**: 

$$
g_t = \frac{1}{n} \sum_{i=1}^n (\theta x_i - y_i) x_i
$$  

**Update Rule**:  

$$
\theta_{t+1} = \theta_t - \alpha g_t
$$  

## **Additional Notes**

- **GD in Deep Learning**: While not used directly for deep networks (due to computational cost), GD is the basis for variants like **SGD with momentum** and **ADAM**, which are preferred in practice.  
- **History**: GD was first proposed by Cauchy in 1847, and remains a cornerstone of optimization theory.  

---

## **References**
- Cauchy, A. (1847). *Méthode générale pour la résolution des systèmes d'équations simultanées*.  
- Bottou, L., & Bousquet, O. (2008). *The Trade-offs of Large Scale Learning*. NIPS.  

## Code

```python
import numpy as np

# Loss and gradient
def loss(theta):
    return (theta - 5)**2

def grad(theta):
    return 2 * (theta - 5)

# Hyperparameters
eta = 0.1    # learning rate
epochs = 20

# Initialize parameter
theta = 0.0

print(f"Initial theta = {theta:.4f}, loss = {loss(theta):.4f}")

# Training loop
for t in range(1, epochs+1):
    g = grad(theta)              # compute gradient
    theta = theta - eta * g      # update rule
    
    print(f"Step {t:2d}: theta = {theta:.6f}, loss = {loss(theta):.6f}")
```