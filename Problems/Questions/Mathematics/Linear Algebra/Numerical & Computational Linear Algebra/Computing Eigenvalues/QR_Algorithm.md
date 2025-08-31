# QR Algorithm 

## Introduction
The **QR algorithm** is a fundamental iterative method in numerical linear algebra and is the standard, most widely used algorithm for computing **all eigenvalues and eigenvectors** of a matrix. It is also the basis for computing the Singular Value Decomposition (SVD). Its exceptional numerical stability and efficiency (in its practical form) make it an indispensable tool in virtually every field of science and engineering that relies on matrix computations, including physics, data science, and machine learning.

## The "Simple" QR Algorithm
The basic version of the algorithm is an elegant and remarkably simple iterative process.

Given a square matrix $A$:
1.  **Initialize**: Set $A_0 = A$.
2.  **Iterate** for $k = 0, 1, 2, \dots$:
    - Perform a **QR Decomposition** on the current matrix: $A_k = Q_k R_k$, where $Q_k$ is an orthogonal matrix and $R_k$ is an upper triangular matrix.
    - Create the next matrix in the sequence by multiplying the factors in the **reverse order**: $A_{k+1} = R_k Q_k$.
3.  **Convergence**: Under certain conditions, the sequence of matrices $A_k$ converges to an **upper triangular** (or quasi-triangular **Schur**) form. Since the eigenvalues of an upper triangular matrix are its diagonal entries, this process reveals the eigenvalues of the original matrix $A$.

### The Underlying Principle: Orthogonal Similarity Transformation
The magic of the QR algorithm lies in the fact that each step is an **orthogonal similarity transformation**. We can see this by rearranging the update steps:
-   From $A_k = Q_k R_k$, we can write $R_k = Q_k^{-1} A_k$. Since $Q_k$ is orthogonal, $Q_k^{-1} = Q_k^T$. So, $R_k = Q_k^T A_k$.
-   Substituting this into the update rule gives: $A_{k+1} = R_k Q_k = (Q_k^T A_k) Q_k$.

Because $A_{k+1} = Q_k^T A_k Q_k$, it is similar to $A_k$. This means all matrices in the sequence $A_0, A_1, A_2, \dots$ have the **exact same eigenvalues**. The algorithm works by iteratively applying this specific similarity transformation to drive the matrix towards an upper triangular form where the eigenvalues are exposed.

## Example
Let's apply one iteration of the simple QR algorithm to the symmetric matrix $A_0 = \begin{pmatrix} 2 & 1 \\ 1 & 2 \end{pmatrix}$. The true eigenvalues are $\lambda_1=3$ and $\lambda_2=1$.

**Iteration 1:**
1.  **QR Decomposition of $A_0$**: We find $Q_0$ and $R_0$ such that $A_0 = Q_0 R_0$.

$$Q_0 = \frac{1}{\sqrt{5}}\begin{pmatrix} 2 & -1 \\
 1 & 2 \end{pmatrix}, \quad R_0 = \frac{1}{\sqrt{5}}\begin{pmatrix} 5 & 4 \\
 0 & 3 \end{pmatrix}$$
    
3.  **Update Step**: We compute $A_1 = R_0 Q_0$.

$$A_1 = \frac{1}{\sqrt{5}}\begin{pmatrix} 5 & 4 \\
 0 & 3 \end{pmatrix} \frac{1}{\sqrt{5}}\begin{pmatrix} 2 & -1 \\
 1 & 2 \end{pmatrix} = \frac{1}{5}\begin{pmatrix} 14 & 3 \\
 3 & 6 \end{pmatrix} = \begin{pmatrix} 2.8 & 0.6 \\
 0.6 & 1.2 \end{pmatrix}$$

After just one iteration, the diagonal entries (2.8, 1.2) are already closer to the true eigenvalues (3, 1), and the off-diagonal entries (0.6) have become smaller than the originals (1). As the iterations continue, $A_k$ will converge rapidly to the diagonal matrix $`\begin{pmatrix} 3 & 0 \\ 0 & 1 \end{pmatrix}`$.

## The Practical QR Algorithm: Making it Fast
The simple QR algorithm is elegant but too slow for practical use. Real-world implementations are highly sophisticated and use two crucial enhancements:

1.  **Initial Reduction to Hessenberg Form**: Before starting the QR iterations, the matrix $A$ is first transformed into an **upper Hessenberg form** (a matrix that is zero below the first subdiagonal). This is a one-time preprocessing step. The QR decomposition of a Hessenberg matrix is much faster to compute ($O(n^2)$ vs. $O(n^3)$), which dramatically speeds up every subsequent iteration of the algorithm.
2.  **Using Shifts to Accelerate Convergence**: To make the off-diagonal elements converge to zero much faster, the algorithm uses **shifts**. Instead of decomposing $A_k$, it decomposes a shifted matrix, $A_k - \sigma_k I$. A clever choice of the shift $\sigma_k$ (such as the **Wilkinson shift**) can lead to very rapid, often cubic, convergence to an eigenvalue.

## Properties
-   **Numerical Stability**: The algorithm is very numerically stable because it relies on orthogonal transformations ($Q_k$), which do not amplify numerical errors.
-   **Convergence**: It is guaranteed to converge for almost all matrices.
-   **Eigenvalue Extraction**: For symmetric matrices, $A_k$ converges to a diagonal matrix containing the eigenvalues. For non-symmetric matrices, it converges to a Schur form (a quasi-triangular matrix) from which the real and complex eigenvalues can be easily determined.

## Applications
The QR algorithm is the workhorse of numerical linear algebra for finding eigenvalues.
1.  **Physics and Engineering**: Used to find the eigenvalues of matrices representing physical systems, which correspond to fundamental properties like vibrational frequencies, energy levels in quantum mechanics, and stability modes in structural engineering.
2.  **Principal Component Analysis (PCA)**: In data science, PCA requires finding the eigenvalues and eigenvectors of a covariance matrix. For large feature sets, this is done using the QR algorithm.
3.  **Singular Value Decomposition (SVD)**: The standard algorithms for computing the SVD of a matrix are based on variants of the QR algorithm. This is crucial for applications in image compression, noise reduction, and recommendation systems.
4.  **Control Theory**: Used to analyze the stability and behavior of linear dynamical systems by computing the eigenvalues of the state matrix.