# Chebyshev Distance (L∞ Norm)

Chebyshev distance measures the maximum absolute difference between two points along any dimension in Euclidean space. It is commonly used in scenarios where the largest deviation across dimensions determines similarity or dissimilarity, such as chessboard movements or high-dimensional data analysis.

### Chebyshev Distance Formula

For two points $\mathbf{p}$ and $\mathbf{q}$ in an $n$-dimensional space, where $\mathbf{p} = (p_1, p_2, \ldots, p_n)$ and $\mathbf{q} = (q_1, q_2, \ldots, q_n)$, the Chebyshev distance $d$ is:

$$
d(\mathbf{p}, \mathbf{q}) = \max_{i=1}^{n} |p_i - q_i|
$$

Where:
- $p_i$ and $q_i$ are the coordinates of the points $\mathbf{p}$ and $\mathbf{q}$ in the $i$-th dimension.
- $n$ is the number of dimensions.

### Explanation

- **2D Space**: For points $\mathbf{p} = (x_1, y_1)$ and $\mathbf{q} = (x_2, y_2)$:

$$
d(\mathbf{p}, \mathbf{q}) = \max(|x_1 - x_2|, |y_1 - y_2|)
$$

- **3D Space**: For points $\mathbf{p} = (x_1, y_1, z_1)$ and $\mathbf{q} = (x_2, y_2, z_2)$:

$$
d(\mathbf{p}, \mathbf{q}) = \max(|x_1 - x_2|, |y_1 - y_2|, |z_1 - z_2|)
$$

### Example

For points $\mathbf{p} = (3, 4)$ and $ \mathbf{q} = (7, 1)$ in 2D space:

$$
d(\mathbf{p}, \mathbf{q}) = \max(|3 - 7|, |4 - 1|) = \max(4, 3) = 4
$$

## Challenge

Create a program to compute the **Chebyshev Distance** between two $n$-dimensional vectors. Ensure your implementation handles edge cases (e.g., zero-dimensional vectors or mismatched dimensions). 

