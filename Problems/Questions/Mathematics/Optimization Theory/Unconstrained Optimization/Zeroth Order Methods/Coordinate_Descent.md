# Coordinate Descent

## Introduction
**Coordinate Descent** is an iterative optimization algorithm that solves optimization problems by successively performing approximate minimization along coordinate directions. Instead of tackling a complex, high-dimensional problem all at once, it breaks it down into a series of simple, one-dimensional problems. Its simplicity and computational efficiency, especially for problems with specific structures, have made it an indispensable tool for solving large-scale machine learning problems, most notably **Lasso and ElasticNet regression**.

## The Coordinate Descent Algorithm
The core idea of coordinate descent is to optimize a multivariate function by minimizing it along one coordinate direction at a time, while keeping all other coordinates fixed.

For an $n$-dimensional function $f(\mathbf{x}) = f(x_1, x_2, \dots, x_n)$, the algorithm proceeds as follows:
1.  **Initialize**: Start with an initial guess for the solution, $\mathbf{x}^{(0)}$.
2.  **Iterate**: For each iteration $k = 0, 1, 2, \dots$:
    -   Cycle through the coordinate directions from $j = 1$ to $n$.
    -   For each coordinate $j$, update it by solving a one-dimensional optimization problem, keeping all other coordinates fixed at their most recent values:

        $$x_j^{(k+1)} = \arg\min_{z \in \mathbb{R}} f(x_1^{(k+1)}, \dots, x_{j-1}^{(k+1)}, z, x_{j+1}^{(k)}, \dots, x_n^{(k)})$$
        
3.  **Repeat**: Continue cycling through all coordinates until the solution converges (i.e., the change between iterations is below a tolerance threshold). The order of coordinates can be cyclical or randomized.

### Geometric Intuition
Geometrically, coordinate descent takes "staircase" steps. Instead of moving in the direction of the steepest descent (the gradient), it only takes steps that are parallel to the coordinate axes.
-   For functions with **circular or axis-aligned elliptical contours** (uncorrelated variables), this process is very efficient and converges quickly.
-   For functions with **highly rotated elliptical contours** (highly correlated variables), coordinate descent can be very slow, as it is forced to take many small, zig-zagging steps to reach the minimum.

## Example
Consider minimizing the function $f(x_1, x_2) = (x_1 - 1)^2 + (x_2 - 2)^2$, which has a clear minimum at $(1, 2)$. Let's start from an initial guess of $\mathbf{x}^{(0)} = (0, 0)$.

**Iteration 1:**
1.  **Update $x_1$**: Keep $x_2 = 0$ fixed and minimize $f(x_1, 0) = (x_1 - 1)^2 + (0 - 2)^2 = (x_1 - 1)^2 + 4$.
    -   The minimum occurs when $x_1 - 1 = 0 \implies x_1 = 1$.
    -   The new point is $(1, 0)$.
2.  **Update $x_2$**: Keep $x_1 = 1$ fixed and minimize $f(1, x_2) = (1 - 1)^2 + (x_2 - 2)^2 = (x_2 - 2)^2$.
    -   The minimum occurs when $x_2 - 2 = 0 \implies x_2 = 2$.
    -   The new point is $(1, 2)$.

After one full cycle, the algorithm has already reached the exact minimum, $(1, 2)$.

## Why Coordinate Descent Shines: The Case of Lasso
Coordinate descent's real power in machine learning comes from its ability to efficiently solve problems with non-differentiable but **separable** objective functions. The prime example is **Lasso (L1-regularized) Regression**.

The Lasso objective function is:

$$ \text{minimize } \|\mathbf{y} - \mathbf{X}\boldsymbol{\beta}\|_ 2^2 + \lambda \|\boldsymbol{\beta}\|_ 1 = \text{minimize } \sum_{i=1}^n (y_i - \mathbf{x}_ i^T\boldsymbol{\beta})^2 + \lambda \sum_{j=1}^p |\beta_j|$$

The L1 norm term $|\beta_j|$ has a non-differentiable "kink" at zero, so standard gradient descent cannot be directly applied. However, when we use coordinate descent and optimize with respect to a single coefficient $\beta_j$ while holding all others fixed, the 1D subproblem has a simple, analytical, closed-form solution called the **soft-thresholding operator**. This allows for extremely fast updates for each coefficient, making coordinate descent the standard and most efficient solver for Lasso and ElasticNet problems.

## Properties and Convergence
-   **Strengths**:
    -   **Simplicity**: The algorithm is simple to understand and implement.
    -   **No Learning Rate**: Unlike gradient descent, it does not require tuning a learning rate hyperparameter.
    -   **Efficiency on a Niche**: Exceptionally fast for problems where the 1D subproblem is cheap to solve (like Lasso).
    -   **Handles some non-differentiable functions**: Can work on objectives where the non-differentiable part is separable.
-   **Weaknesses**:
    -   Can be very slow if variables are highly correlated.
    -   Convergence is not guaranteed for all types of non-differentiable or non-convex functions.
-   **Convergence**: The algorithm is guaranteed to converge to the global minimum for convex, differentiable functions. It also converges for functions like the Lasso objective, where the non-differentiable part is separable.

## Applications
1.  **Lasso and ElasticNet Regression**: This is the primary application in machine learning. Coordinate descent is the state-of-the-art solver for these models.
2.  **Support Vector Machines (SVMs)**: The dual problem of a linear SVM can be solved efficiently with coordinate descent, as implemented in popular libraries like LIBSVM.
3.  **Matrix Factorization**: Used in recommendation systems and other problems involving large-scale matrix decomposition.
4.  **Image Processing**: For solving optimization problems related to image denoising and compressed sensing.