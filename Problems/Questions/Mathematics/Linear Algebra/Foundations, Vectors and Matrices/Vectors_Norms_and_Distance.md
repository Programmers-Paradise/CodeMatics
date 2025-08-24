# Vector Norms and Distances

## Introduction

Vector norms and distances are fundamental concepts in linear algebra with wide-ranging applications in mathematics, science, engineering, and machine learning. These concepts allow us to measure the magnitude, or "length," of vectors and the distance between them. This is crucial for generalizing the notion of length to higher dimensions, analyzing vector spaces, measuring signal strength in engineering, and forming the basis for tasks like clustering, classification, and regularization in machine learning.

## Definition

### Vector Norms

A vector norm is a function that assigns a strictly positive lenAgth or magnitude to each vector in a vector space, with the exception of the zero vector, which is assigned a length of zero. The **p-norm** of a vector $\mathbf{v} = (v_1, v_2, ..., v_n)$ is defined as:

$$
||\mathbf{v}||_ p = \left( \sum_{i=1}^{n} |v_i|^p \right)^{\frac{1}{p}}
$$

Commonly used norms include:
-   **L1 Norm (Manhattan Norm)**: The sum of the absolute values of the components. It is the distance a taxi would travel in a grid city.

$$
||\mathbf{v}||_ 1 = \sum_{i=1}^{n} |v_i|
$$

-   **L2 Norm (Euclidean Norm)**: The standard geometric length of a vector from the origin.

$$
||\mathbf{v}||_ 2 = \sqrt{\sum_{i=1}^{n} v_i^2}
$$

-   **Infinity Norm (Max Norm)**: The largest absolute value among the components of the vector.

$$
||\mathbf{v}||_\infty = \max(|v_1|, |v_2|, ..., |v_n|)
$$

### Vector Distances

The distance between two vectors $\mathbf{u}$ and $\mathbf{v}$ is defined as the norm of their difference, $\mathbf{u} - \mathbf{v}$. The most common distance is the **Euclidean distance** (based on the L2 norm):

$$
d(\mathbf{u}, \mathbf{v}) = ||\mathbf{u} - \mathbf{v}||_ 2 = \sqrt{\sum_{i=1}^{n} (u_i - v_i)^2}
$$

## Example

**Problem**: Let $\mathbf{v} = (3, -4)$ and $\mathbf{w} = (6, 0)$. Calculate their L1, L2, and Infinity norms, and find the Euclidean distance between them.

**Solution**:
1.  **L1 Norm of v**: $||\mathbf{v}||_1 = |3| + |-4| = 3 + 4 = 7$
2.  **L2 Norm of v**: $||\mathbf{v}||_2 = \sqrt{3^2 + (-4)^2} = \sqrt{9 + 16} = \sqrt{25} = 5$
3.  **Infinity Norm of v**: $||\mathbf{v}||_\infty = \max(|3|, |-4|) = 4$

Similarly for $\mathbf{w}$:
1.  **L1 Norm of w**: $||\mathbf{w}||_1 = |6| + |0| = 6$
2.  **L2 Norm of w**: $||\mathbf{w}||_2 = \sqrt{6^2 + 0^2} = \sqrt{36} = 6$
3.  **Infinity Norm of w**: $||\mathbf{w}||_\infty = \max(|6|, |0|) = 6$

**Euclidean Distance between v and w**:

$$
d(\mathbf{v}, \mathbf{w}) = ||\mathbf{v} - \mathbf{w}||_2 = \sqrt{(3-6)^2 + (-4-0)^2} = \sqrt{(-3)^2 + (-4)^2} = \sqrt{9 + 16} = \sqrt{25} = 5
$$

## Properties

-   **Positivity (or Definiteness)**: For any vector $\mathbf{v}$, $||\mathbf{v}|| \geq 0$. The norm is zero if and only if $\mathbf{v}$ is the zero vector.
-   **Homogeneity (or Scaling)**: For any scalar $a$, $||a\mathbf{v}|| = |a| \cdot ||\mathbf{v}||$.
-   **Triangle Inequality**: For any two vectors $\mathbf{u}$ and $\mathbf{v}$, $||\mathbf{u} + \mathbf{v}|| \leq ||\mathbf{u}|| + ||\mathbf{v}||$. This property also applies to distances: $d(\mathbf{u}, \mathbf{w}) \leq d(\mathbf{u}, \mathbf{v}) + d(\mathbf{v}, \mathbf{w})$.
-   **Symmetry**: The distance from $\mathbf{u}$ to $\mathbf{v}$ is the same as the distance from $\mathbf{v}$ to $\mathbf{u}$: $d(\mathbf{u}, \mathbf{v}) = d(\mathbf{v}, \mathbf{u})$.
-   **Identity of Indiscernibles**: The distance between two vectors is zero if and only if the vectors are identical: $d(\mathbf{u}, \mathbf{v}) = 0$ iff $\mathbf{u} = \mathbf{v}$.

## Applications

1.  **Machine Learning**: L1 (Lasso) and L2 (Ridge) norms are used as regularization penalties in regression to prevent overfitting. Distances, especially Euclidean distance, are fundamental to clustering algorithms like k-means and classification algorithms like k-nearest neighbors (k-NN).
2.  **Physics**: Norms are used to represent the magnitude of physical quantities like force, velocity, and field strength.
3.  **Engineering**: In signal processing, various norms are used to measure the size or energy of a signal.
4.  **Statistics**: Distances are used in multivariate analysis and for defining hypothesis testing regions.
5.  **Computer Graphics**: Euclidean distances and norms are essential for calculating object positions, scaling, and lighting in 3D modeling and rendering.
6.  **Optimization**: Norms are used to define the size of the steps in algorithms like gradient descent and to measure the distance to an optimal solution.

This structured approach covers the essential aspects of vector norms and distances, providing a solid foundation for their application in various fields.