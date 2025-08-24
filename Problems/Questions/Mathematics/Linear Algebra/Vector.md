# Vectors
## Introduction

Vectors are fundamental mathematical objects used to represent quantities with both magnitude and direction. They play a crucial role across various fields such as physics, engineering, computer graphics, and machine learning.

## Definition

A vector is an ordered collection of numbers representing magnitudes or coordinates in space. Formally, a vector $\mathbf{v}$ in $\mathbb{R}^n$ can be expressed as:

$$
\mathbf{v} = \begin{bmatrix}v_1 \\
v_2 \\
\vdots \\
v_n
\end{bmatrix}
$$

where each $v_i$ is a scalar component of the vector.

## Example

Consider two vectors in $\mathbb{R}^2$:

$$
\mathbf{u} = \begin{bmatrix} 1 \\
2 \end{bmatrix}, \quad\mathbf{v} = \begin{bmatrix} 3 \\
4 \end{bmatrix}$$

Adding these vectors results in:

$$\mathbf{u} + \mathbf{v} = \begin{bmatrix} 1+3 \\ 2+4 \end{bmatrix} = \begin{bmatrix} 4 \\ 6 \end{bmatrix}$$

## Properties

- **Commutativity of Addition**: $\mathbf{u} + \mathbf{v} = \mathbf{v} + \mathbf{u}$
- **Associativity of Addition**: $(\mathbf{u} + \mathbf{v}) + \mathbf{w} = \mathbf{u} + (\mathbf{v} + \mathbf{w})$
- **Distributivity over Vector Addition**: $c(\mathbf{u} + \mathbf{v}) = c\mathbf{u} + c\mathbf{v}$
- **Distributivity over Scalar Addition**: $(c + d)\mathbf{u} = c\mathbf{u} + d\mathbf{u}$

- **Dot Product**: The dot product of two vectors $\mathbf{u}$ and $\mathbf{v}$ is:

$$
\mathbf{u} \cdot \mathbf{v} = u_1 v_1 + u_2 v_2 + \dots + u_n v_n
$$

- **Cross Product (in $\mathbb{R}^3$)**: The cross product of two vectors $\mathbf{u}$ and $\mathbf{v}$ in $\mathbb{R}^3$ is:

$$
\mathbf{u} \times \mathbf{v} = \begin{bmatrix}u_2 v_3 - u_3 v_2 \\
u_3 v_1 - u_1 v_3 \\
u_1 v_2 - u_2 v_1\end{bmatrix}
$$

## Applications

Vectors are essential in various applications:
1.  **Physics**: Representing forces, velocities, and accelerations.
2.  **Computer Graphics**: Transforming points using matrices in 2D or 3D space.
3.  **Machine Learning**: Data representation, such as feature vectors for classification algorithms like Support Vector Machines (SVM).
4.  **Engineering**: Structural analysis to calculate stresses and strains in materials.
5.  **Navigation**: Representing positions and directions in GPS systems.

Vectors provide a powerful framework for modeling and solving problems across diverse scientific and engineering disciplines.
