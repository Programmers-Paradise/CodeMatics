# Singular Value Decomposition (SVD)

## Introduction

Singular Value Decomposition (SVD) is a fundamental matrix factorization technique in linear algebra with wide-ranging applications in data science, machine learning, physics, engineering, and computer science. It decomposes a matrix into simpler components, enabling efficient computation of various properties such as rank, inverse, pseudoinverse, and solving linear systems. SVD is particularly valuable for dimensionality reduction, noise reduction, and feature extraction.

## Definition

Given an m×n real or complex matrix A, the Singular Value Decomposition expresses A as:

$$
A = U \Sigma V^T 
$$

where:
- $U$ is an m×m orthogonal matrix whose columns are the left singular vectors of A.
- $\Sigma$ is an m×n diagonal matrix with non-negative real numbers on the diagonal, known as singular values, typically denoted by σ.
- $V$ is an n×n orthogonal matrix whose columns are the right singular vectors of A.

The decomposition can be written explicitly as:

$$ 
A = \sum_{i=1}^{\min(m,n)} \sigma_i u_i v_i^T
$$

where each pair $(σ_i, u_i, v_i)$ corresponds to a singular value and its associated left/right singular vectors.

## Example

Consider the matrix:

$$ 
A = \begin{bmatrix} 1 & 2 \\ 3 & 4 \end{bmatrix} 
$$

Compute SVD step by step:
1. Compute $A^T A$:

$$
A^T A = \begin{bmatrix} 10 & 12 \\ 12 & 16 \end{bmatrix}
$$   

3. Find eigenvalues (σ²) and eigenvectors of \( A^T A \):
   - Eigenvalues: λ₁ ≈ 32.98, λ₂ ≈ 1.02
   - Eigenvectors corresponding to these eigenvalues give columns of V.

4. Compute U:
   - Use the original matrix A and right singular vectors from step 2.
   - Normalize the resulting vectors to form orthonormal columns in U.

5. Construct Σ with singular values $\sqrt(λ)$ on diagonal.

Resulting decomposition:

$$ 
U = \begin{bmatrix} u_1 & u_2 \end{bmatrix}, \quad \Sigma = \begin{bmatrix} 5.60 & 0 \\ 0 & 0.23 \end{bmatrix}, \quad V^T = \begin{bmatrix} v_1^T \\ v_2^T \end{bmatrix} 
$$

## Properties

- **Uniqueness**: SVD is unique up to signs of singular vectors.
- **Orthogonality**: U and V are orthogonal matrices, i.e., $U^T U = I$, $V^T V = I$.
- **Singular Values**: The diagonal entries of $Σ (σ_i)$ are non-negative and ordered in descending order.
- **Rank**: Rank(A) equals the number of non-zero singular values.
- **Invariance under Transpose**: SVD of $A^T$ is $V \Sigma U^T$.
- **Norm Preservation**: Frobenius norm of A equals that of Σ.

## Applications

Singular Value Decomposition has diverse applications:
1. **Image Compression**: Reduces matrix size by retaining top singular values.
2. **Principal Component Analysis (PCA)**: Dimensionality reduction in statistics and machine learning.
3. **Recommendation Systems**: Matrix factorization for collaborative filtering.
4. **Linear System Solving**: Efficiently finds least squares solutions.
5. **Matrix Approximation**: Low-rank approximation for data compression and denoising.

SVD is a versatile tool with significant impact across multiple disciplines, enabling efficient computation and analysis of complex datasets.