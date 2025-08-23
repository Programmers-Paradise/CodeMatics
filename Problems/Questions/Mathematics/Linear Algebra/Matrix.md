# Matrices

## Introduction

Matrices are fundamental tools in linear algebra, used extensively across various fields such as physics, computer science, engineering, and machine learning. They provide a structured way to represent data and solve complex problems involving multiple variables.

## Definition

A matrix is a rectangular array of numbers, symbols, or expressions, arranged in rows and columns. Formally, an $m \times n$ matrix $A$ consists of elements $a_{i,j}$, where $i$ denotes the row number (from 1 to $m$) and $j$ denotes the column number (from 1 to $n$). The size of the matrix is described as having $m$ rows and $n$ columns.

$$
A = \begin{bmatrix}a_{1,1} & a_{1,2} & \cdots & a_{1,n} \\
a_{2,1} & a_{2,2} & \cdots & a_{2,n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{m,1} & a_{m,2} & \cdots & a_{m,n}\end{bmatrix}
$$

## Example

Consider the system of linear equations:

$$
\begin{cases}2x + y = 5 \\
x - y = 1\end{cases}
$$

This can be represented in matrix form as $A\mathbf{x} = \mathbf{b}$, where:

$$
A = \begin{bmatrix}2 & 1 \\
1 & -1\end{bmatrix}, \quad \mathbf{x} = \begin{bmatrix}x \\
y\end{bmatrix}, \quad \mathbf{b} = \begin{bmatrix}5 \\
1\end{bmatrix}
$$

Solving this system:
1.  Add the two equations: $3x = 6$ ⇒ $x = 2$.
2.  Substitute $x = 2$ into the second equation: $2 - y = 1$ ⇒ $y = 1$.

Thus, the solution is 

$$
\mathbf{x} = \begin{bmatrix} 2 \\
1 \end{bmatrix}
$$

## Properties

-   **Matrix Addition**: If two matrices $A$ and $B$ have the same dimensions ($m \times n$), their sum $C = A + B$ is computed by adding corresponding elements:

$$
c_{i,j} = a_{i,j} + b_{i,j}
$$

-   **Scalar Multiplication**: Multiplying a matrix $A$ by a scalar $k$ results in each element of $A$ being multiplied by $k$:

$$
(kA)_{i,j} = k \cdot a_{i,j}
$$

-   **Transpose of a Matrix**: The transpose of a matrix $A$, denoted $A^T$, is formed by swapping rows and columns: $(A^T)_{i,j} = a_{j,i}$. For example, if

$$
A = \begin{bmatrix}1 & 2 \\
3 & 4\end{bmatrix}, \quad \text{then} \quad A^T = \begin{bmatrix}1 & 3 \\
2 & 4\end{bmatrix}.
$$

-   **Determinant**: The determinant of a square matrix $A$, denoted $\det(A)$ or $|A|$, is a scalar value that provides information about the matrix's invertibility. For a $2 \times 2$ matrix
-   
$$
A = \begin{bmatrix} a & b \\
c & d
\end{bmatrix}
$$, the determinant is:

$$
\det(A) = ad - bc
$$

-   **Inverse of a Matrix**: The inverse of an invertible square matrix $A$, denoted $A^{-1}$, satisfies $A A^{-1} = A^{-1} A = I$, where $I$ is the identity matrix. For a $2 \times 2$ matrix:

$$
A^{-1} = \frac{1}{\det(A)} \begin{bmatrix}d & -b \\
-c & a\end{bmatrix}
$$

-   **Identity Matrix**: An identity matrix $I_n$ is an $n \times n$ matrix with ones on the main diagonal and zeros elsewhere.

$$
I_3 = \begin{bmatrix}1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 1
\end{bmatrix}
$$

-   **Zero Matrix**: A zero matrix $O_{m,n}$ is an $m \times n$ matrix with all elements equal to zero.

$$
O_{2,3} = \begin{bmatrix}0 & 0 & 0 \\
0 & 0 & 0\end{bmatrix}
$$

-   **Symmetric Matrix**: A square matrix $A$ is symmetric if it equals its transpose: $A = A^T$.
-   **Diagonal Matrix**: A square matrix is diagonal if all its off-diagonal elements are zero.
-   **Triangular Matrix**: A square matrix is upper triangular if all elements below the main diagonal are zero, and lower triangular if all elements above the main diagonal are zero.
-   **Orthogonal Matrix**: An orthogonal matrix $Q$ satisfies $Q^T Q = Q Q^T = I$.

## Applications

Matrices are extensively used in various fields:
1.  **Computer Graphics**: Matrices represent transformations such as rotations, translations, and scaling. Rotating a point $(x, y)$ by an angle $\theta$ can be done using a rotation matrix:

$$
R(\theta) = \begin{bmatrix}\cos\theta & -\sin\theta \\\sin\theta & \cos\theta\end{bmatrix}
$$

2.  **Machine Learning**: In neural networks, weight matrices are adjusted during training to minimize loss functions, which is crucial for model performance.
3.  **Quantum Mechanics**: Matrices represent linear operators and states. For instance, Pauli matrices are used to describe the spin states of particles:

$$
\sigma_x = \begin{bmatrix}0 & 1 \\
1 & 0\end{bmatrix}, \quad \sigma_y = \begin{bmatrix}0 & -i \\
i & 0\end{bmatrix}, \quad \sigma_z = \begin{bmatrix}1 & 0 \\
0 & -1\end{bmatrix}
$$

4.  **Engineering**: In structural analysis, matrices are used to solve systems of equations representing physical constraints, such as forces and displacements.
5.  **Economics**: In input-output models, matrices represent the interdependencies between different sectors of an economy.

This concludes the comprehensive overview of matrices in linear algebra, their properties, examples, and applications across various domains.
