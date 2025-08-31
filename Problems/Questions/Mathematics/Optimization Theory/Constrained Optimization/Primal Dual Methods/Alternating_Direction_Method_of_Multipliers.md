# ADMM (Alternating Direction Method of Multipliers)

## Introduction
The **Alternating Direction Method of Multipliers (ADMM)** is a powerful and versatile optimization algorithm that is exceptionally well-suited for solving large-scale and distributed convex optimization problems. It merges the ideas of the **dual ascent** and the **augmented Lagrangian** methods, combining the decomposability of the former with the superior convergence properties of the latter. Its ability to break complex problems into a series of simpler, solvable subproblems has made it a modern workhorse algorithm in a wide array of fields, including machine learning, statistics, signal processing, and computer vision.

## The ADMM Algorithm
ADMM is designed to solve convex optimization problems where the objective function is separable, linked by a linear constraint. The canonical form of a problem solved by ADMM is:

$$\text{minimize} \quad f(\mathbf{x}) + g(\mathbf{z})$$

$$\text{subject to: } A\mathbf{x} + B\mathbf{z} = \mathbf{c}$$

Where $\mathbf{x}$ and $\mathbf{z}$ are the primal variables, and $f$ and $g$ are convex functions.

### The Method
ADMM works by applying the augmented Lagrangian method, but with a crucial modification. Instead of minimizing the augmented Lagrangian jointly over both $\mathbf{x}$ and $\mathbf{z}$ (which can be difficult and destroys the problem's separable structure), ADMM **alternates** between minimizing over $\mathbf{x}$ and $\mathbf{z}$.

This results in a simple, three-step iterative process:
1.  **$\mathbf{x}$-minimization step**: Minimize the augmented Lagrangian with respect to $\mathbf{x}$, keeping $\mathbf{z}$ and the dual variable $\boldsymbol{\lambda}$ fixed.

    $$\mathbf{x}^{(k+1)} := \arg\min_{\mathbf{x}} \left( f(\mathbf{x}) + (\boldsymbol{\lambda}^{(k)})^T(A\mathbf{x} + B\mathbf{z}^{(k)} - \mathbf{c}) + \frac{\rho}{2}\|A\mathbf{x} + B\mathbf{z}^{(k)} - \mathbf{c}\|_2^2 \right)$$
    
3.  **$\mathbf{z}$-minimization step**: Minimize the augmented Lagrangian with respect to $\mathbf{z}$, using the newly updated $\mathbf{x}^{(k+1)}$.

    $$\mathbf{z}^{(k+1)} := \arg\min_{\mathbf{z}} \left( g(\mathbf{z}) + (\boldsymbol{\lambda}^{(k)})^T(A\mathbf{x}^{(k+1)} + B\mathbf{z} - \mathbf{c}) + \frac{\rho}{2}\|A\mathbf{x}^{(k+1)} + B\mathbf{z} - \mathbf{c}\|_2^2 \right)$$
    
5.  **Dual update step**: Update the Lagrange multiplier (the dual variable) using the residual of the current primal variables.

    $$\boldsymbol{\lambda}^{(k+1)} := \boldsymbol{\lambda}^{(k)} + \rho(A\mathbf{x}^{(k+1)} + B\mathbf{z}^{(k+1)} - \mathbf{c})$$
    
Here, $\rho > 0$ is the augmented Lagrangian parameter.

## Example: The Lasso Problem
The Lasso (L1-regularized least squares) problem is a perfect example of ADMM's power. The standard Lasso problem is:

$$\text{minimize} \quad \frac{1}{2}\|D\mathbf{x}-\mathbf{b}\|_2^2 + \gamma\|\mathbf{x}\|_1$$

This is difficult to solve directly because the objective function is a sum of a smooth term (the squared error) and a non-smooth term (the L1 norm).

**ADMM Formulation:** We can rewrite this in ADMM form by introducing a new variable $\mathbf{z}$:

$$\text{minimize} \quad f(\mathbf{x}) + g(\mathbf{z})$$
$$\text{subject to: } \mathbf{x} - \mathbf{z} = \mathbf{0}$$

where $f(\mathbf{x}) = \frac{1}{2}\|D\mathbf{x}-\mathbf{b}\|_2^2$ and $g(\mathbf{z}) = \gamma\|\mathbf{z}\|_1$.

The ADMM iterative steps become:
1.  **$\mathbf{x}$-update**: An unconstrained quadratic minimization (a standard least-squares problem), which has an efficient, closed-form solution.
2.  **$\mathbf{z}$-update**: A simple problem involving the L1 norm, whose solution is given by the elegant **soft-thresholding operator**.
3.  **$\boldsymbol{\lambda}$-update**: A simple vector addition.

ADMM is highly effective here because it splits the original difficult problem into two subproblems, each of which is very easy to solve.

## Strengths and Key Characteristics
-   **Convergence**: ADMM has very robust convergence properties. It is guaranteed to converge to a solution under very mild conditions on the objective functions (they only need to be convex).
-   **Decomposability**: This is its primary advantage. The alternating updates allow large, complex problems to be broken down into smaller, simpler pieces. This makes it ideal for **distributed optimization**, where data is spread across multiple machines. For example, in "consensus" optimization, each machine solves its own local problem in the x-update, and then they coordinate to find a global consensus variable in the z-update.
-   **Performance**: While it may not be the fastest algorithm for obtaining high-precision solutions, it is often exceptionally fast at converging to a "good enough" solution, which is ideal for many machine learning applications.

## Applications
ADMM has become a modern workhorse algorithm for large-scale convex optimization.
1.  **Machine Learning**:
    -   **Lasso and ElasticNet Regression**: A standard and highly efficient solver for these problems.
    -   **Support Vector Machines (SVMs)**: Used to train SVMs on very large, distributed datasets.
    -   **Matrix Completion**: Used in recommendation systems (like the Netflix Prize problem) to find missing entries in a user-item matrix.
2.  **Signal and Image Processing**:
    -   **Compressed Sensing**: Reconstructing a signal from a small number of measurements.
    -   **Image Deblurring and Denoising**: Restoring corrupted images by solving a large-scale optimization problem.
3.  **Distributed Optimization**: Its ability to decompose problems makes it the state-of-the-art for a wide range of tasks where data or computational resources are decentralized, such as in network resource allocation and decentralized control systems.
4.  **Finance**: Used for solving large-scale portfolio optimization and risk management problems.