# Dot Product and Projections in Linear Algebra

## Introduction

The dot product and projections are fundamental concepts in linear algebra with wide-ranging applications in mathematics, physics, engineering, and machine learning. The dot product provides a scalar result that encapsulates the geometric relationship between two vectors, while projections allow us to decompose a vector into components along specific directions. These tools are essential for understanding vector operations, solving systems of equations, and analyzing data in high-dimensional spaces.

## Definition

### Dot Product

The dot product (also known as the scalar or inner product) of two vectors $\mathbf{u} = [u_1, u_2, ..., u_n]$ and $\mathbf{v} = [v_1, v_2, ..., v_n]$ is defined as the sum of the products of their corresponding components:

$$
\mathbf{u} \cdot \mathbf{v} = \sum_{i=1}^{n} u_i v_i
$$

Geometrically, the dot product is related to the angle $\theta$ between the two vectors:

$$
\mathbf{u} \cdot \mathbf{v} = \|\mathbf{u}\| \|\mathbf{v}\| \cos(\theta)
$$

This operation results in a scalar value that is crucial for measuring angles and determining orthogonality.

### Vector Projection

The vector projection of a vector $\mathbf{u}$ onto a non-zero vector $\mathbf{v}$ is the orthogonal projection of $\mathbf{u}$ onto the line spanned by $\mathbf{v}$. It is given by the formula:

$$
\text{proj}_{\mathbf{v}} \mathbf{u} = \left( \frac{\mathbf{u} \cdot \mathbf{v}}{\|\mathbf{v}\|^2} \right) \mathbf{v}
$$

This represents the component of $\mathbf{u}$ that lies in the direction of $\mathbf{v}$, which is useful for decomposing vectors and solving various geometric and optimization problems.

## Example

**Problem:** Let $\mathbf{u} = [3, 2]$ and $\mathbf{v} = [1, 4]$. Compute their dot product and the projection of $\mathbf{u}$ onto $\mathbf{v}$.

**Solution:**

1.  **Dot Product Calculation:**

$$
\mathbf{u} \cdot \mathbf{v} = (3)(1) + (2)(4) = 3 + 8 = 11
$$

3.  **Vector Projection Calculation:**
    -   First, compute the squared magnitude of $\mathbf{v}$:

$$
\|\mathbf{v}\|^2 = 1^2 + 4^2 = 1 + 16 = 17
$$
    -   Next, calculate the scalar multiple for the projection:
$$
\frac{\mathbf{u} \cdot \mathbf{v}}{\|\mathbf{v}\|^2} = \frac{11}{17}
$$
    -   Finally, multiply this scalar by the vector $\mathbf{v}$:
$$
\text{proj}_{\mathbf{v}} \mathbf{u} = \frac{11}{17} [1, 4] = \left[ \frac{11}{17}, \frac{44}{17} \right]
$$

## Properties

-   **Commutativity of Dot Product**: The order of vectors does not affect the result of the dot product.

$$
\mathbf{u} \cdot \mathbf{v} = \mathbf{v} \cdot \mathbf{u}
$$

-   **Distributive Property**: The dot product distributes over vector addition.

$$
\mathbf{u} \cdot (\mathbf{v} + \mathbf{w}) = \mathbf{u} \cdot \mathbf{v} + \mathbf{u} \cdot \mathbf{w}
$$

-   **Associativity with Scalars**: Scalar multiplication can be grouped in any way.

$$
(c\mathbf{u}) \cdot \mathbf{v} = c(\mathbf{u} \cdot \mathbf{v}) = \mathbf{u} \cdot (c\mathbf{v})
$$

-   **Orthogonality Condition**: Two non-zero vectors $\mathbf{u}$ and $\mathbf{v}$ are orthogonal (perpendicular) if and only if their dot product is zero.

$$
\mathbf{u} \cdot \mathbf{v} = 0
$$

-   **Projection as a Linear Transformation**: For a fixed vector $\mathbf{v}$, the projection operation that maps any vector $\mathbf{u}$ to $\text{proj}_{\mathbf{v}} \mathbf{u}$ is a linear transformation.

## Applications

1.  **Physics**: Calculating the work done by a force, where work is the dot product of the force vector and the displacement vector.
2.  **Machine Learning**: Used in algorithms like Principal Component Analysis (PCA) and Support Vector Machines (SVMs). Projections are key to dimensionality reduction, and dot products measure similarity between feature vectors.
3.  **Computer Graphics**: Essential for calculating lighting effects (e.g., determining how much light hits a surface based on the angle of incidence) and for camera projections.
4.  **Engineering**: In structural analysis, dot products and projections are used to decompose forces into components acting along different structural members.
5.  **Statistics**: The correlation coefficient between two centered data vectors is directly related to the cosine of the angle between them, which is calculated using the dot product.

This structured approach covers the essential aspects of dot products and projections, providing a solid foundation for their application in various fields.