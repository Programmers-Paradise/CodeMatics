# Change of Basis in Linear Algebra

## Introduction

Change of basis is a fundamental concept in linear algebra that involves expressing vectors from one coordinate system (basis) to another. This technique is crucial for simplifying problems and understanding the relationships between different representations of vectors and linear transformations. It allows us to choose a perspective, or basis, that makes a particular problem easier to solve.

## Definition

Given a vector space $V$ and two bases for that space, $\mathcal{B} = \{ \mathbf{b}_1, \mathbf{b}_2, \ldots, \mathbf{b}_n \}$ (the "old" basis) and $\mathcal{C} = \{ \mathbf{c}_1, \mathbf{c}_2, \ldots, \mathbf{c}_n \}$ (the "new" basis), we can find a **change-of-basis matrix** that converts the coordinates of any vector from one basis to the other.

The change-of-basis matrix from $\mathcal{B}$ to $\mathcal{C}$, often denoted $P_{\mathcal{C} \leftarrow \mathcal{B}}$, transforms the $\mathcal{B}$-coordinates of a vector into its $\mathcal{C}$-coordinates. If $[\mathbf{v}]_ {\mathcal{B}}$ is the coordinate vector of $\mathbf{v}$ relative to basis $\mathcal{B}$, and $[\mathbf{v}]_{\mathcal{C}}$ is the coordinate vector relative to basis $\mathcal{C}$, then the relationship is:

$$[\mathbf{v}]_ {\mathcal{C}} = P_{\mathcal{C} \leftarrow \mathcal{B}} [\mathbf{v}]_{\mathcal{B}}$$

The columns of the matrix $P_{\mathcal{C} \leftarrow \mathcal{B}}$ are the $\mathcal{C}$-coordinate vectors of the basis vectors from $\mathcal{B}$. That is:

$$
P_{\mathcal{C} \leftarrow \mathcal{B}} = \begin{bmatrix} | & | & & | \\
[\mathbf{b}_ 1]_ {\mathcal{C}} & [\mathbf{b}_ 2]_ {\mathcal{C}} & \cdots & [\mathbf{b}_ n]_{\mathcal{C}} \\
| & | & & | \end{bmatrix}
$$

A common special case is changing from a custom basis to the standard basis $\mathcal{E}$. The matrix $P_{\mathcal{E} \leftarrow \mathcal{B}}$ is easy to find; its columns are simply the vectors of the basis $\mathcal{B}$ written in standard coordinates.

## Example

Consider the vector space $\mathbb{R}^2$ with the standard basis $`\mathcal{E} = \left\{ \begin{bmatrix} 1 \\ 0 \end{bmatrix}, \begin{bmatrix} 0 \\ 1 \end{bmatrix} \right\}`$ and a new basis $`\mathcal{B} = \left\{ \begin{bmatrix} 1 \\ 1 \end{bmatrix}, \begin{bmatrix} -1 \\ 1 \end{bmatrix} \right\}`$.

Let a vector be given in standard coordinates as $\mathbf{v} = \begin{bmatrix} 3 \\ 2 \end{bmatrix}$. We want to find its coordinates relative to the basis $\mathcal{B}$, denoted $[\mathbf{v}]_{\mathcal{B}}$.

**Solution:**
We are looking for scalars $c_1$ and $c_2$ such that:

$$\mathbf{v} = c_1 \mathbf{b}_1 + c_2 \mathbf{b}_2$$

$$\begin{bmatrix} 3 \\
2 \end{bmatrix} = c_1 \begin{bmatrix} 1 \\
1 \end{bmatrix} + c_2 \begin{bmatrix} -1 \\
1 \end{bmatrix}$$

This can be written as a matrix equation:

$$\begin{bmatrix} 1 & -1 \\
1 & 1 \end{bmatrix} \begin{bmatrix} c_1 \\
c_2 \end{bmatrix} = \begin{bmatrix} 3 \\
2 \end{bmatrix}$$

The matrix $`\begin{bmatrix} 1 & -1 \\ 1 & 1 \end{bmatrix}`$ is the change-of-basis matrix from $\mathcal{B}$ to the standard basis $\mathcal{E}$, i.e., $`P_{\mathcal{E} \leftarrow \mathcal{B}}`$. To find the coordinates in $`\mathcal{B}`$, we need to solve for the vector $`\begin{bmatrix} c_1 \\ c_2 \end{bmatrix}`$, which is $`[\mathbf{v}]_{\mathcal{B}}`$. We can do this by multiplying by the inverse of the matrix:

$$[\mathbf{v}]_{\mathcal{B}} = \begin{bmatrix} c_1 \\ c_2 \end{bmatrix} = \begin{bmatrix} 1 & -1 \\ 1 & 1 \end{bmatrix}^{-1} \begin{bmatrix} 3 \\ 2 \end{bmatrix}$$

First, find the inverse:

$$P_{\mathcal{E} \leftarrow \mathcal{B}}^{-1} = \frac{1}{(1)(1) - (-1)(1)} \begin{bmatrix} 1 & 1 \\
-1 & 1 \end{bmatrix} = \frac{1}{2} \begin{bmatrix} 1 & 1 \\
-1 & 1 \end{bmatrix} = \begin{bmatrix} 0.5 & 0.5 \\ 
-0.5 & 0.5 \end{bmatrix}$$

Now, perform the multiplication:

$$[\mathbf{v}]_{\mathcal{B}} = \begin{bmatrix} 0.5 & 0.5 \\
-0.5 & 0.5 \end{bmatrix} \begin{bmatrix} 3 \\
2 \end{bmatrix} = \begin{bmatrix} (0.5)(3) + (0.5)(2) \\
(-0.5)(3) + (0.5)(2) \end{bmatrix} = \begin{bmatrix} 1.5 + 1 \\
-1.5 + 1 \end{bmatrix} = \begin{bmatrix} 2.5 \\
-0.5 \end{bmatrix}$$

So, the coordinate vector of $\mathbf{v}$ in the basis $\mathcal{B}$ is $[\mathbf{v}]_{\mathcal{B}} = \begin{bmatrix} 2.5 \\ -0.5 \end{bmatrix}$.

## Properties

-   **Invertibility**: The change-of-basis matrix $P_{\mathcal{C} \leftarrow \mathcal{B}}$ is always invertible. Its inverse is the matrix that changes from basis $\mathcal{C}$ back to basis $\mathcal{B}$.
 
    $$(P_{\mathcal{C} \leftarrow \mathcal{B}})^{-1} = P_{\mathcal{B} \leftarrow \mathcal{C}}$$
    
-   **Composition**: A change of basis from $\mathcal{A}$ to $\mathcal{C}$ can be done by first changing from $\mathcal{A}$ to $\mathcal{B}$ and then from $\mathcal{B}$ to $\mathcal{C}$.
 
    $$P_{\mathcal{C} \leftarrow \mathcal{A}} = P_{\mathcal{C} \leftarrow \mathcal{B}} P_{\mathcal{B} \leftarrow \mathcal{A}}$$
    
-   **Transformation Matrix**: If $A$ is the matrix for a linear transformation in the standard basis, its matrix $D$ in a new basis $\mathcal{B}$ is given by a similarity transformation:
 
    $$D = P^{-1} A P$$
    
    where $P$ is the change-of-basis matrix from $\mathcal{B}$ to the standard basis.

## Applications

1.  **Computer Graphics**: Changing coordinate systems is essential for rendering scenes. An object's coordinates might be defined relative to itself, then transformed to world coordinates, and finally to camera or screen coordinates.

2.  **Machine Learning**: Dimensionality reduction techniques like Principal Component Analysis (PCA) involve changing to a new basis (the principal components) that better represents the variance in the data.

3.  **Robotics**: Robot arms and sensors have their own coordinate systems. Change of basis is used to transform coordinates between different parts of the robot and the surrounding world.

4.  **Physics**: Physical laws must hold regardless of the coordinate system. Change of basis is used to switch between different reference frames, such as inertial and rotating frames.

5.  **Engineering**: Solving problems involving vibrations or stress analysis can be simplified by changing to a basis of eigenvectors (a modal basis), which diagonalizes the system's matrix.

Change of basis is a versatile tool with applications across various scientific and engineering disciplines, enabling problem-solving in more intuitive or computationally efficient frameworks.