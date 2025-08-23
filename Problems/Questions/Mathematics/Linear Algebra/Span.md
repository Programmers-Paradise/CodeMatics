# Span 

## Introduction

The concept of span is fundamental in linear algebra, providing insight into the structure of vector spaces and their subspaces.

## Definition

In a vector space $V$ over a field $F$, the **span** of a subset $S = \{v_1, v_2, \ldots, v_k\}$ is defined as the set of all possible linear combinations of these vectors. Formally,

$$
\text{Span}(S) = \left\( \sum_{i=1}^{k} a_i v_i | a_i \in F \right\)
$$


This means that any vector in $\text{Span}(S)$ can be expressed as:

$$
a_1 v_1 + a_2 v_2 + \ldots + a_k v_k
$$

where each $a_i$ is a scalar from the field $F$. If $S$ is the empty set, then $\text{Span}(S) = \{0\}$, as the only linear combination of no vectors is the zero vector.

The span of any set of vectors in $V$ forms a subspace of $V$. This is because the set of all linear combinations is closed under vector addition and scalar multiplication, and it contains the zero vector (when all scalars are zero).

## Example

Consider the vectors $v_1 = (1, 0)$ and $v_2 = (0, 1)$ in $\mathbb{R}^2$. The span of these vectors is:

$$
\text{Span}\{v_1, v_2\} = \left( a(1, 0) + b(0, 1) \mid a, b \in \mathbb{R} \right) = \{(a, b) \mid a, b \in \mathbb{R}\}
$$

This spans the entire $\mathbb{R}^2$ plane.

As another example, consider the vectors $v_1 = (1, 0, 0)$ and $v_2 = (0, 1, 0)$ in $\mathbb{R}^3$. Their span is:

$$
\text{Span}\{v_1, v_2\} = \left( a(1, 0, 0) + b(0, 1, 0) \mid a, b \in \mathbb{R} \right) = \{(a, b, 0) \mid a, b \in \mathbb{R}\}
$$

This is the $xy$-plane in three-dimensional space.

## Properties

-   **Spanning Set Reduction**: If a vector in a set $S$ is a linear combination of other vectors in $S$ (i.e., the set is linearly dependent), it can be removed from the set without changing the span.
-   **Span of a Single Vector**: The span of a single non-zero vector $v$ is the set of all scalar multiples of $v$, which geometrically represents the line passing through the origin in the direction of $v$.
-   **Span and Linear Independence**: A set of vectors is a basis for a vector space if it is linearly independent and its span is the entire space. The number of vectors in the basis is the dimension of the space.
-   **Subspace Property**: The span of any subset of a vector space $V$ is always a subspace of $V$. It is the smallest subspace of $V$ that contains the original set of vectors.

## Applications

1.  **Physics**: The span of a set of basis vectors (like $\hat{i}, \hat{j}, \hat{k}$) defines the entire physical space in which quantities like forces, velocities, and fields can be described.
2.  **Machine Learning**: Feature spaces are defined by the span of feature vectors. Linear models, like linear regression, find the best linear combination of these features to make predictions.
3.  **Engineering**: In control systems, the span of controllable state vectors determines the reachability of the system. In structural analysis, it helps define the possible modes of deformation.
4.  **Computer Graphics**: The span of basis vectors defines the coordinate systems used for rendering 3D objects. Transformations like rotation and scaling operate within these spanned spaces.

By understanding the span, one gains insight into how vectors interact to form spaces, which is fundamental across various scientific and engineering disciplines.
