# Hamming Distance (for Binary Data)

Hamming distance measures the number of positions at which corresponding elements in two vectors differ. It is widely used for binary data, such as DNA sequences or error-correcting codes.

### Hamming Distance Formula

For two vectors $\mathbf{p} = [p_1, p_2, \ldots, p_n]$ and $\mathbf{q} = [q_1, q_2, \ldots, q_n]$ (with elements in $\{0, 1\}$), the Hamming distance $d$ is:

$$
d(\mathbf{p}, \mathbf{q}) = \sum_{i=1}^{n} \delta(p_i, q_i)
$$

Where:
- $\delta(a, b) = 1$ if $a \neq b$, otherwise $0$.
- $n$ is the number of dimensions (must be equal for both vectors).

### Explanation

- **2D Binary Vectors**: For $\mathbf{p} = [1, 0]$ and $\mathbf{q} = [1, 1]$:

$$
d(\mathbf{p}, \mathbf{q}) = \delta(1,1) + \delta(0,1) = 0 + 1 = 1
$$

- **3D Binary Vectors**: For $\mathbf{p} = [0, 1, 0]$ and $\mathbf{q} = [1, 1, 1]$:

$$
d(\mathbf{p}, \mathbf{q}) = \delta(0,1) + \delta(1,1) + \delta(0,1) = 1 + 0 + 1 = 2
$$

### Example

For binary vectors $\mathbf{p} = [1, 0, 1]$ and $\mathbf{q} = [1, 1, 0]$:

$$
d(\mathbf{p}, \mathbf{q}) = \delta(1,1) + \delta(0,1) + \delta(1,0) = 0 + 1 + 1 = 2
$$

## Challenge

Create a program to compute the **Hamming Distance** between two binary vectors. Ensure your implementation checks for equal lengths and validates input (e.g., only 0s and 1s are allowed).
