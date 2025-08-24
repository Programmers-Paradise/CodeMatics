# Gaussian Elimination
## Introduction

Gaussian elimination is a fundamental and systematic algorithm in linear algebra used to solve systems of linear equations. It transforms a system of equations into an equivalent one that is in "row-echelon form," making it much easier to solve. This method is also used to find the rank of a matrix, calculate the determinant of a matrix, and find the inverse of an invertible matrix.

## Definition

Given a system of linear equations represented in matrix form as $A\mathbf{x} = \mathbf{b}$, Gaussian elimination operates on the corresponding **augmented matrix** $[A|\mathbf{b}]$.

$$[A|\mathbf{b}] = \begin{bmatrix}a_{11} & a_{12} & \cdots & a_{1n} & | & b_1 \\
a_{21} & a_{22} & \cdots & a_{2n} & | & b_2 \\
vdots & \vdots & \ddots & \vdots & | & \vdots \\
a_{m1} & a_{m2} & \cdots & a_{mn} & | & b_m\end{bmatrix}
$$

The process consists of two main stages:

1.  **Forward Elimination**: A sequence of elementary row operations is applied to the augmented matrix to reduce it to an upper triangular form (row-echelon form). The goal is to introduce zeros below the main diagonal. The allowed row operations are:
    -   Swapping two rows ($R_i \leftrightarrow R_j$).
    -   Multiplying a row by a non-zero scalar ($R_i \rightarrow kR_i$).
    -   Adding a multiple of one row to another row ($R_i \rightarrow R_i + kR_j$).

2.  **Back Substitution**: Once the matrix is in upper triangular form, the system is solved for each variable starting from the last equation (bottom row) and working upwards. For the $j$-th variable:

$$
x_j = \frac{1}{a_{jj}} \left(b_j - \sum_{k=j+1}^{n} a_{jk}x_k\right)
$$

This two-step process provides an efficient way to find the unique solution, determine if there are infinite solutions, or conclude that no solution exists.

## Example

Consider the system of linear equations:

$$
\begin{cases}x + 2y + z = 3 \\
2x + 5y - z = -4 \\
3x - 2y - z = 5\end{cases}
$$

First, we form the augmented matrix:

$$
\begin{bmatrix}1 & 2 & 1 & | & 3 \\
2 & 5 & -1 & | & -4 \\
3 & -2 & -1 & | & 5\end{bmatrix}
$$

**Stage 1: Forward Elimination**
-   Make the elements below the first pivot (in column 1) zero:
    -   $R_2 \rightarrow R_2 - 2R_1$
    -   $R_3 \rightarrow R_3 - 3R_1$

$$
\begin{bmatrix}1 & 2 & 1 & | & 3 \\
0 & 1 & -3 & | & -10 \\
0 & -8 & -4 & | & -4\end{bmatrix}
$$

-   Make the element below the second pivot (in column 2) zero:
    -   $R_3 \rightarrow R_3 + 8R_2$

$$
\begin{bmatrix}1 & 2 & 1 & | & 3 \\
0 & 1 & -3 & | & -10 \\
0 & 0 & -28 & | & -84\end{bmatrix}
$$

**Stage 2: Back Substitution**
The matrix corresponds to the following system:

$$
\begin{cases}x + 2y + z = 3 \\
y - 3z = -10 \\
-28z = -84\end{cases}
$$

-   From the last equation, we solve for $z$:

$$
-28z = -84 \implies z = 3
$$

-   Substitute $z=3$ into the second equation to solve for $y$:

$$
y - 3(3) = -10 \implies y - 9 = -10 \implies y = -1
$$
    
-   Substitute $y=-1$ and $z=3$ into the first equation to solve for $x$:

$$
x + 2(-1) + 3 = 3 \implies x - 2 + 3 = 3 \implies x = 2
$$

The solution is $x=2, y=-1, z=3$.

## Properties

-   **Uniqueness of Solution**: The method reveals whether the system has a unique solution (one pivot per variable), no solution (a contradictory row like $[0 \ 0 \ | \ 1]$), or infinitely many solutions (fewer pivots than variables).
-   **Computational Complexity**: The algorithm has a time complexity of $O(n^3)$ for an $n \times n$ matrix, making it computationally feasible for moderate-sized systems.
-   **Numerical Stability**: Standard Gaussian elimination can be numerically unstable if it encounters small or zero pivots. Techniques like **pivoting** (swapping rows to use a larger pivot element) are used to improve stability.
-   **Determinant Calculation**: The determinant of the original matrix can be calculated during the forward elimination phase by keeping track of row swaps and multiplications.

## Applications

1.  **Computer Graphics**: Solving linear systems is essential for rendering 3D graphics, including transformations, lighting calculations, and projections.
2.  **Machine Learning**: While not always used directly for large systems due to its complexity, it is a foundational concept for understanding matrix decompositions (like LU decomposition) used in optimization algorithms for training models.
3.  **Engineering**: It is widely used in structural analysis to solve for forces in trusses, in circuit analysis to find currents and voltages (using Kirchhoff's laws), and in fluid dynamics.
4.  **Scientific Computing**: Gaussian elimination and its variants are used to numerically solve systems of linear equations that arise from the discretization of partial differential equations (PDEs) in physics and other sciences.

Gaussian elimination is a versatile tool with broad applications across various scientific and engineering disciplines, providing an efficient method to solve linear systems.