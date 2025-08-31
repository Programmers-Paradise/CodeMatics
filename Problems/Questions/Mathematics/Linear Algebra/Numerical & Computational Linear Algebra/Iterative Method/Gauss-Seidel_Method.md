# Gauss-Seidel Method

## Introduction
The **Gauss-Seidel method** is a classic **iterative technique** used to solve a system of linear equations, $A\mathbf{x} = \mathbf{b}$. It is particularly useful for very large and sparse systems, where direct methods like Gaussian elimination or LU decomposition would be prohibitively expensive in terms of computation and memory. The method improves upon the simpler Jacobi iteration by using the most recently updated variable values within the same iteration, which often leads to faster convergence. It is widely applied in numerical analysis, scientific computing, and engineering.

## The Gauss-Seidel Algorithm
The core idea of the Gauss-Seidel method is to iteratively refine a guess for the solution vector $\mathbf{x}$. It cycles through each equation, solving for one variable at a time while substituting the most up-to-date values for all other variables.

For the $i$-th equation in the system, $\sum_{j=1}^n a_{ij}x_j = b_i$, we can solve for $x_i$:

$$x_i = \frac{1}{a_{ii}} \left( b_i - \sum_{j \neq i} a_{ij}x_j \right)$$

The iterative update rule for the $(k+1)$-th iteration is:

$$x_i^{(k+1)} = \frac{1}{a_{ii}} \left( b_i - \sum_{j=1}^{i-1} a_{ij}x_j^{(k+1)} - \sum_{j=i+1}^n a_{ij}x_j^{(k)} \right)$$

The key feature is in the first summation: to compute the new value for $x_i^{(k+1)}$, we use the new values $x_1^{(k+1)}, \dots, x_{i-1}^{(k+1)}$ that have **already been computed in the current iteration**. For the remaining variables, we use the values from the previous iteration, $x_{i+1}^{(k)}, \dots, x_n^{(k)}$.

### Matrix Formulation
If we decompose the matrix $A$ into its diagonal ($D$), strictly lower triangular ($-L$), and strictly upper triangular ($-U$) parts, such that $A = D - L - U$, the update rule can be written as:

$$\mathbf{x}^{(k+1)} = (D-L)^{-1} (U\mathbf{x}^{(k)} + \mathbf{b})$$

This system is solved efficiently at each step using forward substitution.

## Comparison with the Jacobi Method
-   **Jacobi Method**: Computes all the new values for the $(k+1)$-th iteration using **only** the old values from the $k$-th iteration. This means the computations for all variables are independent and can be fully parallelized.
-   **Gauss-Seidel Method**: Uses the new values from the current $(k+1)$-th iteration as soon as they are available. This is inherently sequential but often converges faster.

## Example
Consider solving the system:

$$\begin{cases}
4x_1 + x_2 = 5 \\
x_1 + 3x_2 = 6
\end{cases}$$

The true solution is approximately $x_1 \approx 0.818$ and $x_2 \approx 1.727$.

**1. Rearrange for Iteration:**
-   $x_1 = (5 - x_2) / 4$
-   $x_2 = (6 - x_1) / 3$

**2. Initialize:** Start with an initial guess, $\mathbf{x}^{(0)} = (0, 0)$.

**3. Walk through Iterations:**
-   **Iteration 1:**
    -   $x_1^{(1)} = (5 - x_2^{(0)}) / 4 = (5 - 0) / 4 = 1.25$
    -   $x_2^{(1)} = (6 - x_1^{(1)}) / 3 = (6 - 1.25) / 3 = 4.75 / 3 \approx 1.583$
    -   Result: $(1.25, 1.583)$
-   **Iteration 2:**
    -   $x_1^{(2)} = (5 - x_2^{(1)}) / 4 = (5 - 1.583) / 4 \approx 0.854$
    -   $x_2^{(2)} = (6 - x_1^{(2)}) / 3 = (6 - 0.854) / 3 \approx 1.715$
    -   Result: $(0.854, 1.715)$
-   **Iteration 3:**
    -   $x_1^{(3)} = (5 - x_2^{(2)}) / 4 = (5 - 1.715) / 4 \approx 0.821$
    -   $x_2^{(3)} = (6 - x_1^{(3)}) / 3 = (6 - 0.821) / 3 \approx 1.726$
    -   Result: $(0.821, 1.726)$

As the iterations continue, the solution clearly converges to the true solution.

## Conditions for Convergence
The Gauss-Seidel method is not guaranteed to converge for every system. A **sufficient condition** for convergence is that the matrix $A$ is either:
1.  **Strictly diagonally dominant**: For each row, the absolute value of the diagonal element is greater than the sum of the absolute values of all other elements in that row.
2.  **Symmetric and positive definite**.

## Applications
The Gauss-Seidel method is a workhorse for solving the large, sparse linear systems that arise in many numerical simulations.
-   **Computational Physics and Engineering**: For solving systems of equations that result from the numerical discretization of **partial differential equations (PDEs)**, such as those modeling heat flow (the heat equation) or electric potential (Laplace's equation).
-   **Economics**: In computational economics, for solving large systems of simultaneous equations that model economic equilibria.
-   **Computer Graphics**: Used in physics-based simulation and rendering for tasks like cloth simulation.