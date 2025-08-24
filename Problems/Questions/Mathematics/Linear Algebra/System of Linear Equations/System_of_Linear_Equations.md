## System of Linear Equations

A system of linear equations is a collection of one or more linear equations involving the same set of variables. Solving the system involves finding the values of the variables that satisfy all the equations simultaneously.

### Definition

A system of linear equations can be represented in matrix form as:

$$A \cdot \mathbf{x} = \mathbf{b}
$$

where:
- $A$ is the coefficient matrix
- $x$ is the vector of variables
- $b$ is the constant vector

### Example

Consider the following system of linear equations:

$$\begin{cases}
2x + 3y = 13 \\
4x - y = 5
\end{cases}
$$

This system can be represented in matrix form as:

$$
\begin{pmatrix}
2 & 3 \\
4 & -1
\end{pmatrix}
\cdot
\begin{pmatrix}
x \\
y
\end{pmatrix}$$
$$=
\begin{pmatrix}
13 \\
5
\end{pmatrix}
$$


### Solving the System

To solve the system, we can use various methods such as:

1. **Substitution Method**: Solve one of the equations for one variable and substitute this value into the other equations.
2. **Elimination Method**: Add or subtract equations to eliminate one variable, then solve the resulting simpler system.
3. **Matrix Method**: Use matrix operations to find the solution. This involves:
   - Finding the inverse of matrix $A$ (if it exists)
   - Multiplying the inverse of $A$ by $b$

### Example Solution using Matrix Method

For the example system:

1. Find the inverse of matrix $A$:

$$A^{-1} = \begin{pmatrix}
2 & 3 \\
4 & -1
\end{pmatrix}^{-1}
$$

2. Multiply the inverse by $\mathbf{b}$:

$$\mathbf{x} = A^{-1} \cdot \mathbf{b}
$$

### Applications

Solving systems of linear equations is crucial in various fields including:
- Engineering for circuit analysis
- Economics for market equilibrium analysis
- Computer science for algorithm development

## Problem Statement

Given a system of linear equations, your task is to find the values of the variables that satisfy all the equations simultaneously using one of the methods described above.
