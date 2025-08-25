# Least Squares Approximations

## Introduction
Least squares approximation is a fundamental technique in linear algebra and applied mathematics used to find the "best-fit" solution to a system of linear equations that has no exact solution. This often occurs in practice when a system is **overdetermined**, meaning there are more equations than unknowns. By minimizing the sum of the squares of the differences between the observed and predicted values, this method provides a robust way to model data and is invaluable in fields like statistics, machine learning, engineering, and data science.

## The Geometric Interpretation
The core idea behind the least squares method is geometric. Consider a system of equations $A\mathbf{x} = \mathbf{y}$. An exact solution exists only if the vector $\mathbf{y}$ lies in the **column space** of the matrix $A$, denoted $\text{Col}(A)$. If $\mathbf{y}$ is outside this subspace, no exact solution is possible.

The least squares method resolves this by finding the vector in $\text{Col}(A)$ that is closest to $\mathbf{y}$. This closest vector is the **orthogonal projection** of $\mathbf{y}$ onto the column space, which we will call $\hat{\mathbf{y}}$. The problem then becomes finding the vector of coefficients $\hat{\mathbf{x}}$ such that:

$$A\hat{\mathbf{x}} = \hat{\mathbf{y}} = \text{proj}_{\text{Col}(A)}(\mathbf{y})$$

This $\hat{\mathbf{x}}$ is the least squares solution. The difference, $\mathbf{e} = \mathbf{y} - \hat{\mathbf{y}}$, is the residual or error vector, which is orthogonal to the column space of $A$.

## The Algebraic Solution: Normal Equations
To find the least squares solution $\hat{\mathbf{x}}$, we want to minimize the squared norm of the residual vector:

$$
\text{minimize } \|\mathbf{y} - A\mathbf{x}\|^2
$$

The geometric condition that the residual $\mathbf{y} - A\hat{\mathbf{x}}$ must be orthogonal to the column space of $A$ leads to the following algebraic condition:

$$
A^T (\mathbf{y} - A\hat{\mathbf{x}}) = \mathbf{0}
$$

Rearranging this gives the famous **normal equations**:

$$A^T A \hat{\mathbf{x}} = A^T \mathbf{y}$$

If the matrix $A$ has linearly independent columns (i.e., full column rank), then the matrix $A^T A$ is invertible, and we can solve for a unique least squares solution:

$$\hat{\mathbf{x}} = (A^T A)^{-1} A^T \mathbf{y}$$

## Example: Linear Regression
Consider fitting a line $y = c_0 + c_1 t$ to three data points: $(1, 2)$, $(2, 3)$, and $(3, 5)$. The matrix form $A\mathbf{x} = \mathbf{y}$ is:

$$A = \begin{bmatrix}1 & 1 \\
1 & 2 \\
1 & 3\end{bmatrix}, \quad \mathbf{x} = \begin{bmatrix} c_0 \\
c_1 \end{bmatrix}, \quad \mathbf{y} = \begin{bmatrix} 2 \\
3 \\
5 \end{bmatrix}$$

First, compute $A^T A$ and $A^T \mathbf{y}$:

$$
A^T A = \begin{bmatrix}1 & 1 & 1 \\
1 & 2 & 3\end{bmatrix} \begin{bmatrix}1 & 1 \\
1 & 2 \\
1 & 3\end{bmatrix} = \begin{bmatrix}3 & 6 \\
6 & 14\end{bmatrix}
$$

$$
A^T \mathbf{y} = \begin{bmatrix}1 & 1 & 1 \\
1 & 2 & 3\end{bmatrix} \begin{bmatrix}2 \\
3 \\ 5\end{bmatrix} = \begin{bmatrix}2+3+5 \\
2+6+15\end{bmatrix} = \begin{bmatrix}10 \\
23\end{bmatrix}
$$

Now, solve the normal equations $A^T A \hat{\mathbf{x}} = A^T \mathbf{y}$:

$$
\begin{bmatrix}3 & 6 \\
6 & 14\end{bmatrix} \begin{bmatrix} c_0 \\
c_1 \end{bmatrix} = \begin{bmatrix}10 \\
23\end{bmatrix}
$$

Solving this system (e.g., using elimination or matrix inversion) yields:

$$c_1 = 1.5, \quad c_0 = 1/3 \approx 0.333$$

Thus, the best-fit line that minimizes the sum of squared errors is $y = \frac{1}{3} + 1.5t$.

## Properties
- **Minimization**: The least squares solution $\hat{\mathbf{x}}$ minimizes the Euclidean norm of the residual vector $\|\mathbf{y} - A\mathbf{x}\|$.
- **Projection**: The vector $A\hat{\mathbf{x}}$ is the orthogonal projection of $\mathbf{y}$ onto the column space of $A$.
- **Orthogonality**: The residual vector $\mathbf{e} = \mathbf{y} - A\hat{\mathbf{x}}$ is orthogonal to the column space of $A$.
- **Uniqueness**: The least squares solution $\hat{\mathbf{x}}$ is unique if and only if the columns of $A$ are linearly independent.

## Applications
- **Machine Learning**: Forms the basis of linear regression for predicting continuous outcomes based on input features.
- **Signal Processing**: Used to filter noise from signals and reconstruct underlying data trends by fitting models to noisy measurements.
- **Engineering and Physics**: Essential for data fitting, system identification, and modeling physical systems where measurements contain errors.
- **Economics**: Used in econometrics to model relationships between economic variables.

This concept is pivotal across various disciplines, providing a powerful and principled method for approximation and data-driven modeling.