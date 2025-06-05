
## Eigenvalues and Eigenvectors

In linear algebra, eigenvalues and eigenvectors are important concepts associated with square matrices. 


### Eigenvectors
An eigenvector of a matrix is a non-zero vector that remains in the same direction (up to a scalar multiple) when multiplied by the matrix. It is denoted by $v$.

The eigenvalue-eigenvector equation can be represented as:

$$
A \cdot v = \lambda \cdot v
$$

where:
- $A$ is the matrix
- $v$ is the eigenvector
- $λ$ is the eigenvalue

### Finding Eigenvalues and Eigenvectors
To find the eigenvalues and eigenvectors of a matrix, we solve the characteristic equation:

$$|A - \lambda \cdot I| = 0
$$

where:
- $$|A - λ · I|$$ is the determinant of the matrix $$A - λ · I$$
- $$I$$ is the identity matrix

Once we find the eigenvalues, we can substitute them back into the equation to find the corresponding eigenvectors.

Eigenvalues and eigenvectors have various applications in fields such as physics, engineering, and computer science.

## Problem Statement

You are given a square matrix A. Your task is to find the eigenvalues and eigenvectors of matrix A.
