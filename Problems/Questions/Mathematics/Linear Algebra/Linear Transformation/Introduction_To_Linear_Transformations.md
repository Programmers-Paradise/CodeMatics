# Introduction to Linear Transformations in Linear Algebra

## Introduction

Linear transformations are fundamental mappings between vector spaces that preserve the underlying linear structure of these spaces. They are essential in mathematics, science, and engineering because they allow us to model and analyze a wide range of phenomena by simplifying complex systems into linear relationships.

## Definition

A **linear transformation** (or **linear map**) is a function $T: V \to W$ from a vector space $V$ (the domain) to another vector space $W$ (the codomain) that satisfies the following two properties for all vectors $\mathbf{u}, \mathbf{v} \in V$ and any scalar $c$:

1.  **Additivity**: The transformation of a sum of vectors is the sum of their transformations.
  
$$
T(\mathbf{u} + \mathbf{v}) = T(\mathbf{u}) + T(\mathbf{v})
$$
    
3.  **Homogeneity** (or Scalar Multiplication): The transformation of a scaled vector is the scaled transformation of the vector.
  
$$
T(c\mathbf{u}) = cT(\mathbf{u})
$$

These two conditions can be combined into a single property: $T(c\mathbf{u} + d\mathbf{v}) = cT(\mathbf{u}) + dT(\mathbf{v})$ for any vectors $\mathbf{u}, \mathbf{v}$ and scalars $c, d$. An important consequence is that a linear transformation always maps the zero vector of the domain to the zero vector of the codomain: $T(\mathbf{0}_V) = \mathbf{0}_W$.

## Example

Consider the **scaling** transformation $T: \mathbb{R}^2 \to \mathbb{R}^2$ defined by scaling any vector by a factor of 2:

$$T(\mathbf{x}) = 2\mathbf{x}$$

where $`\mathbf{x} = \begin{bmatrix} x_1 \\ x_2 \end{bmatrix}`$.

**Application:**
1.  **Transforming the Basis Vectors**: A linear transformation is completely determined by its effect on the basis vectors.
    -   For
       $`\mathbf{e}_1 = \begin{bmatrix} 1 \\ 0 \end{bmatrix}`$:
       
$$
T(\mathbf{e}_1) = 2\begin{bmatrix} 1 \\
0 \end{bmatrix} = \begin{bmatrix} 2 \\
0 \end{bmatrix}
$$
         
   For $\mathbf{e}_2 = \begin{bmatrix} 0 \\ 1 \end{bmatrix}$:
      
$$
T(\mathbf{e}_2) = 2\begin{bmatrix} 0 \\
1 \end{bmatrix} = \begin{bmatrix} 0 \\
2 \end{bmatrix}$$
        
   The matrix of this transformation is $`A = \begin{bmatrix} 2 & 0 \\ 0 & 2 \end{bmatrix}`$.

2.  **Transforming an Arbitrary Vector**:
    -   Let $`\mathbf{x} = \begin{bmatrix} 3 \\ -1 \end{bmatrix}`$. Applying the transformation gives:
       
$$
T(\mathbf{x}) = 2\begin{bmatrix} 3 \\ 
-1 \end{bmatrix} = \begin{bmatrix} 6 \\
-2 \end{bmatrix}
$$

## Properties

-   **Preservation of Linear Combinations**: A linear transformation preserves linear combinations. For any vectors $\mathbf{v}_1, \ldots, \mathbf{v}_n$ and scalars $a_1, \ldots, a_n$:
    
$$
T(a_1\mathbf{v}_1 + \dots + a_n\mathbf{v}_n) = a_1T(\mathbf{v}_1) + \dots + a_nT(\mathbf{v}_n)
$$
    
-   **Matrix Representation**: Every linear transformation between finite-dimensional vector spaces can be represented by a matrix. The transformation $T(\mathbf{x})$ is equivalent to multiplication by a matrix $A$, so $T(\mathbf{x}) = A\mathbf{x}$.
-   **Kernel and Image**: Two important subspaces are associated with a linear transformation $T: V \to W$.
    -   **Kernel (or Null Space)**: The set of all vectors in $V$ that map to the zero vector in $W$.
        
$$
\text{ker}(T) = \{ \mathbf{v} \in V \mid T(\mathbf{v}) = \mathbf{0}_W \}
$$
        
   -    **Image (or Range)**: The set of all possible outputs of $T$ in $W$.
      
$$
\text{im}(T) = \{ T(\mathbf{v}) \mid \mathbf{v} \in V \}
$$
        
-   **Composition**: The composition of two linear transformations $S$ and $T$, denoted $S \circ T$, is also a linear transformation. If $S$ and $T$ are represented by matrices $B$ and $A$, their composition is represented by the matrix product $BA$.
-   **Invertibility**: A linear transformation is invertible if and only if it is both one-to-one (injective) and onto (surjective). This corresponds to its matrix representation being an invertible square matrix.
-   **Eigenvalues and Eigenvectors**: Non-zero vectors $\mathbf{v}$ that are only scaled by a transformation are called eigenvectors, and the scaling factor $\lambda$ is the corresponding eigenvalue: $T(\mathbf{v}) = \lambda \mathbf{v}$.

## Applications

1.  **Computer Graphics**: Transformations like rotation, scaling, reflection, and shearing are all linear transformations used to manipulate objects and render scenes in 2D and 3D graphics.
2.  **Machine Learning**: Linear algebra is the foundation for many machine learning algorithms. Linear transformations are used in dimensionality reduction (e.g., Principal Component Analysis - PCA), and layers in neural networks can be represented as affine transformations (a linear transformation followed by a translation).
3.  **Physics**: Linear transformations are used to describe physical phenomena, such as the stress-strain relationship in materials, rotations of rigid bodies, and the action of operators on state vectors in quantum mechanics.
4.  **Differential Equations**: Linear transformations are used to analyze systems of linear differential equations, which model a wide variety of dynamic systems in science and engineering.

This structured approach provides a comprehensive understanding of linear transformations, their properties, examples, and real-world applications.