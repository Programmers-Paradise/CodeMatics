# Cross Product in Linear Algebra

## Introduction

The cross product is a binary operation on two vectors in three-dimensional space ($\mathbb{R}^3$) that results in a third vector perpendicular to both of the original vectors. This operation is widely used in mathematics, physics, engineering, and computer graphics. The cross product is particularly useful for calculating areas, volumes, moments of force (torque), angular momentum, and magnetic fields.

## Definition

Given two linearly independent vectors $\mathbf{a} = (a_1, a_2, a_3)$ and $\mathbf{b} = (b_1, b_2, b_3)$ in $\mathbb{R}^3$, their cross product, denoted as $\mathbf{a} \times \mathbf{b}$, can be defined using a formal determinant:

$$
\mathbf{a} \times \mathbf{b} = \begin{vmatrix}\mathbf{i} & \mathbf{j} & \mathbf{k} \\
a_1 & a_2 & a_3 \\
b_1 & b_2 & b_3\end{vmatrix} = (a_2b_3 - a_3b_2)\mathbf{i} - (a_1b_3 - a_3b_1)\mathbf{j} + (a_1b_2 - a_2b_1)\mathbf{k}
$$

This results in a new vector $(a_2b_3 - a_3b_2, a_3b_1 - a_1b_3, a_1b_2 - a_2b_1)$. The resulting vector is perpendicular to both $\mathbf{a}$ and $\mathbf{b}$, and its magnitude is equal to the area of the parallelogram formed by $\mathbf{a}$ and $\mathbf{b}$.

## Example

Let's compute the cross product of the vectors $\mathbf{a} = (1, 2, 3)$ and $\mathbf{b} = (4, 5, 6)$:

$$
\mathbf{a} \times \mathbf{b} = \begin{vmatrix}\mathbf{i} & \mathbf{j} & \mathbf{k} \\
1 & 2 & 3 \\
4 & 5 & 6\end{vmatrix}
$$

$$
= \mathbf{i}(2 \cdot 6 - 3 \cdot 5) - \mathbf{j}(1 \cdot 6 - 3 \cdot 4) + \mathbf{k}(1 \cdot 5 - 2 \cdot 4)
$$

$$
= \mathbf{i}(12 - 15) - \mathbf{j}(6 - 12) + \mathbf{k}(5 - 8)
$$

$$
= -3\mathbf{i} + 6\mathbf{j} - 3\mathbf{k}
$$

The resulting vector is $(-3, 6, -3)$. We can verify its orthogonality by taking the dot product with the original vectors:
-   $\mathbf{a} \cdot (\mathbf{a} \times \mathbf{b}) = (1)(-3) + (2)(6) + (3)(-3) = -3 + 12 - 9 = 0$
-   $\mathbf{b} \cdot (\mathbf{a} \times \mathbf{b}) = (4)(-3) + (5)(6) + (6)(-3) = -12 + 30 - 18 = 0$

Since both dot products are zero, the resulting vector is indeed orthogonal to both $\mathbf{a}$ and $\mathbf{b}$.

## Properties

-   **Anti-commutativity**: The order of multiplication matters and reversing it negates the resulting vector.

$$
\mathbf{a} \times \mathbf{b} = -(\mathbf{b} \times \mathbf{a})
$$

-   **Distributivity**: The cross product distributes over vector addition.

$$
\mathbf{a} \times (\mathbf{b} + \mathbf{c}) = (\mathbf{a} \times \mathbf{b}) + (\mathbf{a} \times \mathbf{c})
$$

-   **Scalar Multiplication**: The cross product is compatible with scalar multiplication.

$$
(c\mathbf{a}) \times \mathbf{b} = \mathbf{a} \times (c\mathbf{b}) = c(\mathbf{a} \times \mathbf{b})
$$

-   **Non-associativity**: The cross product is not associative. In general:

$$
(\mathbf{a} \times \mathbf{b}) \times \mathbf{c} \neq \mathbf{a} \times (\mathbf{b} \times \mathbf{c})
$$

-   **Magnitude**: The magnitude of the cross product is the area of the parallelogram with sides $\mathbf{a}$ and $\mathbf{b}$.

$$
||\mathbf{a} \times \mathbf{b}|| = ||\mathbf{a}|| \cdot ||\mathbf{b}|| \sin\theta
$$

where $\theta$ is the angle between $\mathbf{a}$ and $\mathbf{b}$.

-   **Parallel Vectors**: If two vectors are parallel (i.e., $\theta = 0^\circ$ or $180^\circ$), their cross product is the zero vector.

$$
\mathbf{a} \times \mathbf{b} = \mathbf{0}
$$

## Applications

1.  **Physics**: The cross product is fundamental in describing rotational motion and electromagnetic phenomena.
    -   **Torque**: Torque $\tau$ is the rotational equivalent of force and is defined as $\tau = \mathbf{r} \times \mathbf{F}$, where $\mathbf{r}$ is the position vector and $\mathbf{F}$ is the force.
    -   **Angular Momentum**: Angular momentum $\mathbf{L}$ is defined as $\mathbf{L} = \mathbf{r} \times \mathbf{p}$, where $\mathbf{p}$ is the linear momentum.
    -   **Magnetic Force**: The force $\mathbf{F}$ on a moving charge $q$ in a magnetic field $\mathbf{B}$ is given by the Lorentz force equation, $\mathbf{F} = q(\mathbf{v} \times \mathbf{B})$.
2.  **Computer Graphics**: It is used to calculate surface normals for 3D models. The normal to a polygon is found by taking the cross product of two of its edge vectors, which is essential for lighting and shading calculations.
3.  **Geometry**: The cross product can be used to find the area of a triangle or parallelogram in 3D space and to determine if three points are collinear.

The cross product is a fundamental tool in various fields, enabling calculations of perpendicular vectors and areas/volumes in three-dimensional space.