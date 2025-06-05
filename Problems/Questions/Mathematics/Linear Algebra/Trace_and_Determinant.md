## Trace of a Matrix

The trace of a matrix is a fundamental concept in linear algebra. It is defined as the sum of the diagonal elements of a square matrix. The trace provides important properties and insights into the matrix.

### Definition

For a square matrix $A$ of size $n x n$, the trace is denoted by $tr(A)$ and is calculated as:

$$
\text{tr}(A) = \sum_{i=1}^{n} a_{ii}
$$

where:
- $a_{ii}$ are the diagonal elements of the matrix $A$

### Example

Consider the matrix:

$$
A = \begin{pmatrix}
1 & 2 & 3 \\
0 & 4 & 5 \\
0 & 0 & 6
\end{pmatrix}
$$

The trace of matrix $A$ is calculated as:

$$
\text{tr}(A) = 1 + 4 + 6 = 11
$$

### Properties

- **Linearity**: The trace operation is linear, meaning for matrices $A$ and $B$ and scalars $\alpha$ and $\beta$:

  $$\text{tr}(\alpha A + \beta B) = \alpha \text{tr}(A) + \beta \text{tr}(B)
  $$

- **Similarity Invariance**: The trace of a matrix is invariant under similarity transformations. If $B = P^{-1}AP$ , then:

  $$\text{tr}(B) = \text{tr}(A)
  $$

- **Trace of Product**: For matrices $A$ and $B$ of compatible dimensions:

  $$\text{tr}(AB) = \text{tr}(BA)
  $$

### Applications

The trace of a matrix has applications in various fields including:
- **Quantum Mechanics**: Trace is used in calculating expectation values.
- **Statistics**: Trace helps in understanding variance-covariance matrices.
- **Graph Theory**: Trace is used in spectral graph theory to analyze properties of graphs.

## Problem Statement

Given a square matrix $A$, your task is to compute the trace of the matrix by summing its diagonal elements.
