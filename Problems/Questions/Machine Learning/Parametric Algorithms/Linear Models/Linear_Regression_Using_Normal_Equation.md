### Simple Linear Regression Using Normal Equation: θ = (Xᵗ X)⁻¹ Xᵗ y

#### Introduction
Simple linear regression is a statistical method used to model the relationship between a dependent variable $y$ and one or more independent variables $x$. The goal is to find the best-fitting line that minimizes the sum of squared errors between the observed responses in the dataset and the responses predicted by the line. This approach can be efficiently solved using the normal equation, which provides a closed-form solution for the optimal parameters θ.

The normal equation plays a crucial role in linear regression as it allows us to directly compute the coefficients (θ) without needing iterative methods like gradient descent. It is particularly useful for small datasets where computational efficiency is manageable. The formula for the normal equation is:

$$
\theta = (X^\top X)^{-1} X^\top y
$$

This section will explain the components of the normal equation, provide a worked example, discuss its properties, and highlight its applications.

---

### Definition

**Simple Linear Regression:** A statistical method used to model the relationship between a dependent variable (y) and one or more independent variables (x). It assumes a linear relationship between these variables.

**Normal Equation:** A mathematical formula used in linear regression to find the optimal parameters θ that minimize the sum of squared errors. The equation is given by:

$$
\theta = (X^\top X)^{-1} X^\top y
$$

Where:
- $\theta$ is a vector of coefficients.
- $X$ is the matrix of feature vectors.
- $y$ is the vector of target values.

**Components:**
1. **Hypothesis Function:** Represents the linear relationship between features and targets, defined as $h_\theta(x) = \theta^\top x$.
2. **Cost Function:** Measures the difference between predicted and actual values using mean squared error.
3. **Optimization:** The normal equation finds θ that minimizes the cost function by solving a system of linear equations derived from partial derivatives set to zero.

---

### Example

**Dataset:**
Consider a simple dataset with two points:
- Point 1: (x₁, y₁) = (1, 2)
- Point 2: (x₂, y₂) = (3, 4)

**Step-by-Step Calculation:**

1. **Construct the Design Matrix X:**

$$
   X = \begin{bmatrix}
   1 & 1 \\
   1 & 3
   \end{bmatrix}, \quad 
   y = \begin{bmatrix}
   2 \\
   4
   \end{bmatrix}
$$

2. **Compute $X^\top X$:**

$$
   X^\top X = \begin{bmatrix}
   1 & 1 \\
   1 & 3
   \end{bmatrix}^\top 
   \begin{bmatrix}
   1 & 1 \\
   1 & 3
   \end{bmatrix} = 
   \begin{bmatrix}
   2 & 4 \\
   4 & 10
   \end{bmatrix}
$$

3. **Compute the Inverse of $X^\top X$:**

$$
   (X^\top X)^{-1} = \frac{1}{(2)(10) - (4)(4)} 
   \begin{bmatrix}
   10 & -4 \\
   -4 & 2
   \end{bmatrix} = 
   \frac{1}{12} 
   \begin{bmatrix}
   10 & -4 \\
   -4 & 2
   \end{bmatrix}
$$

4. **Compute $X^\top y$:**

$$
   X^\top y = \begin{bmatrix}
   1 & 1 \\
   1 & 3
   \end{bmatrix}^\top 
   \begin{bmatrix}
   2 \\
   4
   \end{bmatrix} = 
   \begin{bmatrix}
   6 \\
   14
   \end{bmatrix}
$$

5. **Calculate θ:**

$$
   \theta = (X^\top X)^{-1} X^\top y = \frac{1}{12} 
   \begin{bmatrix}
   10 & -4 \\
   -4 & 2
   \end{bmatrix}
   \begin{bmatrix}
   6 \\
   14
   \end{bmatrix} = 
   \begin{bmatrix}
   1 \\
   1
   \end{bmatrix}
$$

Thus, the optimal parameters are $\theta_0 = 1$ and $\theta_1 = 1$, resulting in the regression line $y = x + 1$.

---

### Properties

1. **Closed-Form Solution:** Provides an exact solution without iterative computation.
2. **Efficiency for Small Datasets:** Suitable when the number of features is small (e.g., n ≤ 2000).
3. **Assumptions:**
   - Linearity between features and target.
   - No multicollinearity among features.
4. **Optimality:** Yields the best linear unbiased estimator under the Gauss-Markov theorem when errors are normally distributed.

---

### Applications

1. **Economics:** Modeling relationships like income vs. expenditure or price vs. demand.
2. **Machine Learning:** Foundation for more complex models, serving as a benchmark for performance comparison.
3. **Engineering:** Predicting system outputs based on input parameters.
4. **Data Science:** Analyzing trends and forecasting future outcomes.

---

### Conclusion

The normal equation is a cornerstone of linear regression, offering an efficient way to determine the best fit line by minimizing the sum of squared errors. It provides exact solutions under certain conditions and serves as a fundamental concept in understanding more advanced machine learning algorithms. While it may not be suitable for very large datasets due to computational constraints, it remains invaluable for foundational analysis and theoretical understanding.