# Subspaces

## Introduction

Subspaces are fundamental constructs within linear algebra that represent subsets of a vector space which themselves satisfy the axioms of a vector space. They play a crucial role in various fields such as mathematics, physics, engineering, and computer science by providing a framework to analyze and simplify complex problems.

## Definition

A subset $W$ of a vector space $V$ over a field $\mathbb{F}$ is called a **subspace** if it satisfies the following three conditions:

1.  **Zero Vector**: The zero vector $\mathbf{0}$ is in $W$.
2.  **Closure under Addition**: For any vectors $\mathbf{u}, \mathbf{v} \in W$, their sum $\mathbf{u} + \mathbf{v}$ is also in $W$.
3.  **Closure under Scalar Multiplication**: For any scalar $a \in \mathbb{F}$ and vector $\mathbf{u} \in W$, the product $a\mathbf{u}$ is also in $W$.

These three conditions ensure that a subspace is a self-contained vector space.

## Example

Consider the vector space $\mathbb{R}^3$. The set of all vectors $(x, y, z)$ satisfying the equation of a plane passing through the origin, $ax + by + cz = 0$, forms a subspace.

**Problem**: Show that the set $W = \{ (x, y, z) \in \mathbb{R}^3 \mid x + 2y + 3z = 0 \}$ is a subspace.

**Solution**:
1.  **Zero Vector**: The vector $(0, 0, 0)$ satisfies the condition, since $0 + 2(0) + 3(0) = 0$. Thus, $\mathbf{0} \in W$.
2.  **Closure under Addition**: Let $\mathbf{u} = (u_1, u_2, u_3)$ and $\mathbf{v} = (v_1, v_2, v_3)$ be two vectors in $W$. This means $u_1 + 2u_2 + 3u_3 = 0$ and $v_1 + 2v_2 + 3v_3 = 0$. Their sum is $\mathbf{u} + \mathbf{v} = (u_1 + v_1, u_2 + v_2, u_3 + v_3)$. Checking the condition:

$$
(u_1 + v_1) + 2(u_2 + v_2) + 3(u_3 + v_3) = (u_1 + 2u_2 + 3u_3) + (v_1 + 2v_2 + 3v_3) = 0 + 0 = 0
$$

Thus, $\mathbf{u} + \mathbf{v} \in W$.

3.  **Closure under Scalar Multiplication**: Let $a \in \mathbb{R}$ and $\mathbf{u} = (u_1, u_2, u_3) \in W$. This means $u_1 + 2u_2 + 3u_3 = 0$. The scalar multiple is $a\mathbf{u} = (au_1, au_2, au_3)$. Checking the condition:

$$
a u_1 + 2(a u_2) + 3(a u_3) = a(u_1 + 2u_2 + 3u_3) = a(0) = 0
$$

Thus, $a\mathbf{u} \in W$.

Since all three conditions are satisfied, $W$ is a subspace of $\mathbb{R}^3$.

## Properties

-   **Non-emptiness**: Every subspace must contain the zero vector and therefore cannot be empty.
-   **Closure under Linear Combinations**: Any linear combination of vectors in a subspace remains within that subspace.
-   **Intersection of Subspaces**: The intersection of two or more subspaces of a vector space is also a subspace.
-   **Union of Subspaces**: The union of two subspaces is a subspace only if one of the subspaces contains the other.
-   **Dimensionality**: The dimension of any subspace of a vector space $V$ is less than or equal to the dimension of $V$.

## Applications

1.  **Principal Component Analysis (PCA)**: PCA utilizes subspaces to reduce data dimensions by projecting data onto a lower-dimensional subspace that captures the most variance.
2.  **Control Theory**: State spaces in control systems are often modeled as subspaces within higher-dimensional Euclidean spaces, defining the set of all possible system states.
3.  **Quantum Mechanics**: Hilbert spaces, which form the mathematical foundation of quantum mechanics, utilize subspaces to represent the possible states of a quantum system.
4.  **Computer Graphics**: Transformations and projections in computer graphics can be represented using subspaces for efficient computation and visualization of 3D objects on a 2D screen.

Subspaces provide a powerful framework for analyzing linear transformations and solving systems of equations, making them indispensable across various scientific and engineering disciplines.