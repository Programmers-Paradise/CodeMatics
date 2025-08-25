# Positive-Definite Matrices in Linear Algebra

## Introduction
Positive definite matrices are a special class of symmetric matrices that are fundamental to many areas of mathematics and its applications. They play a central role in optimization, statistics, machine learning, and physics. A matrix is positive definite if the quadratic form associated with it is always positive for any non-zero vector. This property is analogous to a positive number and ensures that functions have unique minima, that covariance matrices are valid, and that energy functions correspond to stable equilibria.

## Definition and Related Concepts
A real $n \times n$ matrix $A$ is **symmetric** if $A = A^T$. Building on this, we define definiteness based on the behavior of the quadratic form $x^T A x$.

-   **Positive Definite (PD)**: A symmetric matrix $A$ is positive definite if $x^T A x > 0$ for all non-zero vectors $x \in \mathbb{R}^n$.
-   **Positive Semidefinite (PSD)**: A symmetric matrix $A$ is positive semidefinite if $x^T A x \ge 0$ for all non-zero vectors $x$.
-   **Negative Definite (ND)**: A symmetric matrix $A$ is negative definite if $x^T A x < 0$ for all non-zero vectors $x$.
-   **Negative Semidefinite (NSD)**: A symmetric matrix $A$ is negative semidefinite if $x^T A x \le 0$ for all non-zero vectors $x$.
-   **Indefinite**: A symmetric matrix is indefinite if $x^T A x$ takes on both positive and negative values.

## Tests for Positive Definiteness
There are several equivalent ways to determine if a symmetric matrix $A$ is positive definite:

1.  **The Eigenvalue Test**: The matrix $A$ is positive definite if and only if all of its eigenvalues are strictly positive ($\lambda_i > 0$). It is positive semidefinite if all eigenvalues are non-negative ($\lambda_i \ge 0$).

2.  **The Determinant Test (Sylvester's Criterion)**: The matrix $A$ is positive definite if and only if the determinants of all its **leading principal minors** are strictly positive. The $k$-th leading principal minor is the determinant of the top-left $k \times k$ submatrix of $A$.

3.  **The Cholesky Decomposition Test**: The matrix $A$ is positive definite if and only if it has a unique **Cholesky decomposition** of the form $A = LL^T$, where $L$ is a lower triangular matrix with strictly positive diagonal entries.

## Example
Let's determine if the symmetric matrix $A = \begin{bmatrix}2 & -1 \\-1 & 2\end{bmatrix}$ is positive definite.

**Method 1: Eigenvalue Test**
The characteristic equation is $\det(A - \lambda I) = 0$:

$$(2 - \lambda)(2 - \lambda) - (-1)(-1) = \lambda^2 - 4\lambda + 4 - 1 = \lambda^2 - 4\lambda + 3 = 0$$

Factoring gives $(\lambda-1)(\lambda-3) = 0$. The eigenvalues are $\lambda_1 = 1$ and $\lambda_2 = 3$. Since both eigenvalues are positive, the matrix **is positive definite**.

**Method 2: Determinant Test**
We check the determinants of the leading principal minors:
-   The first minor (top-left 1x1 submatrix): $\det([2]) = 2$. This is positive.
-   The second minor (the matrix A itself): $\det(A) = (2)(2) - (-1)(-1) = 4 - 1 = 3$. This is positive.
Since all leading principal minors have positive determinants, the matrix **is positive definite**.

## Key Properties
If a matrix $A$ is positive definite, it has the following properties:
-   All its diagonal entries are positive ($a_{ii} > 0$).
-   It is invertible, and its inverse $A^{-1}$ is also positive definite.
-   The sum of two positive definite matrices of the same size is positive definite.
-   It can be used to define a valid inner product and norm on $\mathbb{R}^n$ via $\langle x, y \rangle_A = x^T A y$.

## Applications
-   **Optimization**: In multivariable calculus, if the **Hessian matrix** of a function is positive definite at a critical point, that point is a local minimum. This is the foundation of many convex optimization algorithms.
-   **Statistics and Machine Learning**: **Covariance matrices** must be positive semidefinite because the variance of any linear combination of the random variables must be non-negative. Similarly, **kernel matrices** used in Support Vector Machines (SVMs) and Gaussian processes must be positive semidefinite to ensure a valid notion of distance or similarity.
-   **Physics**: The kinetic energy of a system of moving particles is always positive and can be expressed as a quadratic form $v^T M v$, where $M$ is the (positive definite) mass matrix. Potential energy functions near a stable equilibrium point are also described by positive definite matrices.
-   **Geometry and Metrics**: Positive definite matrices are used to define generalized notions of distance. The **Mahalanobis distance**, used widely in statistics to measure the distance between a point and a distribution, is defined using the inverse of the covariance matrix.