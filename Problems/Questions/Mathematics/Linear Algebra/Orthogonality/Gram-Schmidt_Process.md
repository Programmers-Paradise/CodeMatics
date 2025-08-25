# The Gram-Schmidt Process

## Introduction and Definition
The Gram-Schmidt Process is a fundamental algorithm in linear algebra for converting a set of linearly independent vectors from an inner product space into an orthonormal set that spans the same subspace. Geometrically, the process works by iteratively taking each vector and subtracting its components that lie in the directions of the previously processed vectors, thus producing a new vector that is orthogonal to all preceding ones. The final step involves normalizing these orthogonal vectors to have a length of one.

Given an initial basis $\{ \mathbf{v}_1, \mathbf{v}_2, \dots, \mathbf{v}_k \}$, the process constructs an orthogonal basis $\{ \mathbf{u}_1, \mathbf{u}_2, \dots, \mathbf{u}_k \}$ and finally an orthonormal basis $\{ \mathbf{e}_1, \mathbf{e}_2, \dots, \mathbf{e}_k \}$.

## The Algorithm
The orthogonal vectors are computed sequentially as follows:
1.  $\mathbf{u}_ 1 = \mathbf{v}_1$
2.  $\mathbf{u}_ 2 = \mathbf{v}_ 2 - \text{proj}_{\mathbf{u}_1}(\mathbf{v}_2)$
3.  $\mathbf{u}_ 3 = \mathbf{v}_ 3 - \text{proj}_ {\mathbf{u}_ 1}(\mathbf{v}_ 3) - \text{proj}_ {\mathbf{u}_ 2}(\mathbf{v}_ 3)$
    ...
    
k.  $\mathbf{u}_ k = \mathbf{v}_ k - \sum_{j=1}^{k-1} \text{proj}_{\mathbf{u}_j}(\mathbf{v}_k)$

Using the formula for vector projection, the general step is:

$$
\mathbf{u}_ k = \mathbf{v}_ k - \sum_{j=1}^{k-1} \frac{\langle \mathbf{v}_k, \mathbf{u}_j \rangle}{\langle \mathbf{u}_j, \mathbf{u}_j \rangle} \mathbf{u}_j
$$

The orthonormal vectors are then found by normalizing each orthogonal vector:

$$
\mathbf{e}_k = \frac{\mathbf{u}_k}{\|\mathbf{u}_k\|}
$$

## Example
Let's apply the Gram-Schmidt Process to the vectors $\mathbf{v}_1 = (1, 1)$ and $\mathbf{v}_2 = (2, 3)$ in $\mathbb{R}^2$.

**Step 1: Compute $\mathbf{u}_1$**

$$
\mathbf{u}_1 = \mathbf{v}_1 = (1, 1)
$$

**Step 2: Compute $\mathbf{u}_2$**
First, find the projection of $\mathbf{v}_2$ onto $\mathbf{u}_1$:

$$
\text{proj}_{\mathbf{u}_1}(\mathbf{v}_2) = \frac{\langle \mathbf{v}_2, \mathbf{u}_1 \rangle}{\langle \mathbf{u}_1, \mathbf{u}_1 \rangle} \mathbf{u}_1 = \frac{(2)(1) + (3)(1)}{1^2 + 1^2} (1, 1) = \frac{5}{2}(1, 1) = \left( \frac{5}{2}, \frac{5}{2} \right)
$$

Now, subtract this projection from $\mathbf{v}_2$ to get $\mathbf{u}_2$:

$$
\mathbf{u}_ 2 = \mathbf{v}_ 2 - \text{proj}_{\mathbf{u}_1}(\mathbf{v}_2) = (2, 3) - \left( \frac{5}{2}, \frac{5}{2} \right) = \left( -\frac{1}{2}, \frac{1}{2} \right)
$$

The resulting orthogonal basis is $\{ (1, 1), (-\frac{1}{2}, \frac{1}{2}) \}$.

**Step 3: Normalize to get the orthonormal basis**

$$
\mathbf{e}_1 = \frac{\mathbf{u}_1}{\|\mathbf{u}_1\|} = \frac{(1, 1)}{\sqrt{1^2 + 1^2}} = \frac{(1, 1)}{\sqrt{2}} = \left( \frac{1}{\sqrt{2}}, \frac{1}{\sqrt{2}} \right)
$$

$$
\mathbf{e}_2 = \frac{\mathbf{u}_2}{\|\mathbf{u}_2\|} = \frac{(-\frac{1}{2}, \frac{1}{2})}{\sqrt{(-\frac{1}{2})^2 + (\frac{1}{2})^2}} = \frac{(-\frac{1}{2}, \frac{1}{2})}{\sqrt{1/2}} = \left( -\frac{1}{\sqrt{2}}, \frac{1}{\sqrt{2}} \right)
$$

The orthonormal basis is $\{ \mathbf{e}_1, \mathbf{e}_2 \}$.

## Properties
- **Orthogonality:** The vectors in the resulting set $\{ \mathbf{u}_1, \dots, \mathbf{u}_k \}$ are mutually orthogonal.
- **Span Preservation:** For any $i$ from $1$ to $k$, the span of the first $i$ orthogonal vectors is the same as the span of the first $i$ original vectors: $\text{span}\{\mathbf{u}_1, \dots, \mathbf{u}_i\} = \text{span}\{\mathbf{v}_1, \dots, \mathbf{v}_i\}$.
- **Linear Independence:** Since the original set was linearly independent, the process will not produce a zero vector, and the resulting orthogonal set is also linearly independent.

## Numerical Stability
The algorithm described above is known as **Classical Gram-Schmidt** and is known to be numerically unstable in practice. Small floating-point errors can cause the resulting vectors to lose their orthogonality. For computational applications, a variant called the **Modified Gram-Schmidt (MGS)** process is typically used, as it has better numerical properties and is less sensitive to rounding errors.

## Applications
- **QR Factorization:** The Gram-Schmidt Process is the theoretical basis for the QR decomposition of a matrix $A$. The matrix $A$ is factored into the product of an orthogonal matrix $Q$ (whose columns are the orthonormal vectors $\mathbf{e}_k$) and an upper triangular matrix $R$.
- **Solving Least-Squares Problems:** The QR factorization derived from Gram-Schmidt provides a numerically stable method for solving overdetermined systems of linear equations, which is fundamental in regression analysis.
- **Function Approximation:** In functional analysis, a version of the Gram-Schmidt process is used to generate sets of orthogonal polynomials (e.g., Legendre polynomials), which are essential for approximating functions.

This process is a cornerstone in linear algebra with wide-ranging applications in various scientific and engineering disciplines.