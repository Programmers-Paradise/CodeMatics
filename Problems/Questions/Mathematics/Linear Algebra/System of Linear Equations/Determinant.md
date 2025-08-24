# Determinants in Linear Algebra

## Introduction

Determinants are scalar values computed from the elements of a square matrix that provide crucial information about the matrix's properties and the linear transformation it represents. They are fundamental in linear algebra, offering insights into concepts such as invertibility, the area or volume scaling factor of a transformation, and the solutions to systems of linear equations.

## Definition

The determinant of an $n \times n$ square matrix $A = [a_{ij}]$, denoted as $\det(A)$ or $|A|$, is a scalar value. While the formal definition involves a sum over all permutations of the matrix's column indices, it is more practically defined for smaller matrices as follows:

For a $2 \times 2$ matrix:

$$
A = \begin{bmatrix}a & b \\
c & d\end{bmatrix}, \quad \det(A) = ad - bc
$$

For a $3 \times 3$ matrix, the determinant can be calculated using cofactor expansion along any row or column. Expanding along the first row gives:

$$
A = \begin{bmatrix}a & b & c \\
d & e & f \\
g & h & i\end{bmatrix}
$$

$$
\det(A) = a \begin{vmatrix} e & f \\ 
h & i \end{vmatrix} - b \begin{vmatrix} d & f \\
g & i \end{vmatrix} + c \begin{vmatrix} d & e \\
g & h \end{vmatrix}
$$

$$
= a(ei - fh) - b(di - fg) + c(dh - eg)
$$

## Example

### Example 1: 2x2 Matrix

Compute the determinant of the matrix:

$$
A = \begin{bmatrix}3 & 4 \\
1 & 2\end{bmatrix}
$$

**Solution**:

$$
\det(A) = (3)(2) - (4)(1) = 6 - 4 = 2
$$

### Example 2: 3x3 Matrix

Compute the determinant of the matrix:

$$
A = \begin{bmatrix}1 & 0 & 2 \\
-1 & 3 & 1 \\
2 & 0 & 4\end{bmatrix}
$$

**Solution**:
Using cofactor expansion along the second column (which contains zeros, simplifying the calculation):

$$
\det(A) = -0 \begin{vmatrix} -1 & 1 \\
2 & 4 \end{vmatrix} + 3 \begin{vmatrix} 1 & 2 \\
2 & 4 \end{vmatrix} - 0 \begin{vmatrix} 1 & 2 \\
-1 & 1 \end{vmatrix}
$$

$$
= 3((1)(4) - (2)(2)) = 3(4 - 4) = 0
$$

Since the determinant is zero, the matrix is singular (not invertible).

## Properties

-   **Multiplicative Property**: The determinant of a product of matrices is the product of their determinants.

$$
\det(AB) = \det(A)\det(B)
$$

-   **Transpose**: A matrix and its transpose have the same determinant.

$$
\det(A^T) = \det(A)
$$

-   **Inverse Property**: If a matrix $A$ is invertible, the determinant of its inverse is the reciprocal of its determinant.

$$
\det(A^{-1}) = \frac{1}{\det(A)}
$$

-   **Identity Matrix**: The determinant of the identity matrix is 1.
    $$\det(I) = 1$$
-   **Row/Column Operations**:
    -   Swapping two rows or columns multiplies the determinant by -1.
    -   Multiplying a single row or column by a scalar $k$ multiplies the determinant by $k$.
    -   Adding a multiple of one row to another row (or one column to another column) does not change the determinant.
-   **Zero Determinant**: A matrix has a determinant of zero if and only if it is singular (not invertible). This occurs if a row or column is all zeros, or if one row/column is a linear combination of others.

## Applications

1.  **Matrix Invertibility**: The most fundamental application is that a square matrix is invertible if and only if its determinant is non-zero.
2.  **Volume Scaling Factor**: The absolute value of the determinant of a matrix represents the scaling factor of the volume of a region under the corresponding linear transformation.
3.  **Eigenvalues**: Determinants are crucial for finding the eigenvalues of a matrix by solving the characteristic equation $\det(A - \lambda I) = 0$.
4.  **Cramer's Rule**: This is a method that uses determinants to solve systems of linear equations, although it is often less efficient than Gaussian elimination for large systems.
5.  **Change of Variables in Calculus**: In multivariable calculus, the Jacobian determinant is used to handle changes of variables in multiple integrals.
6.  **Machine Learning**: Checking for multicollinearity in regression analysis involves examining determinants. They are also used in various algorithms involving matrix operations where invertibility is a concern.