# Euclidean Distance

Euclidean distance measures the straight-line distance between two points in Euclidean space. It is commonly used to assess similarity or dissimilarity between data points.

### Euclidean Distance Formula

For two points $\mathbf{p}$ and $\mathbf{q}$ in an $n$-dimensional space, where $\mathbf{p} = (p_1, p_2, \ldots, p_n)$ and $\mathbf{q} = (q_1, q_2, \ldots, q_n)$, the Euclidean distance $d$ is:

$$
d(\mathbf{p}, \mathbf{q}) = \sqrt{\sum_{i=1}^{n} (p_i - q_i)^2}
$$

Where:

- $p_i$ and $q_i$ are the coordinates of the points $\mathbf{p}$ and $\mathbf{q}$ in the $i$-th dimension.
- $n$ is the number of dimensions.

### Explanation

- **2D Space**: For points $\mathbf{p} = (x_1, y_1)$ and $\mathbf{q} = (x_2, y_2)$:

$$
d(\mathbf{p}, \mathbf{q}) = \sqrt{(x_1 - x_2)^2 + (y_1 - y_2)^2}
$$

- **3D Space**: For points $\mathbf{p} = (x_1, y_1, z_1)$ and $\mathbf{q} = (x_2, y_2, z_2)$:

$$
d(\mathbf{p}, \mathbf{q}) = \sqrt{(x_1 - x_2)^2 + (y_1 - y_2)^2 + (z_1 - z_2)^2}
$$

### Example

For points $\mathbf{p} = (3, 4)$ and $\mathbf{q} = (7, 1)$ in 2D space:

$$
d(\mathbf{p}, \mathbf{q}) = \sqrt{(3 - 7)^2 + (4 - 1)^2} = \sqrt{(-4)^2 + 3^2} = \sqrt{16 + 9} = \sqrt{25} = 5
$$

## Challenge

Create a program to find euclidean Distance Between two $n$-dimension vectors
