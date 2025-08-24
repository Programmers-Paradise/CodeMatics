# Representing Linear Systems in Linear Algebra

## Introduction

Linear systems are fundamental constructs in linear algebra, providing a mathematical framework to model and solve problems involving multiple variables with linear relationships. They are used extensively in science, engineering, and computation to describe a wide range of phenomena, from electrical circuits to economic models.

## Definition

A **linear system** is a collection of one or more linear equations involving the same set of variables. A system of $m$ linear equations with $n$ variables can be written in the standard matrix form:

$$
A\mathbf{x} = \mathbf{b}
$$

where:
-   $A$ is an $m \times n$ matrix known as the coefficient matrix.
-   $\mathbf{x}$ is an $n \times 1$ column vector containing the variables.
-   $\mathbf{b}$ is an $m \times 1$ column vector containing the constant terms.

Each equation in the system corresponds to a row in matrix $A$, and each variable corresponds to an entry in vector $\mathbf{x}$. The goal is often to find all vectors $\mathbf{x}$ that satisfy this equation, which can be done using methods like Gaussian elimination, matrix inversion, or Cramer's rule.

## Example

Consider the following system of two linear equations with two variables:

$$
\begin{cases}2x + y = 5 \\
3x - y = 10\end{cases}
$$

This system can be represented in matrix form as $A\mathbf{x} = \mathbf{b}$, where:
-   $`A = \begin{bmatrix} 2 & 1 \\ 3 & -1 \end{bmatrix}`$
   
-   $`\mathbf{x} = \begin{bmatrix} x \\ y \end{bmatrix}`$
   
-   $`\mathbf{b} = \begin{bmatrix} 5 \\ 10 \end{bmatrix}`$

To solve for $\mathbf{x}$, we can compute the inverse of $A$ (if it exists). The determinant of $A$ is $(2)(-1) - (1)(3) = -5$, which is non-zero, so the inverse exists:

$$
A^{-1} = \frac{1}{-5} \begin{bmatrix} -1 & -1 \\
-3 & 2 \end{bmatrix} = \begin{bmatrix} \frac{1}{5} & \frac{1}{5} \\
\frac{3}{5} & -\frac{2}{5} \end{bmatrix}
$$

Multiplying both sides of the equation by $A^{-1}$ gives the solution:

$$
\mathbf{x} = A^{-1}\mathbf{b} = \begin{bmatrix} \frac{1}{5} & \frac{1}{5} \\
\frac{3}{5} & -\frac{2}{5} \end{bmatrix} \begin{bmatrix} 5 \\
10 \end{bmatrix} = \begin{bmatrix} (\frac{1}{5})(5) + (\frac{1}{5})(10) \\
(\frac{3}{5})(5) - (\frac{2}{5})(10) \end{bmatrix} = \begin{bmatrix} 1 + 2 \\
3 - 4 \end{bmatrix} = \begin{bmatrix} 3 \\ -1 \end{bmatrix}
$$

Thus, the unique solution is $x = 3$ and $y = -1$.

## Properties

-   **Linearity**: A linear system satisfies the principle of superposition. This means that if $\mathbf{x}_1$ is a solution to $A\mathbf{x} = \mathbf{b}_1$ and $\mathbf{x}_2$ is a solution to $A\mathbf{x} = \mathbf{b}_2$, then for any scalars $c_1$ and $c_2$, the vector $c_1\mathbf{x}_1 + c_2\mathbf{x}_2$ is a solution to $A\mathbf{x} = c_1\mathbf{b}_1 + c_2\mathbf{b}_2$.
-   **Existence and Uniqueness of Solutions**: The nature of the solution set depends on the properties of the matrix $A$ and the vector $\mathbf{b}$.
    -   A unique solution exists if and only if $A$ is an invertible square matrix (i.e., its determinant is non-zero).
    -   Infinitely many solutions exist if the system is consistent (has at least one solution) but the matrix $A$ has linearly dependent columns.
    -   No solution exists if the system is inconsistent (e.g., the equations represent parallel, non-overlapping lines or planes).
-   **Row Operations**: The solution set of a linear system is unchanged by elementary row operations (swapping rows, multiplying a row by a non-zero scalar, or adding a multiple of one row to another). These operations are the basis of the Gaussian elimination method for solving linear systems.

## Applications

Linear systems have widespread applications across various fields:
1.  **Physics**: Modeling forces in static equilibrium, analyzing circuits using Kirchhoff's laws, and solving problems in mechanics.
2.  **Engineering**: Analyzing electrical circuits, designing control systems, and performing structural analysis on bridges and buildings.
3.  **Computer Graphics**: Transforming coordinates for 3D rendering, animation, and simulations.
4.  **Economics**: Using input-output models to study the interdependencies between different sectors of an economy.
5.  **Machine Learning**: Forming the basis of many algorithms, including linear regression for predictive modeling and optimization problems in training neural networks. Representing data as matrices allows for efficient computation using vectorized operations, enabling the training of models on large datasets.