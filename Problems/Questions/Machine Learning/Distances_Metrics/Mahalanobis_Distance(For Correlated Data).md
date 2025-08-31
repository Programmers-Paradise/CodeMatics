# Mahalanobis Distance (for Correlated Data)

Mahalanobis distance measures the distance between a point and a distribution, accounting for correlations in the data. It is particularly useful when variables are correlated or have different scales.

### Mahalanobis Distance Formula

For a point $\mathbf{x} = [x_1, x_2, \ldots, x_n]$ and a distribution with mean vector ${\mu}$ and covariance matrix $S$, the Mahalanobis distance $d$ is:

$$
d(\mathbf{x}, {\mu}) = \sqrt{ (\mathbf{x} - {\mu})^\top S^{-1} (\mathbf{x} - {\mu}) }
$$

Where:
- $S^{-1}$ is the inverse of the covariance matrix.
- $(\mathbf{x} - {\mu})$ is the vector difference between $\mathbf{x}$ and the mean.

### Explanation

Unlike Euclidean or Manhattan distance, Mahalanobis accounts for the **shape** of the data distribution. For example:
- If variables are highly correlated (e.g., height and weight), it adjusts distances accordingly.
- It scales dimensions based on variance, making it robust to unequal ranges.

### Example

Suppose $\mathbf{x} = [2, 4]$, ${\mu} = [1, 3]$, and covariance matrix $S = \begin{bmatrix}1 & 0.5 \\ 0.5 & 1\end{bmatrix}$. Then:

$$
(\mathbf{x} - {\mu})^\top S^{-1} (\mathbf{x} - {\mu}) 
= [1, 1] \cdot \begin{bmatrix}1.2 & -0.6 \\ -0.6 & 1.2\end{bmatrix} \cdot [1, 1]^\top = (1.2 + -0.6) + (-0.6 + 1.2) = 1
$$

So:

$$
d(\mathbf{x}, {\mu}) = \sqrt{1} = 1
$$

## Challenge

Create a program to compute the **Mahalanobis Distance** between a point and a distribution. Ensure your implementation:
- Computes the inverse of the covariance matrix.
- Handles singular or ill-conditioned matrices (e.g., using pseudo-inverses).
