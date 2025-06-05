## Vector Operations

Vectors are fundamental objects in linear algebra and are used to represent quantities with both magnitude and direction. Various operations can be performed on vectors to analyze and manipulate them.

### Vector Addition

The sum of two vectors $u$ and $v$ is a vector $w$ where each component is the sum of the corresponding components of $u$ and $v$:

$$
\mathbf{w} = \mathbf{u} + \mathbf{v}
$$

If:

$$
\mathbf{u} = \begin{pmatrix} u_1 \\ u_2 \end{pmatrix}
\text{ and }
\mathbf{v} = \begin{pmatrix} v_1 \\ v_2 \end{pmatrix}
$$

Then:

$$
\mathbf{w} = \begin{pmatrix} u_1 + v_1 \\ u_2 + v_2 \end{pmatrix}
$$

### Scalar Multiplication

Multiplying a vector v by a scalar alpha scales the vector by alpha , changing its magnitude but not its direction:

$$
\alpha \mathbf{v} = \begin{pmatrix} \alpha v_1 \\ \alpha v_2 \end{pmatrix}
$$

### Dot Product

The dot product of two vectors u and u is a scalar defined as:

$$
\mathbf{u} \cdot \mathbf{v} = \sum_{i=1}^{n} u_i v_i
$$

For:

$$
\mathbf{u} = \begin{pmatrix} u_1 \\ u_2 \end{pmatrix}
\text{ and }
\mathbf{v} = \begin{pmatrix} v_1 \\ v_2 \end{pmatrix}
$$

The dot product is:

$$
\mathbf{u} \cdot \mathbf{v} = u_1 v_1 + u_2 v_2
$$

### Cross Product

The cross product of two vectors u and v (only in 3D) results in a vector perpendicular to both u and v:

$$
\mathbf{u} \times \mathbf{v} = \begin{vmatrix}
\mathbf{i} & \mathbf{j} & \mathbf{k} \\
u_1 & u_2 & u_3 \\
v_1 & v_2 & v_3
\end{vmatrix}
$$

Where i , j and  k are unit vectors along the x, y, and z axes.

### Magnitude of a Vector

The magnitude (or norm) of a vector v is calculated as:

$$
\|\mathbf{v}\| = \sqrt{\sum_{i=1}^{n} v_i^2}
$$

For:

$$
\mathbf{v} = \begin{pmatrix} v_1 \\ v_2 \end{pmatrix}
$$

The magnitude is:

$$
\|\mathbf{v}\| = \sqrt{v_1^2 + v_2^2}
$$

### Applications

Vector operations are widely used in various fields including:
- **Physics**: To represent forces and velocities.
- **Computer Graphics**: For transformations and lighting calculations.
- **Machine Learning**: In algorithms for data classification and clustering.

## Problem Statement

Given two vectors $u$ and $v$, perform the following operations:
1. Compute the sum $\mathbf{w} = \mathbf{u} + \mathbf{v}.$
2. Find the dot product $\mathbf{u} \cdot \mathbf{v}.$
3. If in 3D, compute the cross product $\mathbf{u} \times \mathbf{v}.$
4. Calculate the magnitude of $u$ and $v$.
