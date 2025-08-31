# The Jacobi Eigenvalue Algorithm

## Introduction
The **Jacobi eigenvalue algorithm** is a classic iterative method in numerical linear algebra for computing all eigenvalues and eigenvectors of a **real symmetric matrix**. It is a robust and accurate algorithm that works by systematically "zeroing out" the off-diagonal elements of the matrix through a sequence of plane rotations. The process iteratively transforms the matrix until it converges to a diagonal matrix, at which point the diagonal entries are the eigenvalues and the accumulated rotations form the eigenvectors.

*(Note: This method should not be confused with the Jacobi iterative method for solving systems of linear equations, $A\mathbf{x}=\mathbf{b}$)*.

## The Algorithm: Diagonalization via Iterative Rotations
The goal of the algorithm is to perform an **orthogonal diagonalization**. For a given real symmetric matrix $A$, we want to find an orthogonal matrix $P$ and a diagonal matrix $D$ such that:

$$D = P^T A P$$

The diagonal entries of $D$ will be the eigenvalues of $A$, and the columns of $P$ will be the corresponding orthonormal eigenvectors.

The Jacobi method achieves this by building the matrix $P$ as a sequence of simple rotations, where each rotation is designed to eliminate one off-diagonal element.

### The Jacobi (Givens) Rotation
At each step, the algorithm targets the off-diagonal element with the largest absolute value, say $a_{pq}$. It then constructs a special orthogonal matrix called a **Jacobi rotation matrix** (or Givens rotation), $J$. This matrix is an identity matrix except for four elements that define a 2D rotation in the $(p,q)$ plane:

$$
J = \begin{pmatrix}
1 & & & & & & \\
& \ddots & & & & & \\
& & \cos\theta & \cdots & -\sin\theta & & \\
& & \vdots & \ddots & \vdots & & \\
& & \sin\theta & \cdots & \cos\theta & & \\
& & & & & \ddots & \\
& & & & & & 1
\end{pmatrix} \begin{matrix} \\ \\ \leftarrow p\text{-th row} \\ \\ \leftarrow q\text{-th row} \\ \\ \\ \end{matrix}
$$

The angle $\theta$ is specifically chosen to make the $(p,q)$ and $(q,p)$ entries of the new matrix, $A_{new} = J^T A J$, equal to zero.

### The Iterative Process
1.  **Initialize**: Start with $D_0 = A$ and $P_0 = I$ (the identity matrix).
2.  **Iterate** for $k = 0, 1, 2, \dots$:
    a. **Select Pivot**: Find the off-diagonal element $d_{pq}$ in the current matrix $D_k$ with the largest absolute value.
    b. **Compute Rotation**: Calculate the rotation angle $\theta$ needed to zero out this element. The formula is typically given by:
       $$\cot(2\theta) = \frac{d_{qq} - d_{pp}}{2d_{pq}}$$
    c. **Construct Rotation Matrix**: Form the Jacobi rotation matrix $J_k$ for the $(p,q)$ plane with the calculated angle.
    d. **Update Matrix**: Apply the similarity transformation: $D_{k+1} = J_k^T D_k J_k$.
    e. **Accumulate Rotations**: Update the eigenvector matrix: $P_{k+1} = P_k J_k$.
3.  **Termination**: Repeat the process until the sum of the squares of the off-diagonal elements is below a small tolerance. The final matrix $D_{final}$ will be a diagonal matrix of eigenvalues, and $P_{final}$ will contain the corresponding eigenvectors.

## Example
Consider the symmetric matrix $A = \begin{bmatrix} 3 & 1 \\ 1 & 2 \end{bmatrix}$. The true eigenvalues are approximately $3.618$ and $1.382$.

**Iteration 1:**
1.  **Select Pivot**: The only off-diagonal element to target is $a_{12}=1$.
2.  **Compute Rotation**: We need to find $\theta$ to zero out this element.

$$\cot(2\theta) = \frac{a_{22} - a_{11}}{2a_{12}} = \frac{2 - 3}{2(1)} = -0.5$$
    
$\qquad$ Solving for $\theta$ gives $\cos(\theta) \approx 0.9615$ and $\sin(\theta) \approx -0.2747$.
4.  **Construct Rotation Matrix**:

$$J = \begin{bmatrix} \cos\theta & -\sin\theta \\
\sin\theta & \cos\theta \end{bmatrix} \approx \begin{bmatrix} 0.9615 & 0.2747 \\
-0.2747 & 0.9615 \end{bmatrix}$$
    
6.  **Apply Transformation**: Calculate the new matrix $A_1 = J^T A J$:

$$A_1 \approx \begin{bmatrix} 0.9615 & -0.2747 \\
0.2747 & 0.9615 \end{bmatrix} \begin{bmatrix} 3 & 1 \\
1 & 2 \end{bmatrix} \begin{bmatrix} 0.9615 & 0.2747 \\
-0.2747 & 0.9615 \end{bmatrix}
$$

$$A_1 \approx \begin{bmatrix} 3.618 & 0 \\
0 & 1.382 \end{bmatrix}
$$

Since this is a 2x2 matrix, the first rotation diagonalizes it completely. The eigenvalues are on the diagonal. The eigenvectors are the columns of $P=J$.

## Properties and Convergence
-   **Convergence**: The Jacobi method is guaranteed to converge for any real symmetric matrix. At each step, the sum of the squares of the off-diagonal elements strictly decreases.
-   **Rate of Convergence**: The algorithm exhibits a **quadratic** rate of convergence, meaning it becomes very fast once it is close to the solution.
-   **Robustness**: It is a very numerically stable algorithm that can compute eigenvalues and eigenvectors with high accuracy.
-   **Comparison to QR Algorithm**: While robust, the Jacobi method is generally slower than the modern **QR algorithm** for finding eigenvalues, especially for large or non-sparse matrices. The QR algorithm is the standard method used in most modern numerical libraries.

## Applications
1.  **Principal Component Analysis (PCA)**: PCA requires finding the eigenvalues and eigenvectors of a symmetric covariance matrix. The Jacobi method is a conceptually simple and robust way to perform this decomposition.
2.  **Structural Engineering**: Used in finite element analysis to solve for the natural vibrational frequencies and modes of a structure, which correspond to the eigenvalues and eigenvectors of the system's stiffness matrix.
3.  **Quantum Chemistry**: For solving the Schrödinger equation for molecules, which often involves diagonalizing large symmetric matrices (the Hamiltonian).
4.  **Continuum Mechanics**: For determining the principal stresses and strains in a material by finding the eigenvalues and eigenvectors of the stress or strain tensor.