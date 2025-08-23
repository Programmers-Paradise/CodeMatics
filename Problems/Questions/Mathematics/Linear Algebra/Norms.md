# Norms

Norms are fundamental concepts in mathematics that provide a measure of the size or length of vectors in vector spaces. They play a crucial role in various fields, including math, physics, engineering, machine learning, and signal processing, by quantifying the magnitude of vectors and enabling comparisons between them.

## Definition

A norm on a vector space $V$ over the real or complex numbers is a function $\| \cdot \| : V \rightarrow \mathbb{R}$ that satisfies the following three properties for all vectors $x, y \in V$ and scalars $\alpha$:

1. **Absolute Homogeneity**:

$$
\| \alpha x \| = |\alpha| \cdot \| x \|
$$

2. **Positivity**:
   - If $x \neq 0$, then $\| x \| > 0$.
   - If $x = 0$, then $\| x \| = 0 $.

3. **Triangle Inequality (Subadditivity)**:

$$
\| x + y \| \leq \| x \| + \| y \|
$$

These properties ensure that the norm behaves intuitively, providing a consistent measure of vector magnitude.

## Example

Consider the Euclidean norm in $\mathbb{R}^2$, defined as:

$$
\| (x_1, x_2) \| = \sqrt{x_1^2 + x_2^2}
$$

For the vector $v = (3, 4)$:
- Compute each component squared: $3^2 = 9$, $4^2 = 16$.
- Sum them: $9 + 16 = 25$.
- Take the square root: $\sqrt{25} = 5$.

Thus, $\| v \| = 5$.

## Properties

### Absolute Homogeneity
For any scalar $\alpha$ and vector $x$:

$$
\| \alpha x \| = |\alpha| \cdot \| x \|
$$

Example: If $x = (2, 3)$, then $\| x \| = \sqrt{13}$. Scaling by $\alpha = 4$ : $\| 4x \| = 4 \times \sqrt{13}$.

### Positivity
- For any non-zero vector $x$, $\| x \| > 0$.
- Only the zero vector has a norm of zero.

### Triangle Inequality (Subadditivity)
For vectors $x, y$:

$$
\| x + y \| \leq \| x \| + \| y \|
$$

Example: Let $x = (1, 0)$, $y = (0, 1)$. Then:
- $\| x + y \| = \sqrt{2}$
- $\| x \| + \| y \| = 1 + 1 = 2$
Thus, $\sqrt{2} \leq 2$.

### Subadditivity and Convexity
All norms are convex functions. This property is essential in optimization problems.

## Applications

Norms have diverse applications across various domains:

- **Machine Learning**: Used for regularization (L1/L2) to prevent overfitting by penalizing large weights.
- **Signal Processing**: Norms measure signal energy or sparsity, aiding in compression and denoising.
- **Physics**: The Euclidean norm represents distance between points in space.
- **Engineering**: Norms are used to assess system stability and control performance.

In summary, norms provide a versatile framework for measuring vector magnitudes, essential in both theoretical mathematics and practical applications across multiple disciplines.
