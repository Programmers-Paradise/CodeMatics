# Projections onto Subspaces in Linear Algebra

## Introduction

Projections onto subspaces are a fundamental concept in linear algebra with wide-ranging applications in mathematics, science, and engineering. The idea of projecting a vector onto a subspace involves finding the "closest" vector within that subspace to the original vector. This concept is crucial in solving least squares problems, which arise in many areas such as statistics, machine learning, computer graphics, and signal processing.

Projections allow us to decompose vectors into components that lie within specific subspaces, making it easier to analyze and solve complex problems by breaking them down into simpler, more manageable parts. This technique is particularly valuable when dealing with high-dimensional data or systems of equations where direct solutions are intractable.

## Definition

Let $S$ be a subspace of $\mathbb{R}^m$ spanned by the linearly independent columns of an $m \times n$ matrix $\mathbf{A}$. The **orthogonal projection** of a vector $\mathbf{b} \in \mathbb{R}^m$ onto the subspace $S$ is the vector $\mathbf{p}$ in $S$ that is closest to $\mathbf{b}$. This projection is given by:

$$
\mathbf{p} = \text{proj}_S(\mathbf{b}) = \mathbf{P}\mathbf{b}
$$

where $\mathbf{P}$ is the orthogonal projection matrix defined as:

$$
\mathbf{P} = \mathbf{A}(\mathbf{A}^T\mathbf{A})^{-1}\mathbf{A}^T
$$

This formula ensures that the error vector, $\mathbf{e} = \mathbf{b} - \mathbf{p}$, is orthogonal to the subspace $S$.

## Example

Consider projecting the vector 

$$
\mathbf{b} = \begin{bmatrix} 3 \\ 2 \\ 1 \end{bmatrix}
$$

onto the subspace $S$ spanned by the columns of the matrix:

$$
\mathbf{A} = \begin{bmatrix} 1 & 0 \\
0 & 1 \\
0 & 0
\end{bmatrix}
$$

The subspace $S$ is the xy-plane in $\mathbb{R}^3$.

**Step 1: Calculate $\mathbf{A}^T\mathbf{A}$ and its inverse**

$$
\mathbf{A}^T\mathbf{A} = \begin{bmatrix} 1 & 0 & 0 \\
0 & 1 & 0 \end{bmatrix}
\begin{bmatrix} 1 & 0 \\
0 & 1 \\
0 & 0 \end{bmatrix} = \begin{bmatrix} 1 & 0 \\
0 & 1 \end{bmatrix}
$$

$$
(\mathbf{A}^T\mathbf{A})^{-1} = \begin{bmatrix} 1 & 0 \\
0 & 1 \end{bmatrix}
$$

**Step 2: Calculate the projection matrix $\mathbf{P}$**

$$
\mathbf{P} = \mathbf{A}(\mathbf{A}^T\mathbf{A})^{-1}\mathbf{A}^T = \begin{bmatrix} 1 & 0 \\
0 & 1 \\
0 & 0 
\end{bmatrix}
\begin{bmatrix} 1 & 0 \\
0 & 1 
\end{bmatrix}
\begin{bmatrix} 1 & 0 & 0 \\
0 & 1 & 0 \end{bmatrix} = \begin{bmatrix} 1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0 \end{bmatrix}$$

**Step 3: Calculate the projection of $\mathbf{b}$ onto $S$**

$$
\mathbf{p} = \mathbf{P}\mathbf{b} = \begin{bmatrix} 1 & 0 & 0 \\
0 & 1 & 0 \\
0 & 0 & 0 
\end{bmatrix}
\begin{bmatrix} 3 \\
2 \\
1 
\end{bmatrix} = \begin{bmatrix} 3 \\
2 \\
0 \end{bmatrix}
$$

Thus, the projection of $\mathbf{b}$ onto the xy-plane is $\begin{bmatrix} 3 \\ 2 \\ 0 \end{bmatrix}$.

## Properties

-   **Idempotence**: A projection matrix is idempotent, meaning that applying the projection twice has the same effect as applying it once.
    $$\mathbf{P}^2 = \mathbf{P}$$
-   **Symmetry**: An orthogonal projection matrix is symmetric.
    $$\mathbf{P}^T = \mathbf{P}$$
-   **Error Orthogonality**: The error vector $\mathbf{e} = \mathbf{b} - \mathbf{p}$ is orthogonal to the subspace $S$. This is a key property used in deriving the least squares solution.
    $$\mathbf{A}^T\mathbf{e} = \mathbf{0}$$
-   **Invariance**: If a vector $\mathbf{v}$ is already in the subspace $S$, its projection onto $S$ is the vector itself.
    $$\text{proj}_S(\mathbf{v}) = \mathbf{v} \quad \text{for all } \mathbf{v} \in S$$

## Applications

1.  **Machine Learning**: In linear regression, projections are used to find the best-fitting hyperplane that minimizes the sum of squared errors between the observed and predicted values.
2.  **Computer Graphics**: Projections are essential for rendering 3D objects onto a 2D screen, forming the basis of both perspective and orthographic projections.
3.  **Signal Processing**: In filter design and Fourier analysis, signals are projected onto orthogonal subspaces (e.g., spanned by sinusoids) to extract or analyze specific frequency components.
4.  **Statistics**: In principal component analysis (PCA), data is projected onto a lower-dimensional subspace spanned by the principal components, which helps in dimensionality reduction while retaining the most important information.
5.  **Engineering**: In control systems, projections are used to design controllers that stabilize systems by projecting system states onto desired subspaces.

Projections onto subspaces are a versatile tool with applications across various fields, providing a mathematical foundation for solving real-world problems involving high-dimensional data and complex systems.