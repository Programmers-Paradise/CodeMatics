# QR Decomposition in Linear Algebra

## Introduction
QR Decomposition is a fundamental matrix factorization in linear algebra where a matrix $A$ is expressed as the product of an orthogonal matrix $Q$ and an upper triangular matrix $R$. This decomposition is a cornerstone of numerical linear algebra, prized for its numerical stability and wide-ranging applications. It is crucial for solving linear systems, least-squares problems, and is the basis for one of the most effective algorithms for computing eigenvalues.

## Definition and Method
The QR Decomposition of an $m \times n$ matrix $A$ with linearly independent columns is a factorization:

$$A = Q R$$

where:
-   $Q$ is an $m \times n$ matrix with **orthonormal columns**, meaning its columns are mutually orthogonal unit vectors. This implies that $Q^T Q = I_n$.
-   $R$ is an $n \times n$ invertible **upper triangular matrix**. By convention, the diagonal entries of $R$ are chosen to be positive to ensure the decomposition is unique.

The most common method for computing the QR decomposition is the **Gram-Schmidt process**, which is applied to the columns of matrix $A$. The process systematically converts the column vectors of $A$ into an orthonormal set, which become the columns of $Q$. The matrix $R$ is constructed from the coefficients used during this orthogonalization process.

## Example
Let's find the QR decomposition of the matrix:

$$A = \begin{bmatrix} 1 & 2 \\ 2 & 3 \end{bmatrix}$$

The columns of A are $`\mathbf{a}_1 = \begin{bmatrix} 1 \\ 2 \end{bmatrix}`$ and $`\mathbf{a}_2 = \begin{bmatrix} 2 \\ 3 \end{bmatrix}`$. We apply the Gram-Schmidt process to find the orthonormal columns $\mathbf{q}_1$ and $\mathbf{q}_2$ of $Q$.

**Step 1: Find the first orthonormal vector $\mathbf{q}_1$**
Normalize the first column vector $\mathbf{a}_1$:

$$\|\mathbf{a}_1\| = \sqrt{1^2 + 2^2} = \sqrt{5}$$

$$\mathbf{q}_1 = \frac{\mathbf{a}_1}{\|\mathbf{a}_1\|} = \frac{1}{\sqrt{5}} \begin{bmatrix} 1 \\
2 \end{bmatrix}$$

**Step 2: Find the second orthonormal vector $\mathbf{q}_2$**

First, make $\mathbf{a}_2$ orthogonal to $\mathbf{q}_1$ by subtracting its projection onto $\mathbf{q}_1$:

$$\mathbf{v}_ 2 = \mathbf{a}_ 2 - \text{proj}_{\mathbf{q}_1}(\mathbf{a}_2) = \mathbf{a}_2 - (\mathbf{q}_1^T \mathbf{a}_2)\mathbf{q}_1$$

The projection coefficient is

$$
\mathbf{q}_1^T \mathbf{a}_2 = \frac{1}{\sqrt{5}}\begin{bmatrix}1 & 2\end{bmatrix}\begin{bmatrix}2 \\
3\end{bmatrix} = \frac{8}{\sqrt{5}}
$$ 

$$\mathbf{v}_2 = \begin{bmatrix} 2 \\
3 \end{bmatrix} - \frac{8}{\sqrt{5}} \left( \frac{1}{\sqrt{5}}\begin{bmatrix} 1 \\
2 \end{bmatrix} \right) = \begin{bmatrix} 2 \\
3 \end{bmatrix} - \frac{8}{5}\begin{bmatrix} 1 \\
2 \end{bmatrix} = \begin{bmatrix} 2 - 8/5 \\
3 - 16/5 \end{bmatrix} = \begin{bmatrix} 2/5 \\
-1/5 \end{bmatrix}$$

Now, normalize the orthogonal vector $\mathbf{v}_2$:

$$\|\mathbf{v}_2\| = \sqrt{(2/5)^2 + (-1/5)^2} = \sqrt{5/25} = \frac{1}{\sqrt{5}}$$

$$\mathbf{q}_2 = \frac{\mathbf{v}_2}{\|\mathbf{v}_2\|} = \frac{\begin{bmatrix} 2/5 \\
-1/5 \end{bmatrix}}{1/\sqrt{5}} = \frac{\sqrt{5}}{5}\begin{bmatrix} 2 \\
-1 \end{bmatrix} = \frac{1}{\sqrt{5}}\begin{bmatrix} 2 \\
-1 \end{bmatrix}
$$

**Step 3: Construct $Q$ and $R$**
The matrix $Q$ is formed from the orthonormal columns:

$$Q = \begin{bmatrix} \mathbf{q}_ 1 & \mathbf{q}_ 2 \end{bmatrix} = \frac{1}{\sqrt{5}} \begin{bmatrix} 1 & 2 \\
2 & -1 \end{bmatrix}$$

The matrix $R$ contains the coefficients from the process, where $R_{ij} = \mathbf{q}_i^T \mathbf{a}_j$:

$$R = \begin{bmatrix} \mathbf{q}_1^T \mathbf{a}_1 & \mathbf{q}_1^T \mathbf{a}_2 \\
0 & \mathbf{q}_2^T \mathbf{a}_2 \end{bmatrix} = \begin{bmatrix} \sqrt{5} & 8/\sqrt{5} \\
0 & 1/\sqrt{5} \end{bmatrix}
$$

One can verify that $QR = A$.

## How to Use QR Decomposition

### 1. Solving Least-Squares Problems
The QR decomposition provides a numerically stable method for solving the least-squares problem $A\mathbf{x} \approx \mathbf{y}$. The normal equations $A^T A \hat{\mathbf{x}} = A^T \mathbf{y}$ can be ill-conditioned. Instead, we substitute $A=QR$:

$$(QR)^T(QR)\hat{\mathbf{x}} = (QR)^T \mathbf{y}$$

$$R^T Q^T Q R \hat{\mathbf{x}} = R^T Q^T \mathbf{y}$$

Since $Q^T Q = I$, this simplifies to $R^T R \hat{\mathbf{x}} = R^T Q^T \mathbf{y}$. As $R$ is invertible, we can cancel $R^T$, leaving:

$$R \hat{\mathbf{x}} = Q^T \mathbf{y}$$
This system is easily solved for $\hat{\mathbf{x}}$ using back substitution, as $R$ is upper triangular.

### 2. The QR Algorithm for Eigenvalues
The QR algorithm is the most widely used method for computing the eigenvalues of a matrix. It is an iterative process:
1.  Start with $A_0 = A$.
2.  For $k=1, 2, 3, \dots$:
    a. Find the QR decomposition of the previous matrix: $A_{k-1} = Q_k R_k$.
    b. Compute the next matrix by reversing the factors: $A_k = R_k Q_k$.
Under suitable conditions, the sequence of matrices $A_k$ converges to an upper triangular (or block-triangular) matrix whose diagonal entries are the eigenvalues of the original matrix $A$.

## Properties
- **Orthogonal Columns**: The columns of $Q$ form an orthonormal set ($Q^T Q = I$).
- **Invertibility**: For a square matrix $A$, since $Q$ is orthogonal, its inverse is its transpose ($Q^{-1} = Q^T$).
- **Determinant**: The absolute value of the determinant of a square matrix $A$ is equal to the absolute value of the product of the diagonal entries of $R$. $|\det(A)| = |\det(R)| = \prod |R_{ii}|$.

## Other Applications
- **Computer Graphics**: Orthogonal matrices are used for rotations and reflections, which preserve lengths and angles.
- **Signal Processing**: Used in algorithms for filtering and feature extraction.
- **Data Science**: Provides a stable foundation for many matrix-based algorithms, including singular value decomposition (SVD).