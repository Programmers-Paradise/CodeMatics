# Orthogonal Vectors and Subspaces

Orthogonal vectors and subspaces are fundamental concepts in linear algebra with wide-ranging applications in mathematics, science, engineering, and machine learning. They provide a geometric foundation for vector spaces, allowing for concepts like projection, decomposition, and optimal approximations.

## Core Definitions

### Orthogonal Vectors

Two vectors **u** and **v** in a vector space are **orthogonal** if their dot product is zero:

$$
\mathbf{u} \cdot \mathbf{v} = 0
$$

This implies that the angle between them is 90 degrees, geometrically representing perpendicularity.

### Orthonormal Vectors and Bases

A set of vectors is **orthonormal** if all vectors in the set are mutually orthogonal and each has a norm (length) of 1. An **orthonormal basis** for a subspace is a basis composed of orthonormal vectors. Such bases, like the standard basis $\{\mathbf{i}, \mathbf{j}, \mathbf{k}\}$, are highly desirable as they simplify computations significantly.

### Orthogonal Subspaces

Two subspaces $U$ and $V$ are **orthogonal** if every vector in $U$ is orthogonal to every vector in $V$. Formally:

$$
\mathbf{u} \in U,\ \mathbf{v} \in V \implies \mathbf{u} \cdot \mathbf{v} = 0
$$

The **orthogonal complement** of a subspace $U$, denoted $U^\perp$, consists of all vectors that are orthogonal to every vector in $U$.

## Example

**Example: Orthogonal Vectors**
Consider vectors **u** = $\begin{bmatrix}1 \\ 2\end{bmatrix}$ and **v** = $\begin{bmatrix}-2 \\ 1\end{bmatrix}$ in $\mathbb{R}^2$. Their dot product is:

$$
\mathbf{u} \cdot \mathbf{v} = (1)(-2) + (2)(1) = -2 + 2 = 0
$$

Thus, **u** and **v** are orthogonal.

**Example: Orthogonal Complements**
In $\mathbb{R}^3$, let $W$ be the $xy$-plane, which is spanned by $`\{\begin{bmatrix}1 \\ 0 \\ 0\end{bmatrix}, \begin{bmatrix}0 \\ 1 \\ 0\end{bmatrix}\}`$. Its orthogonal complement, $W^\perp$, is the set of all vectors orthogonal to the $xy$-plane. This corresponds to the $z$-axis, spanned by $`\{\begin{bmatrix}0 \\ 0 \\ 1\end{bmatrix}\}`$.

## Key Properties and Theorems

### Properties of Orthogonal Vectors
1.  **Symmetry**: If $\mathbf{u} \perp \mathbf{v}$, then $\mathbf{v} \perp \mathbf{u}$.
2.  **Scalar Multiplication**: If $\mathbf{u} \perp \mathbf{v}$, then $c\mathbf{u} \perp \mathbf{v}$ for any scalar $c$.
3.  **Zero Vector**: The zero vector is orthogonal to all vectors in the space.
4.  **Pythagorean Theorem**: If $\mathbf{u} \perp \mathbf{v}$, then $\|\mathbf{u} + \mathbf{v}\|^2 = \|\mathbf{u}\|^2 + \|\mathbf{v}\|^2$.

### Properties of Orthogonal Subspaces
1.  **Orthogonal Complement**: For any subspace $U$, its orthogonal complement $U^\perp$ is also a subspace.
2.  **The Orthogonal Decomposition Theorem**: For a subspace $U$ of $\mathbb{R}^n$, any vector $\mathbf{x} \in \mathbb{R}^n$ can be written uniquely as the sum $\mathbf{x} = \mathbf{u} + \mathbf{w}$, where $\mathbf{u} \in U$ and $\mathbf{w} \in U^\perp$. This is expressed as the direct sum $\mathbb{R}^n = U \oplus U^\perp$.
3.  **Dimensionality**: A direct consequence is that $\text{dim}(U) + \text{dim}(U^\perp) = n$.

## Fundamental Operations

### Orthogonal Projections
The orthogonal projection of a vector $\mathbf{y}$ onto a subspace $U$ is the vector $\hat{\mathbf{y}}$ in $U$ that is closest to $\mathbf{y}$. It is found by decomposing $\mathbf{y}$ such that $\mathbf{y} = \hat{\mathbf{y}} + \mathbf{z}$, where $\hat{\mathbf{y}} \in U$ and $\mathbf{z} \in U^\perp$. Projections are the foundation for solving **least-squares problems**, which are used to find best-fit solutions to overdetermined systems (e.g., in linear regression).

### The Gram-Schmidt Process
The Gram-Schmidt process is an algorithm used to convert any basis of a subspace into an orthonormal basis. It works by sequentially taking each basis vector and subtracting its projection onto the subspace spanned by the previously processed vectors, thus creating a new orthogonal vector, which is then normalized.

## Orthogonal Matrices
A square matrix $Q$ is an **orthogonal matrix** if its columns form an orthonormal set. Such matrices have several crucial properties:
- They preserve lengths and angles under transformation: $\|Q\mathbf{x}\| = \|\mathbf{x}\|$.
- They represent rigid transformations like rotations and reflections.
- Their inverse is simply their transpose: $Q^{-1} = Q^T$. This makes them extremely efficient to work with computationally.

## Applications

### Physics
In mechanics, forces and velocities can be decomposed into orthogonal components. Forces acting along perpendicular directions do not affect each other and can be analyzed independently.

### Machine Learning
- **Principal Component Analysis (PCA)**: Constructs a new basis of orthogonal vectors (principal components) that align with the directions of maximum variance in the data, used for dimensionality reduction.
- **Linear Regression**: Orthogonal projections are used to solve the least-squares problem, finding the line or plane that best fits a set of data points.

### Quantum Mechanics
Quantum states are represented by vectors in Hilbert spaces. States corresponding to distinct, measurable outcomes are represented by orthogonal vectors, ensuring they are mutually exclusive.

### Signal Processing
The **Fourier Series** decomposes signals into a sum of orthogonal sine and cosine functions, which form a basis for signal spaces. This is fundamental to signal analysis, compression, and filtering.