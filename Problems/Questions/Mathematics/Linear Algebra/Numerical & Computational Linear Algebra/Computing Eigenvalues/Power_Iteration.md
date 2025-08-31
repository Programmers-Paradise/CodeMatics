# Power Iteration 

## Introduction
The **Power Iteration** (or Power Method) is a simple and fundamental iterative algorithm used in numerical linear algebra to approximate the **dominant eigenvalue** and its corresponding **eigenvector** of a square matrix. The dominant eigenvalue is the eigenvalue with the largest absolute value (magnitude). The method is particularly useful for very large, sparse matrices, where calculating the full spectrum of eigenvalues using direct methods would be computationally infeasible.

## The Power Iteration Algorithm
The core idea behind the power method is that repeated application of a matrix to a vector will cause the vector to rotate and stretch until it aligns with the direction of the dominant eigenvector.

The algorithm is as follows:
1.  **Initialize**: Start with an arbitrary non-zero vector, $\mathbf{b}_0$. It's common to choose a random vector and normalize it to have a unit length.

2.  **Iterate**: For $k = 1, 2, 3, \dots$:
    
    a. **Apply Power (Multiply by A)**: Multiply the current vector by the matrix to get the next vector in the sequence.
    $$\mathbf{x}_k = A \mathbf{b}_{k-1}$$
    
    b. **Normalize**: Normalize the resulting vector to have a unit length. This prevents the vector's magnitude from growing or shrinking to extreme values.
    $$\mathbf{b}_k = \frac{\mathbf{x}_k}{\|\mathbf{x}_k\|}$$

3.  **Convergence**: After many iterations, the vector $\mathbf{b}_k$ will converge to the dominant eigenvector, and the normalization factor $\|\mathbf{x}_k\|$ will converge to the magnitude of the dominant eigenvalue, $|\lambda_1|$.

4.  **Eigenvalue Estimation**: The dominant eigenvalue can be estimated at any step using the **Rayleigh quotient**:
    $$\lambda_1 \approx \frac{\mathbf{b}_k^T A \mathbf{b}_k}{\mathbf{b}_k^T \mathbf{b}_k}$$
    Since $\mathbf{b}_k$ is a unit vector, this simplifies to $\lambda_1 \approx \mathbf{b}_k^T A \mathbf{b}_k$.

## The Intuition: Why It Works
Any starting vector $\mathbf{b}_0$ can be expressed as a linear combination of the matrix's eigenvectors $\mathbf{u}_1, \mathbf{u}_2, \dots, \mathbf{u}_n$.
$$\mathbf{b}_0 = c_1 \mathbf{u}_1 + c_2 \mathbf{u}_2 + \dots + c_n \mathbf{u}_n$$Multiplying by $A$ k times gives:$$A^k \mathbf{b}_0 = c_1 \lambda_1^k \mathbf{u}_1 + c_2 \lambda_2^k \mathbf{u}_2 + \dots + c_n \lambda_n^k \mathbf{u}_n$$Factoring out the dominant eigenvalue $\lambda_1$:$$A^k \mathbf{b}_0 = \lambda_1^k \left( c_1 \mathbf{u}_1 + c_2 \left(\frac{\lambda_2}{\lambda_1}\right)^k \mathbf{u}_2 + \dots + c_n \left(\frac{\lambda_n}{\lambda_1}\right)^k \mathbf{u}_n \right)$$
Since $\lambda_1$ is dominant, $|\lambda_i / \lambda_1| < 1$ for all $i > 1$. As $k$ becomes large, all the terms $(\lambda_i / \lambda_1)^k$ go to zero, and the vector becomes proportional to just the dominant eigenvector, $c_1 \lambda_1^k \mathbf{u}_1$. The normalization step removes the scaling factor, leaving only the direction.

## Example
Consider the matrix $A = \begin{bmatrix} 3 & 1 \\ 1 & 3 \end{bmatrix}$. (The true dominant eigenpair is $\lambda_1=4, \mathbf{u}_1 \propto [1,1]^T$).
Let's start with an initial vector $\mathbf{b}_0 = \begin{bmatrix} 1 \\ 0 \end{bmatrix}$.

-   **Iteration 1**:
    -   Multiply: $\mathbf{x}_1 = A \mathbf{b}_0 = \begin{bmatrix} 3 & 1 \\ 1 & 3 \end{bmatrix} \begin{bmatrix} 1 \\ 0 \end{bmatrix} = \begin{bmatrix} 3 \\ 1 \end{bmatrix}$.
    -   Normalize: $\|\mathbf{x}_1\| = \sqrt{3^2 + 1^2} = \sqrt{10} \approx 3.162$.
    -   $\mathbf{b}_1 = \frac{1}{\sqrt{10}} \begin{bmatrix} 3 \\ 1 \end{bmatrix} \approx \begin{bmatrix} 0.949 \\ 0.316 \end{bmatrix}$.

-   **Iteration 2**:
    -   Multiply: $\mathbf{x}_2 = A \mathbf{b}_1 = \begin{bmatrix} 3 & 1 \\ 1 & 3 \end{bmatrix} \begin{bmatrix} 0.949 \\ 0.316 \end{bmatrix} \approx \begin{bmatrix} 3.163 \\ 1.897 \end{bmatrix}$.
    -   Normalize: $\|\mathbf{x}_2\| \approx \sqrt{3.163^2 + 1.897^2} \approx \sqrt{13.6} \approx 3.688$.
    -   $\mathbf{b}_2 = \frac{1}{3.688} \begin{bmatrix} 3.163 \\ 1.897 \end{bmatrix} \approx \begin{bmatrix} 0.858 \\ 0.514 \end{bmatrix}$.

After just two iterations, the vector $\mathbf{b}_2$ is already getting closer to the true dominant eigenvector $[0.707, 0.707]^T$, and the normalization factor $\|\mathbf{x}_k\|$ is approaching the true dominant eigenvalue of 4.

## Convergence and Limitations
-   **Condition for Convergence**: The method is guaranteed to converge if the matrix has a **strictly dominant** eigenvalue, meaning $|\lambda_1| > |\lambda_2|$.
-   **Rate of Convergence**: The rate of convergence depends on the ratio $|\lambda_2|/|\lambda_1|$. If this ratio is close to 1 (i.e., the top two eigenvalues are very close in magnitude), convergence will be very slow.
-   **Initial Vector**: The method only fails if the initial vector is exactly orthogonal to the dominant eigenvector. In practice, a randomly chosen starting vector makes this possibility vanishingly small.

## Related Methods
-   **Inverse Iteration**: To find the eigenvalue with the *smallest* magnitude, one can simply apply the power iteration to the inverse of the matrix, $A^{-1}$.
-   **Inverse Iteration with a Shift**: To find the eigenvalue closest to a specific value $\sigma$, one can apply power iteration to the matrix $(A - \sigma I)^{-1}$. This is a very powerful technique for finding any eigenvalue, provided you have a good guess of its value.

## Applications
1.  **Google's PageRank Algorithm**: The most famous application. The PageRank of every webpage is a component of the dominant eigenvector of the massive Google matrix, which represents the link structure of the internet.
2.  **Principal Component Analysis (PCA)**: For very large datasets, the first principal component (the direction of maximum variance) can be found efficiently using power iteration on the covariance matrix.
3.  **Network Analysis**: Used to find the "centrality" or "influence" of nodes in large networks by computing the dominant eigenvector of the network's adjacency matrix.
4.  **Structural Engineering**: To determine the fundamental frequency of a structure, which corresponds to the smallest eigenvalue of the system's governing equations (found using inverse iteration).