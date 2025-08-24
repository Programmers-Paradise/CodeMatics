# Geometry of Angles in Linear Algebra

## Introduction

The concept of angles between vectors is fundamental in linear algebra, providing insights into the geometric relationships within vector spaces. This understanding extends beyond three-dimensional space, playing a crucial role in quantifying relationships between vectors, which is essential for tasks like dimensionality reduction (e.g., PCA), projection operations, and determining orthogonality—key concepts in fields such as physics, machine learning, and computer graphics.

## Definition

The angle $\theta$ between two non-zero vectors $\mathbf{u}$ and $\mathbf{v}$ in an inner product space can be determined using the dot product formula:

$$\cos\theta = \frac{\mathbf{u} \cdot \mathbf{v}}{\|\mathbf{u}\| \, \|\mathbf{v}\|}$$

where:
-   $\mathbf{u} \cdot \mathbf{v}$ is the dot product of vectors $\mathbf{u}$ and $\mathbf{v}$.
-   $\|\mathbf{u}\|$ and $\|\mathbf{v}\|$ are the magnitudes (Euclidean norms) of $\mathbf{u}$ and $\mathbf{v}$, respectively.

The angle $\theta$ can then be found by taking the arccosine:

$$\theta = \arccos\left( \frac{\mathbf{u} \cdot \mathbf{v}}{\|\mathbf{u}\| \, \|\mathbf{v}\|} \right)$$

## Example

**Problem:** Calculate the angle between the vectors $\mathbf{u} = [3, 4]$ and $\mathbf{v} = [5, 0]$ in $\mathbb{R}^2$.

**Solution:**
1.  **Compute the dot product:**
    $$\mathbf{u} \cdot \mathbf{v} = (3)(5) + (4)(0) = 15$$
2.  **Calculate magnitudes:**
    $$\|\mathbf{u}\| = \sqrt{3^2 + 4^2} = \sqrt{9 + 16} = \sqrt{25} = 5$$   $$\|\mathbf{v}\| = \sqrt{5^2 + 0^2} = \sqrt{25} = 5$$
3.  **Compute the cosine of the angle:**
    $$\cos\theta = \frac{15}{5 \times 5} = \frac{15}{25} = 0.6$$
4.  **Find $\theta$ using arccosine:**
    $$\theta = \arccos(0.6) \approx 53.13^\circ$$

## Properties

-   **Angle Range**: The angle $\theta$ between two vectors is always within the range $[0, \pi]$ radians or $[0^\circ, 180^\circ]$. An angle of $0^\circ$ means the vectors are in the same direction, while $180^\circ$ means they are in opposite directions.
-   **Orthogonality**: Two non-zero vectors are orthogonal (perpendicular) if the angle between them is $90^\circ$ ($\pi/2$ radians). This occurs if and only if their dot product is zero.
    $$\mathbf{u} \perp \mathbf{v} \iff \mathbf{u} \cdot \mathbf{v} = 0$$
-   **Parallel Vectors**: Two vectors are parallel if the angle between them is $0^\circ$ or $180^\circ$. This means one vector is a scalar multiple of the other ($\mathbf{u} = k\mathbf{v}$).
-   **Symmetry**: The angle from vector $\mathbf{u}$ to $\mathbf{v}$ is the same as the angle from $\mathbf{v}$ to $\mathbf{u}$, because the dot product is commutative.

## Applications

1.  **Physics**: In mechanics, the work done by a constant force is calculated using the angle between the force and displacement vectors. Angles are also crucial for analyzing forces, velocities, and fields.
2.  **Machine Learning**: In natural language processing, the cosine similarity (which is directly related to the angle) is used to measure how similar two documents are based on their vector representations.
3.  **Computer Graphics**: Rotation matrices rely on angle calculations to transform and orient objects and cameras in 2D or 3D spaces.
4.  **Statistics**: The correlation between two centered data vectors is directly related to the cosine of the angle between them, providing a geometric interpretation of how variables are related.

