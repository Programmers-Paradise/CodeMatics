# The Four Fundamental Subspaces in Linear Algebra

## Introduction

The Four Fundamental Subspaces are pivotal concepts in linear algebra that provide a comprehensive understanding of a matrix and the linear transformation it represents. These subspaces are essential for solving systems of equations, analyzing data, and have wide-ranging applications in fields such as physics, engineering, computer science, and machine learning.

## Definition

For any $m \times n$ matrix $A$, the Four Fundamental Subspaces are defined as follows:

-   **Column Space $(\mathcal{C}(A))$**: The set of all possible linear combinations of the column vectors of $A$. It is a subspace of $\mathbb{R}^m$. The column

$$
\mathcal{C}(A) = \{ \mathbf{b} \in \mathbb{R}^m \mid \mathbf{b} = A\mathbf{x} \text{ for some } \mathbf{x} \in \mathbb{R}^n \}
$$

-   **Nullspace $(\mathcal{N}(A))$**: The set of all vectors $\mathbf{x}$ in $\mathbb{R}^n$ that are mapped to the zero vector by the transformation $A$. It is a subspace of $\mathbb{R}^n$.

$$
\mathcal{N}(A) = \{ \mathbf{x} \in \mathbb{R}^n \mid A\mathbf{x} = \mathbf{0} \}
$$

-   **Row Space $(\mathcal{R}(A))$**: The set of all possible linear combinations of the row vectors of $A$. It is a subspace of $\mathbb{R}^n$ and is equivalent to the column space of the transpose of $A$, $\mathcal{C}(A^T)$.

-   **Left Nullspace $(\mathcal{N}(A^T))$**: The set of all vectors $\mathbf{y}$ in $\mathbb{R}^m$ that, when transposed and multiplied by $A$, result in the zero vector ($\mathbf{y}^T A = \mathbf{0}^T$). It is the nullspace of the transpose of $A$ and is a subspace of $\mathbb{R}^m$.

$$
\mathcal{N}(A^T) = \{ \mathbf{y} \in \mathbb{R}^m \mid A^T\mathbf{y} = \mathbf{0} \}
$$

## Example

Consider the matrix:

$$
A = \begin{bmatrix}1 & 2 \\
3 & 6\end{bmatrix}
$$

1.  **Column Space $\mathcal{C}(A)$**: The columns are $`\begin{bmatrix} 1 \\ 3 \end{bmatrix}$ and $\begin{bmatrix} 2 \\ 6 \end{bmatrix}`$. Since the second column is twice the first, the column space is the line spanned by the vector $`\begin{bmatrix} 1 \\ 3 \end{bmatrix}`$. The dimension is 1.

2.  **Nullspace ($`\mathcal{N}(A)`$)**: We solve $A\mathbf{x} = \mathbf{0}$:

$$
\begin{bmatrix}1 & 2 \\
3 & 6\end{bmatrix}\begin{bmatrix}x_1 \\
x_2\end{bmatrix} = \begin{bmatrix}0 \\
0\end{bmatrix}
$$

   This gives the equation $x_1 + 2x_2 = 0$, or $x_1 = -2x_2$. The nullspace is the line spanned by the vector $`\begin{bmatrix} -2 \\ 1 \end{bmatrix}`$. The dimension is 1.

3.  **Row Space ($`\mathcal{R}(A)`$)**: The rows are $[1, 2]$ and $[3, 6]$. The second row is three times the first, so the row space is the line in $\mathbb{R}^2$ spanned by the vector $[1, 2]$. The dimension is 1.

4.  **Left Nullspace ($`\mathcal{N}(A^T)`$)**: First, find $A^T$:

$$
A^T = \begin{bmatrix}1 & 3 \\
2 & 6\end{bmatrix}
$$

   We solve $A^T\mathbf{y} = \mathbf{0}$:
    
 $$
 \begin{bmatrix}1 & 3 \\
 2 & 6\end{bmatrix}\begin{bmatrix}y_1 \\
 y_2\end{bmatrix} = \begin{bmatrix}0 \\
 0\end{bmatrix}
 $$
 
   This gives the equation $y_1 + 3y_2 = 0$, or $y_1 = -3y_2$. The left nullspace is the line spanned by the vector $\begin{bmatrix} -3 \\ 1 \end{bmatrix}$. The dimension is 1.

## Properties

-   **Dimensions and the Rank-Nullity Theorem**: The dimensions of the four subspaces are fundamentally linked to the rank of the matrix, denoted as $r = \text{rank}(A)$.
    -   $\dim(\mathcal{C}(A)) = r$ (dimension of the column space is the rank)
    -   $\dim(\mathcal{R}(A)) = r$ (dimension of the row space is also the rank)
    -   $\dim(\mathcal{N}(A)) = n - r$ (dimension of the nullspace, also known as nullity)
    -   $\dim(\mathcal{N}(A^T)) = m - r$ (dimension of the left nullspace)
-   **Orthogonality**: The subspaces form two pairs of orthogonal complements.
    -   The row space is orthogonal to the nullspace: $\mathcal{R}(A) \perp \mathcal{N}(A)$.
    -   The column space is orthogonal to the left nullspace: $\mathcal{C}(A) \perp \mathcal{N}(A^T)$.
-   **Bases**: A basis for the column space can be found from the pivot columns of the original matrix $A$. A basis for the row space can be found from the non-zero rows of the row-echelon form of $A$.
-   **Fundamental Theorem of Linear Algebra**: This theorem connects the dimensions and orthogonality of the four subspaces, providing a complete geometric picture of the action of the matrix $A$. Any vector in $\mathbb{R}^n$ can be uniquely expressed as a sum of a vector in the row space and a vector in the nullspace. Similarly for $\mathbb{R}^m$ with the column space and left nullspace.

## Applications

1.  **Solving Systems of Equations**: Understanding these subspaces is key to determining the consistency and uniqueness of solutions for a linear system $A\mathbf{x} = \mathbf{b}$. A solution exists if and only if $\mathbf{b}$ is in the column space of $A$.
2.  **Least Squares Approximation**: In statistics and machine learning, when an exact solution to $A\mathbf{x} = \mathbf{b}$ does not exist, the best approximate solution is found by projecting $\mathbf{b}$ onto the column space of $A$.
3.  **Network Flows and Graph Theory**: The nullspace of the incidence matrix of a graph corresponds to the cycles or loops in the network, providing insights into the degrees of freedom in network flow problems.
4.  **Principal Component Analysis (PCA)**: This dimensionality reduction technique relies on finding an orthogonal basis (the principal components) for the row space of a data matrix.
5.  **Control Theory and State-Space Models**: These subspaces are used to analyze the controllability and observability of dynamic systems, determining whether a system's state can be driven to a particular value or inferred from its outputs.

