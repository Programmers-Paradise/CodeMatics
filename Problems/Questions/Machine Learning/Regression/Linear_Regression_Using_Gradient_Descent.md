# Simple Linear Regression Using Gradient Descent

## Introduction
Simple linear regression is a fundamental statistical technique used to model the relationship between two variables—a dependent variable $y$ and an independent variable $x$. It aims to find the best-fitting straight line through data points, allowing predictions of y based on x. Gradient descent is an optimization algorithm that minimizes the cost function associated with this regression, helping us determine the optimal parameters for our model.

## Definition
**Simple Linear Regression**: Models the linear relationship between a dependent variable $y$ and an independent variable $x$ using the equation $h_\theta(x) = \theta_0 + \theta_1 x$, where $\theta_0$ is the intercept and $\theta_1$ is the slope.

**Gradient Descent**: An iterative optimization algorithm used to minimize a function by adjusting parameters in the direction of steepest descent, defined by the negative gradient. It updates parameters using the formula:

$$
\theta_j = \theta_j - \alpha \frac{1}{m} \sum_{i=1}^{m} (h_\theta(x_i) - y_i) x_i^j
$$

where $\alpha$ is the learning rate, and $m$ is the number of training examples.

**Cost Function**: Measures the average squared difference between predicted values (\( h_\theta(x_i) \)) and actual values (\( y_i \)):

$$
J(\theta_0, \theta_1) = \frac{1}{2m} \sum_{i=1}^{m} (h_\theta(x_i) - y_i)^2
$$

## Example

**Data**: Consider the dataset:

| x | y |
|---|---|
| 1 | 2 |
| 2 | 3 |
| 3 | 4 |
| 4 | 5 |


**Objective**: Find $\theta_0$ and $\theta_1$ to minimize $J(\theta)$.

**Initialization**: Start with $\theta_0 = 0$, $\theta_1 = 0$, learning rate $\alpha = 0.01$, and $m$=4.

## Gradient Descent: First Iteration for Linear Regression

We are given the objective to minimize the cost function $J(\theta)$:

$$
J(\theta) = \frac{1}{2m} \sum_{i=1}^m \left(h_\theta(x_i) - y_i\right)^2
$$

Where the hypothesis function is:

$$
h_\theta(x) = \theta_0 + \theta_1 x
$$

### Given:

- Initial parameters: $\theta_0 = 0$, $\theta_1 = 0$  
- Learning rate: $\alpha = 0.01$  
- Number of examples: $m = 4$  
- Data points: $(x_1, y_1) = (0, 2),\ (1, 3),\ (2, 4),\ (3, 5)$

---

### Step 1: Compute Predictions

Since $\theta_0 = \theta_1 = 0$, all predictions are:

$$
\begin{aligned}
h_\theta(x_1) &= 0 + 0 \cdot 0 = 0 \\
h_\theta(x_2) &= 0 + 0 \cdot 1 = 0 \\
h_\theta(x_3) &= 0 + 0 \cdot 2 = 0 \\
h_\theta(x_4) &= 0 + 0 \cdot 3 = 0
\end{aligned}
$$

---

### Step 2: Compute Gradients

Gradient with respect to $\theta_0$:

$$
\frac{\partial J}{\partial \theta_0} = \frac{1}{m} \sum_{i=1}^{m} \left(h_\theta(x_i) - y_i\right) = \frac{1}{4} \left[(0 - 2) + (0 - 3) + (0 - 4) + (0 - 5)\right] = -3.5
$$

Gradient with respect to $\theta_1$:

$$
\begin{aligned}
\frac{\partial J}{\partial \theta_1} &= \frac{1}{4} \left[(0 - 2)\cdot 0 + (0 - 3)\cdot 1 + (0 - 4)\cdot 2 + (0 - 5)\cdot 3\right] \\
&= \frac{1}{4} (0 - 3 - 8 - 15) = -6.5
\end{aligned}
$$

---

### Step 3: Update Parameters

$$
\begin{aligned}
\theta_0 &= \theta_0 - \alpha \cdot \frac{\partial J}{\partial \theta_0} = 0 - 0.01 \cdot (-3.5) = 0.035 \\
\theta_1 &= \theta_1 - \alpha \cdot \frac{\partial J}{\partial \theta_1} = 0 - 0.01 \cdot (-6.5) = 0.065
\end{aligned}
$$

---

### ✅ Updated Parameters After First Iteration

$$
\theta_0 = 0.035, \quad \theta_1 = 0.065
$$
    
**Subsequent Iterations**: Repeat the process, gradually adjusting $\theta_0$ and $\theta_1$ until convergence.

#### Properties
1. **Learning Rate $(α)$**: Controls step size; too large leads to slow convergence or divergence, while too small slows down learning.
2. **Feature Scaling**: Helps in faster convergence by normalizing feature ranges.
3. **Convergence**: The algorithm stops when the change in cost is below a threshold or reaches a maximum number of iterations.

#### Applications
- **Machine Learning**: Core to algorithms like Support Vector Machines and Neural Networks.
- **Economics**: Predicting variables such as GDP growth based on unemployment rates.
- **Engineering**: Modeling system responses for optimization.

#### Conclusion
Gradient descent efficiently finds optimal parameters for simple linear regression, enabling accurate predictions. Understanding its mechanics is crucial for model customization and troubleshooting. Future advancements may include adaptive learning rates and advanced optimizers like Adam for enhanced performance.

