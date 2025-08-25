# Geometric Transformations

## Introduction
Geometric transformations are fundamental operations in linear algebra that alter the position, orientation, or shape of geometric objects. These transformations are represented using matrices and vectors, making them essential tools in various fields such as computer graphics, physics, engineering, and machine learning. Understanding these transformations is crucial for manipulating data in high-dimensional spaces and solving complex problems.

## Definition
A geometric transformation can be defined as a function that maps points from one space to another, often represented by a matrix multiplication. For a vector **v** ∈ ℝⁿ, applying a linear transformation **T** with matrix representation **A** results in the transformed vector **w** = A**v**, where **w** ∈ ℝᵐ.

Key transformations include:
- **Rotation**: Preserves distances and angles but changes orientation.
  - Rotation matrix (counterclockwise by θ):

$$
R(\theta) = \begin{bmatrix}
\cos\theta & -\sin\theta \\
\sin\theta & \cos\theta
\end{bmatrix}
$$

- **Reflection**: Flips space over a line (2D) or plane (3D).
  - Reflection matrix (across the x-axis):

$$
M = \begin{bmatrix}
1 & 0 \\
0 & -1
\end{bmatrix}
$$

- **Scaling**: Changes the size of an object.
  - Scaling matrix:

$$
S = \begin{bmatrix}
s_x & 0 \\
0 & s_y
\end{bmatrix}
$$

- **Shearing**: Distorts the shape while keeping one axis constant.
  - Shear matrix (x-direction):

$$
H = \begin{bmatrix}
1 & k \\
0 & 1
\end{bmatrix}
$$

- **Translation**: Moves an object without rotating or resizing it. Translation is not a linear transformation as it does not map the origin to itself. However, it is an **affine transformation** and can be represented by a matrix multiplication using **homogeneous coordinates**.

## Example
Consider the rotation of a point (1, 0) by 90 degrees counterclockwise. The rotation matrix for θ = 90° is:

$$
R(90^\circ) = \begin{bmatrix}0 & -1 \\
1 & 0\end{bmatrix}
$$

Multiplying this matrix by the vector **v** = $`\begin{bmatrix}1 \\ 0\end{bmatrix}`$:

$$
\begin{bmatrix}0 & -1 \\
1 & 0\end{bmatrix}\begin{bmatrix}1 \\
0\end{bmatrix}=\begin{bmatrix}0 \\
1\end{bmatrix}
$$

The result is the point (0, 1), demonstrating a 90-degree rotation.

## Properties

### Linearity
Transformations like rotation and scaling are linear because they preserve vector addition and scalar multiplication:
- **Additivity**: T(**v** + **w**) = T(**v**) + T(**w**)
- **Homogeneity**: T(k**v**) = kT(**v**)

### Invertibility
A transformation is invertible if there exists another transformation that undoes it, which occurs when the determinant of its matrix is non-zero.

### Composition
Transformations can be composed by multiplying their matrices. For example, rotating 90 degrees and then scaling:

$$
S \cdot R(90^\circ) = \begin{bmatrix}s_x & 0 \\
0 & s_y\end{bmatrix}\cdot\begin{bmatrix}0 & -1 \\
1 & 0\end{bmatrix}=\begin{bmatrix}0 & -s_x \\
s_y & 0\end{bmatrix}
$$

### Determinant
The determinant of a transformation matrix provides information about how it scales area (in 2D) or volume (in 3D). For rotation matrices, the determinant is **+1**, indicating that both area and orientation are preserved. Transformations that include a reflection have a determinant of **-1**, which means area is preserved but orientation is reversed.

### Eigenvalues and Eigenvectors
Eigenvalues (λ) and eigenvectors (**v**) satisfy A**v** = λ**v**. They are crucial for understanding transformation behavior, such as identifying axes of rotation or directions of scaling.

## Applications
Geometric transformations have extensive applications:
- **Computer Graphics**: Used to render 3D models, create animations, and manage camera perspectives.
- **Physics**: Describes changes in coordinate systems, such as Lorentz transformations in special relativity.
- **Robotics**: Essential for path planning, manipulator kinematics, and controlling robot movements.
- **Machine Learning**: Applied in dimensionality reduction (e.g., PCA) and as layers in neural networks.
- **Engineering**: Used in structural analysis to model material stress and deformation.

These applications highlight the versatility of geometric transformations across various scientific and engineering domains.