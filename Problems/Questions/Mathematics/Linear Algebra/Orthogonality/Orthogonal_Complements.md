# Orthogonal Complements

Orthogonal complements are a fundamental concept in linear algebra, playing a crucial role in the geometric understanding of vector spaces, projections, and the solution of linear systems. They provide a precise way to describe all vectors that are perpendicular to a given set of vectors or a subspace, a concept essential in various applications across mathematics, science, and engineering.

---

## Definition

The **orthogonal complement** of a subset $A$ within an inner product space $V$, denoted $A^\perp$, consists of all vectors in $V$ that are orthogonal (perpendicular) to every vector in $A$. Formally:

$$
A^\perp = \{ \mathbf{x} \in V \mid \langle \mathbf{x}, \mathbf{a} \rangle = 0 \text{ for all } \mathbf{a} \in A \}
$$

where $\langle \cdot, \cdot \rangle$ represents the inner product of the space. For the space $\mathbb{R}^n$, this is the standard dot product.

---

## Examples

**Example in $\mathbb{R}^2$:**
Let $W$ be the line in $\mathbb{R}^2$ spanned by the vector $`\mathbf{w} = \begin{bmatrix}1 \\ 2\end{bmatrix}`$. To find its orthogonal complement $W^\perp$, we seek all vectors $`\mathbf{x} = \begin{bmatrix}x_1 \\ x_2\end{bmatrix}`$ such that:

$$
\mathbf{x} \cdot \mathbf{w} = 0 \implies x_1(1) + x_2(2) = 0 \implies x_1 = -2x_2
$$

Any vector in $W^\perp$ has the form $`\begin{bmatrix}-2x_2 \\ x_2\end{bmatrix} = x_2\begin{bmatrix}-2 \\ 1\end{bmatrix}`$. Thus, $W^\perp$ is the line spanned by the vector $`\begin{bmatrix}-2 \\ 1\end{bmatrix}`$.

**Example in $\mathbb{R}^3$:**
Let $U$ be the plane in $\mathbb{R}^3$ defined by the equation $x - 2y + 3z = 0$. This equation can be written as a dot product:

$$
\begin{bmatrix}1 \\ -2 \\ 3\end{bmatrix} \cdot \begin{bmatrix}x \\ y \\ z\end{bmatrix} = 0
$$

This shows that the plane $U$ consists of all vectors orthogonal to the vector $`\mathbf{n} = \begin{bmatrix}1 \\ -2 \\ 3\end{bmatrix}`$. Therefore, the plane $U$ is the orthogonal complement of the line spanned by its normal vector $\mathbf{n}$. We can write $U = (\text{span}\{\mathbf{n}\})^\perp$.

---

## Key Properties and Theorems

### Property 1: The Orthogonal Complement is Always a Subspace
For any subset $A \subseteq V$ (even if $A$ is not a subspace), its orthogonal complement $A^\perp$ is always a subspace of $V$.

**Proof:**
- **Zero Vector:** For any $\mathbf{a} \in A$, $\langle \mathbf{0}, \mathbf{a} \rangle = 0$. Thus, $\mathbf{0} \in A^\perp$.
- **Closure:** If $\mathbf{x}, \mathbf{y} \in A^\perp$ and $c$ is a scalar, then for any $\mathbf{a} \in A$:
  - $\langle \mathbf{x} + \mathbf{y}, \mathbf{a} \rangle = \langle \mathbf{x}, \mathbf{a} \rangle + \langle \mathbf{y}, \mathbf{a} \rangle = 0 + 0 = 0$
  - $\langle c\mathbf{x}, \mathbf{a} \rangle = c\langle \mathbf{x}, \mathbf{a} \rangle = c \cdot 0 = 0$
Thus, $A^\perp$ is closed under addition and scalar multiplication, making it a subspace.

### Property 2: The Double Complement
If $W$ is a subspace of a finite-dimensional inner product space $V$, then the orthogonal complement of the orthogonal complement is the original subspace:

$$W^{\perp \perp} = W$$

### Property 3: The Orthogonal Decomposition Theorem
If $W$ is a subspace of a finite-dimensional inner product space $V$, then $V$ can be expressed as the direct sum of $W$ and its orthogonal complement $W^\perp$:

$$
V = W \oplus W^\perp
$$

This means that every vector $\mathbf{v} \in V$ can be uniquely written as $\mathbf{v} = \mathbf{w} + \mathbf{w}^\perp$, where $\mathbf{w} \in W$ and $\mathbf{w}^\perp \in W^\perp$. A direct consequence is that their dimensions sum to the total dimension:

$$\dim(W) + \dim(W^\perp) = \dim(V)$$

---

## The Four Fundamental Subspaces

For any matrix $A \in \mathbb{R}^{m \times n}$, its four fundamental subspaces are related through orthogonal complements in a structure known as the **Fundamental Theorem of Linear Algebra**:

1.  **The row space and the null space are orthogonal complements in $\mathbb{R}^n$:**
    $$(\text{Row } A)^\perp = \text{Null } A$$
2.  **The column space and the left null space are orthogonal complements in $\mathbb{R}^m$:**
    $$(\text{Col } A)^\perp = \text{Null } A^T$$

---

## Applications

### 1. Least-Squares Solutions
In statistics and machine learning, the method of least squares finds the best-fit solution to an overdetermined system $A\mathbf{x} = \mathbf{b}$. The solution involves projecting the vector $\mathbf{b}$ onto the column space of $A$. The error vector of this projection is an element of the orthogonal complement of the column space, $(\text{Col } A)^\perp$.

### 2. Signal Processing
Signals can be decomposed into a component within a chosen subspace (e.g., low-frequency signals) and a component in its orthogonal complement (e.g., high-frequency noise). This allows for effective noise filtering and signal separation.

### 3. Coding Theory
In the theory of error-correcting codes, a linear code can be represented as a subspace $C$. Its orthogonal complement, $C^\perp$, is known as the **dual code**, which is used to check for errors in received messages.