# LU Decomposition in Linear Algebra

## Introduction
LU Decomposition is a fundamental matrix factorization technique in linear algebra where a square matrix $A$ is expressed as the product of a lower triangular matrix $L$ and an upper triangular matrix $U$. In its most general and useful form, which includes row swaps (pivoting), the factorization is written as $PA = LU$. This method is a cornerstone of numerical linear algebra, prized for its efficiency in solving systems of linear equations, computing determinants, and finding matrix inverses.

## The Method: Gaussian Elimination as a Matrix Factorization
The LU decomposition is not a new algorithm, but rather the matrix representation of the familiar **Gaussian elimination** process. The procedure aims to transform the matrix $A$ into an upper triangular matrix $U$ (an echelon form) using only row operations that subtract a multiple of one row from another.

-   The **Upper Triangular Matrix ($U$)** is the final result of applying Gaussian elimination to $A$.
-   The **Lower Triangular Matrix ($L$)** is a unit lower triangular matrix (with 1s on the diagonal) whose off-diagonal entries are the multipliers used during the elimination process. The entry $l_{ij}$ is the multiple of row $j$ that was subtracted from row $i$.
-   The **Permutation Matrix ($P$)** is an identity matrix that has undergone row swaps. It serves as a record of any row interchanges performed during pivoting to maintain numerical stability. If no row swaps are needed, $P$ is the identity matrix.

The complete factorization is:

$$PA = LU$$

## Example
Consider the matrix:

$$A = \begin{bmatrix} 2 & 1 & 1 \\
4 & 3 & 3 \\
8 & 7 & 9 \end{bmatrix}
$$

We will perform Gaussian elimination to find $U$, and record the multipliers and row swaps to build $L$ and $P$.

**Step 1:** Eliminate the first column below the diagonal.
-   Subtract $2 \times$ Row 1 from Row 2 ($l_{21}=2$).
-   Subtract $4 \times$ Row 1 from Row 3 ($l_{31}=4$).
    
$$
\begin{bmatrix} 2 & 1 & 1 \\
0 & 1 & 1 \\
0 & 3 & 5 \end{bmatrix} \quad \text{and we have } \quad L = \begin{bmatrix} 1 & 0 & 0 \\
2 & 1 & 0 \\
4 & ? & 1 \end{bmatrix}
$$

**Step 2:** Eliminate the second column below the diagonal.
-   Subtract $3 \times$ Row 2 from Row 3 ($l_{32}=3$).
   
$$
\begin{bmatrix} 2 & 1 & 1 \\
0 & 1 & 1 \\
0 & 0 & 2 \end{bmatrix} = U
$$

**Step 3:** Construct L from the multipliers.
The multipliers were $l_{21}=2$, $l_{31}=4$, and $l_{32}=3$.

$$
L = \begin{bmatrix} 1 & 0 & 0 \\
2 & 1 & 0 \\
4 & 3 & 1 \end{bmatrix}
$$

Since no row swaps were needed, $P=I$. The final decomposition is $A=LU$.

**Verification:**

$$
LU = \begin{bmatrix} 1 & 0 & 0 \\
2 & 1 & 0 \\
4 & 3 & 1 \end{bmatrix} \begin{bmatrix} 2 & 1 & 1 \\
0 & 1 & 1 \\
0 & 0 & 2 \end{bmatrix} = \begin{bmatrix} 2 & 1 & 1 \\
4 & 3 & 3 \\
8 & 7 & 9 \end{bmatrix} = A
$$

## How to Use LU Decomposition: Solving $A\mathbf{x}=\mathbf{b}$
The primary motivation for LU decomposition is to solve systems of linear equations efficiently. Once the factorization $PA=LU$ is known, solving $A\mathbf{x}=\mathbf{b}$ becomes a two-step process:

1.  **Forward Substitution**: First, we solve the system $L\mathbf{y} = P\mathbf{b}$ for the intermediate vector $\mathbf{y}$. Since $L$ is lower triangular, this is solved quickly from top to bottom.
2.  **Backward Substitution**: Second, we solve the system $U\mathbf{x} = \mathbf{y}$ for the final solution $\mathbf{x}$. Since $U$ is upper triangular, this is solved quickly from bottom to top.

This process is computationally much faster than finding $A^{-1}$, especially when solving for multiple different vectors $\mathbf{b}$ with the same matrix $A$, as the decomposition only needs to be performed once.

## Properties
-   **Uniqueness**: For an invertible matrix $A$, if a $PA=LU$ factorization exists, the $L$ and $U$ are uniquely determined for a given permutation matrix $P$.
-   **Existence**: Every square matrix has a $PA=LU$ decomposition.
-   **Determinant**: The determinant can be easily computed from the factors: $\det(A) = \det(P^{-1}) \det(L) \det(U)$. Since $\det(L)=1$ and $\det(P)$ is $\pm 1$, this simplifies to $\det(A) = (\pm 1) \cdot \prod_{i=1}^{n} u_{ii}$. The sign depends on the number of row swaps in $P$.
-   **Inverse**: If $A$ is invertible, its inverse can be expressed as $A^{-1} = U^{-1}L^{-1}P$.

## Other Applications
-   **Computing Matrix Inverses**: While not the most efficient method, the inverse can be found by solving $AX=I$ column by column using the LU decomposition.
-   **Numerical Methods**: It is a core component in many numerical algorithms, including finite element methods for solving partial differential equations that arise in engineering and physics.
-   **Computer Graphics**: Used to solve for transformations and lighting in rendering pipelines.

This decomposition is a cornerstone of numerical linear algebra, enabling the efficient and stable solution of a wide range of computational problems.