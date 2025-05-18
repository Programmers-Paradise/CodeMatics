## Matrix Multiplication

Matrix multiplication is a fundamental operation in linear algebra where two matrices are combined to produce a new matrix. It is used in various applications including computer graphics, data analysis, and machine learning.

### Definition
Given two matrices $A$ and  $B$, their product $C = A \cdot  B$ is a matrix where each element $c_{ij}$ is computed as follows:

$$
c_{ij} = \sum_{k=1}^{n} a_{ik} \cdot b_{kj}
$$

where:
- $A$ is an $m \times n$ matrix
- $B$ is an $n \times p$ matrix
- $C$ is an $m \times p$ matrix
- $a_{ik}$ is an element of matrix $A $
- $b_{kj}$ is an element of matrix $B $

### Conditions for Multiplication
Matrix multiplication is only defined when the number of columns in the first matrix $A$ is equal to the number of rows in the second matrix $B$. Specifically, if $A$ is an $m \times n$ matrix and $B$ is an $n \times p$ matrix, then $C = A \cdot B$ will be an $m \times p$ matrix.

### Example
If we have matrices:

$$
A = \begin{pmatrix}
a_{11} & a_{12} \\
a_{21} & a_{22}
\end{pmatrix}
\text{ and }
B = \begin{pmatrix}
b_{11} & b_{12} \\
b_{21} & b_{22}
\end{pmatrix}
$$

The product $C = A \cdot B$ is computed as:

$$
C = \begin{pmatrix}
(a_{11} \cdot b_{11} + a_{12} \cdot b_{21}) & (a_{11} \cdot b_{12} + a_{12} \cdot b_{22}) \\
(a_{21} \cdot b_{11} + a_{22} \cdot b_{21}) & (a_{21} \cdot b_{12} + a_{22} \cdot b_{22})
\end{pmatrix}
$$

### Applications
Matrix multiplication is widely used in various fields such as computer graphics for transformations, machine learning for neural networks, and in solving systems of linear equations.

## Problem Statement

Given two matrices $A$ and $B $, your task is to compute the product $C = A.B$ and output the resulting matrix.
