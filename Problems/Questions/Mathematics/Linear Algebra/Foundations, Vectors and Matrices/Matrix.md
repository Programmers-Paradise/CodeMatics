# Introduction to Matrices in Linear Algebra

## Introduction

Matrices are fundamental constructs in linear algebra, serving as rectangular arrays of numbers or symbols that represent linear transformations and systems of equations. They are pivotal in various fields such as physics, computer science, engineering, and machine learning due to their ability to model complex relationships and operations efficiently.

## Definition

A matrix is a structured arrangement of elements (numbers, symbols, or expressions) into rows and columns. Formally, an $m \times n$ matrix $A$ consists of $m$ rows and $n$ columns, where each element is denoted as $a_{ij}$, with $i$ representing the row index and $j$ the column index.

### Basic Operations

1.  **Matrix Addition**: Two matrices $A = [a_{ij}]$ and $B = [b_{ij}]$ of the same dimensions can be added element-wise:

$$
(A + B)_ {ij} = a_{ij} + b_{ij}
$$

3.  **Scalar Multiplication**: Multiplying a matrix $A$ by a scalar $c$ results in each element being scaled by $c$:

$$
(cA)_ {ij} = c \cdot a_{ij}
$$

4.  **Matrix Multiplication**: The product of an $m \times n$ matrix $A$ and an $n \times p$ matrix $B$ is an $m \times p$ matrix $C$, where each element $c_{ij}$ is the dot product of the $i$-th row of $A$ and the $j$-th column of $B$.

## Example

Consider the matrices:

$$
A = \begin{bmatrix} 1 & 2 \\
3 & 4 \end{bmatrix}, \quad B = \begin{bmatrix} 5 & 6 \\
7 & 8 \end{bmatrix}
$$

Adding them yields:

$$
A + B = \begin{bmatrix} 1+5 & 2+6 \\
3+7 & 4+8 \end{bmatrix} = \begin{bmatrix} 6 & 8 \\
10 & 12 \end{bmatrix}
$$

Multiplying matrix $A$ by a vector $`\mathbf{x} = \begin{bmatrix} x_1 \\ x_2 \end{bmatrix}`$ is a linear transformation:

$$
A\mathbf{x} = \begin{bmatrix} 1 & 2 \\
3 & 4 \end{bmatrix} \begin{bmatrix} x_1 \\
x_2 \end{bmatrix} = \begin{bmatrix} 1x_1 + 2x_2 \\
3x_1 + 4x_2 \end{bmatrix}
$$

## Properties

-   **Dimensions**: The size of a matrix is described by its dimensions $m \times n$, where $m$ is the number of rows and $n$ is the number of columns.
-   **Equality**: Two matrices $A$ and $B$ are equal if they have the same dimensions and all corresponding elements are equal: $A = B \iff a_{ij} = b_{ij}$ for all $i, j$.
-   **Commutativity of Addition**: Matrix addition is commutative: $A + B = B + A$.
-   **Associativity of Addition**: Matrix addition is associative: $(A + B) + C = A + (B + C)$.
-   **Distributivity**: Scalar multiplication distributes over matrix addition: $c(A + B) = cA + cB$. Matrix multiplication also distributes over addition: $A(B+C) = AB+AC$.
-   **Transpose**: The transpose of a matrix $A$, denoted $A^T$, is formed by swapping its rows and columns, such that $(A^T)_{ij} = a_{ji}$.
-   **Identity Matrix**: An identity matrix $I_n$ is a square $n \times n$ matrix with ones on the main diagonal and zeros elsewhere. It is the multiplicative identity: $AI_n = A$ and $I_nB = B$.
-   **Inverse Matrix**: An invertible square matrix $A$ has an inverse $A^{-1}$ such that their product is the identity matrix:
    $$AA^{-1} = A^{-1}A = I_n$$

## Applications

Matrices are extensively used in various domains:
1.  **Machine Learning**: In neural networks, weight matrices represent the strength of connections between neurons and are fundamental for processing inputs and making predictions.
2.  **Computer Graphics**: Transformation matrices are used to perform rotations, scaling, and translations on objects in 2D or 3D space, which is essential for rendering and animation.
3.  **Quantum Mechanics**: Operators representing physical observables (like energy or momentum) are often expressed as matrices, which act on state vectors to govern the evolution of quantum systems.
4.  **Engineering**: Solving systems of linear equations using matrix methods like Gaussian elimination is fundamental in structural analysis, circuit design, and control systems.

Matrices provide a powerful framework for modeling and solving complex problems across diverse scientific and engineering disciplines.