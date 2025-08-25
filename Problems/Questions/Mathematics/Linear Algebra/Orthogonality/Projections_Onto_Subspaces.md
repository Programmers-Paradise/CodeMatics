# Projections Onto Subspaces

## Introduction
Projections onto subspaces are fundamental tools in linear algebra that allow us to find the closest approximation of a vector within a given subspace. This concept is pivotal in various fields such as data science, statistics, physics, and engineering. In machine learning, for instance, projections are central to techniques like Principal Component Analysis (PCA), where they help reduce dimensionality while retaining essential information. They also form the basis of least squares methods, which are used extensively for fitting models to data.

## Definition and Formulas
Given a vector $\mathbf{v}$ and a subspace $U$ in an inner product space, the **orthogonal projection** of $\mathbf{v}$ onto $U$, denoted as $\text{proj}_U(\mathbf{v})$, is the unique vector in $U$ that is closest to $\mathbf{v}$. This "best approximation" is found by decomposing $\mathbf{v}$ into two orthogonal parts: one lying in $U$ and one lying in its orthogonal complement $U^\perp$.

#### 1. Projection onto a Line (1D Subspace)
If the subspace $U$ is a line spanned by a single non-zero vector $\mathbf{u}$, the projection of $\mathbf{v}$ onto $U$ is given by the simple formula:

$$
\text{proj}_{\mathbf{u}}(\mathbf{v}) = \frac{\mathbf{v} \cdot \mathbf{u}}{\mathbf{u} \cdot \mathbf{u}} \mathbf{u}
$$

#### 2. Projection onto a General Subspace
For a general subspace $U$, we can compute the projection using a **projection matrix** $P$. If the columns of a matrix $A$ form a **basis** for the subspace $U$ (meaning they are linearly independent), the projection matrix is:

$$
P = A(A^T A)^{-1} A^T
$$

The projection of any vector $\mathbf{v}$ onto $U$ is then simply $\text{proj}_U(\mathbf{v}) = P\mathbf{v}$.

#### 3. Projection using an Orthonormal Basis
The formula simplifies dramatically if we have an **orthonormal basis** for the subspace $U$. If the columns of a matrix $Q$ form an orthonormal basis for $U$, then $Q^T Q = I$ (the identity matrix), and the projection matrix becomes:

$$P = QQ^T$$

## Example
Consider projecting the vector $`\mathbf{v} = \begin{bmatrix} 2 \\ 3 \end{bmatrix}`$ onto the line $L$ spanned by $`\mathbf{u} = \begin{bmatrix} 4 \\ 0 \end{bmatrix}`$.

**Method 1: Using the 1D Formula**

$$
\text{proj}_{L}(\mathbf{v}) = \frac{\mathbf{v} \cdot \mathbf{u}}{\mathbf{u} \cdot \mathbf{u}} \mathbf{u} = \frac{(2)(4) + (3)(0)}{(4)(4) + (0)(0)} \begin{bmatrix} 4 \\
0 \end{bmatrix} = \frac{8}{16} \begin{bmatrix} 4 \\
0 \end{bmatrix} = \begin{bmatrix} 2 \\
0 \end{bmatrix}
$$

**Method 2: Using the Projection Matrix**
Let the basis for the line be the vector $\mathbf{u}$. We form the matrix $A$ whose column is $\mathbf{u}$:

$$A = \begin{bmatrix} 4 \\
0 \end{bmatrix}$$

Now, we compute the components of the projection matrix $P$:
- $A^T A = \begin{bmatrix} 4 & 0 \end{bmatrix} \begin{bmatrix} 4 \\ 0 \end{bmatrix} = [16]$


- $(A^T A)^{-1} = [1/16]$


- $`P = A(A^T A)^{-1} A^T = \begin{bmatrix} 4 \\ 0 \end{bmatrix} [1/16] \begin{bmatrix} 4 & 0 \end{bmatrix} = \frac{1}{16} \begin{bmatrix} 16 & 0 \\ 0 & 0 \end{bmatrix} = \begin{bmatrix} 1 & 0 \\ 0 & 0 \end{bmatrix}`$

Apply the projection matrix $P$ to the vector $\mathbf{v}$:

$$
\text{proj}_{L}(\mathbf{v}) = P\mathbf{v} = \begin{bmatrix} 1 & 0 \\
0 & 0 \end{bmatrix} \begin{bmatrix} 2 \\
3 \end{bmatrix} = \begin{bmatrix} 2 \\
0 \end{bmatrix}
$$

Both methods yield the same result.

## Properties
1.  **Idempotence**: Projecting a vector that is already in the subspace does not change it. Applying the projection matrix twice is the same as applying it once: $P^2 = P$.

2.  **Symmetry**: An orthogonal projection matrix is always symmetric: $P^T = P$.

3.  **Linearity**: Projection is a linear transformation. For any vectors $\mathbf{v}_1, \mathbf{v}_2$ and scalars $a, b$:
    $\text{proj}_U(a \mathbf{v}_1 + b \mathbf{v}_2) = a\,\text{proj}_U(\mathbf{v}_1) + b\,\text{proj}_U(\mathbf{v}_2)$.

4.  **Orthogonal Decomposition**: Any vector $\mathbf{v}$ can be uniquely written as the sum of its projection onto $U$ and its projection onto the orthogonal complement $U^\perp$. The **projection error vector**, $\mathbf{v} - P\mathbf{v}$, is orthogonal to the subspace $U$ and lies in $U^\perp$.

## The Connection to Least Squares
Projections are the geometric foundation for solving the **least-squares problem**, which aims to find the "best" solution $\hat{\mathbf{x}}$ to an inconsistent system of equations $A\mathbf{x} = \mathbf{b}$.
- The system is inconsistent because $\mathbf{b}$ is not in the column space of $A$, $\text{Col}(A)$.
- The least-squares method finds the vector in $\text{Col}(A)$ that is closest to $\mathbf{b}$. This vector is precisely the orthogonal projection of $\mathbf{b}$ onto $\text{Col}(A)$.
- Therefore, we solve for $\hat{\mathbf{x}}$ such that $A\hat{\mathbf{x}} = \text{proj}_{\text{Col}(A)}(\mathbf{b})$. This leads to the famous **normal equations**: $A^T A \hat{\mathbf{x}} = A^T \mathbf{b}$.

## Applications
1.  **Least-Squares Regression**: In statistics and data science, projections are used to find the best-fit line or surface for a set of data points, minimizing the sum of squared errors.
2.  **Principal Component Analysis (PCA)**: In machine learning, data is projected onto a lower-dimensional subspace that captures the largest variance in the data, aiding in visualization and model efficiency.
3.  **Computer Graphics**: Projections are used to render 3D scenes onto a 2D screen, create realistic shadows, and perform geometric transformations.
4.  **Quantum Mechanics**: Quantum states are vectors in Hilbert spaces. The measurement of an observable is modeled as a projection of the state vector onto an eigenspace corresponding to the measurement outcome.
5.  **Signal Processing**: Projections enable signal compression and denoising by decomposing signals into orthogonal components and discarding those associated with noise or irrelevant information.