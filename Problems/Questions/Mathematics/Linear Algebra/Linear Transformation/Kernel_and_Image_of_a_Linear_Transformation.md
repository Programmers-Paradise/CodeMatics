# Kernel and Image of a Linear Transformation 

The kernel and image of a linear transformation are fundamental concepts in linear algebra that provide deep insights into the behavior and structure of linear transformations. These concepts help us understand how vectors are mapped from one space to another, identify dependencies among vectors, and analyze the solvability of linear systems.

## Definition

### Kernel (Null Space)

The **kernel** of a linear transformation $T: V \rightarrow W$, denoted as $\text{ker}(T)$ or $N(T)$, is the set of all vectors in the domain $V$ that are mapped to the zero vector in the codomain $W$. Formally,

$$
\text{ker}(T) = \{ v \in V \mid T(v) = 0_W \}
$$

In matrix terms, if $T$ is represented by a matrix $A$, then:

$$\text{ker}(A) = \{ x \in \mathbb{R}^n \mid Ax = 0 \}$$

### Image (Column Space)

The **image** of a linear transformation $T: V \rightarrow W$, denoted as $\text{im}(T)$ or $R(T)$, is the set of all vectors in the codomain $W$ that are images under $T$ of some vector in $V$. Formally,

$$\text{im}(T) = \{ w \in W \mid \exists v \in V, T(v) = w \}
$$

In matrix terms:

$$\text{im}(A) = \{ Ax \mid x \in \mathbb{R}^n \} = \text{Column Space of } A
$$

## Example

Consider the linear transformation $T: \mathbb{R}^3 \rightarrow \mathbb{R}^2$ represented by the matrix:

$$A = \begin{bmatrix}1 & 2 & 3 \\
4 & 5 & 6\end{bmatrix}$$

**Finding the Kernel of $A$:**

To find $\text{ker}(A)$, we solve the homogeneous system $Ax = 0$:

$$
\begin{bmatrix}1 & 2 & 3 \\
4 & 5 & 6\end{bmatrix} \begin{bmatrix}x_1 \\
x_2 \\ x_3\end{bmatrix} = \begin{bmatrix}0 \\
0\end{bmatrix}
$$

By performing Gaussian elimination on the augmented matrix:

$$
\begin{bmatrix}
1 & 2 & 3 & 0 \\
4 & 5 & 6 & 0
\end{bmatrix}
\xrightarrow{R_2 \rightarrow R_2 - 4R_1}
\begin{bmatrix}
1 & 2 & 3 & 0 \\
0 & -3 & -6 & 0
\end{bmatrix}
$$

The second row implies $-3x_2 - 6x_3 = 0$, or $x_2 = -2x_3$. Substituting this into the first equation ($x_1 + 2x_2 + 3x_3 = 0$) gives $x_1 + 2(-2x_3) + 3x_3 = 0$, which simplifies to $x_1 = x_3$.

The solution vectors have the form $`\begin{bmatrix} x_3 \\ -2x_3 \\ x_3 \end{bmatrix} = x_3 \begin{bmatrix} 1 \\ -2 \\ 1 \end{bmatrix}`$. Thus, the kernel is a one-dimensional subspace of $\mathbb{R}^3$ spanned by this vector:

$$
\text{ker}(A) = \text{span}\left( \begin{bmatrix} 1 \\
-2 \\
1 \end{bmatrix} \right)
$$

**Finding the Image of $A$:**

The image of $A$ is the column space, spanned by the columns of $A$:

$$
\text{im}(A) = \text{span}\left( \begin{bmatrix} 1 \\
4 \end{bmatrix}, \begin{bmatrix} 2 \\
5 \end{bmatrix}, \begin{bmatrix} 3 \\
6 \end{bmatrix} \right)
$$

To find a basis for the image, we can check for linear independence. The first two columns, $`\begin{bmatrix} 1 \\ 4 \end{bmatrix}`$ and $`\begin{bmatrix} 2 \\ 5 \end{bmatrix}`$, are not multiples of each other and are therefore linearly independent. Since the codomain is $\mathbb{R}^2$, which has dimension 2, these two vectors form a basis for $\mathbb{R}^2$. Thus, the image is the entire codomain.

$$\text{im}(A) = \mathbb{R}^2$$

Note that the Rank-Nullity Theorem ($`\text{dim}(\text{ker}(A)) + \text{dim}(\text{im}(A)) = \text{dim}(\text{domain})`$) is satisfied: $1 + 2 = 3$.

## Properties

### Property 1: Kernel is a Subspace

The kernel of a linear transformation is always a **subspace** of the domain $V$. This means it satisfies closure under addition and scalar multiplication.

**Proof:**
- If $v_1, v_2 \in \text{ker}(T)$, then $T(v_1 + v_2) = T(v_1) + T(v_2) = 0_W + 0_W = 0_W$. So, $v_1+v_2 \in \text{ker}(T)$.
- If $v \in \text{ker}(T)$ and $c$ is a scalar, then $T(cv) = cT(v) = c \cdot 0_W = 0_W$. So, $cv \in \text{ker}(T)$.

### Property 2: Image is a Subspace

The image of a linear transformation is always a **subspace** of the codomain $W$. This means it satisfies closure under addition and scalar multiplication.

**Proof:**
- If $w_1, w_2 \in \text{im}(T)$, then there exist vectors $v_1, v_2 \in V$ such that $T(v_1) = w_1$ and $T(v_2) = w_2$. Then $w_1 + w_2 = T(v_1) + T(v_2) = T(v_1 + v_2)$. Since $v_1 + v_2 \in V$, $w_1 + w_2$ is in the image.
- If $w \in \text{im}(T)$ and $c$ is a scalar, there exists a vector $v \in V$ such that $T(v) = w$. Then $cw = cT(v) = T(cv)$. Since $cv \in V$, $cw$ is in the image.

### Property 3: Rank-Nullity Theorem

For a linear transformation $T: V \rightarrow W$, the **Rank-Nullity Theorem** states:

$$\text{dim}(\text{ker}(T)) + \text{dim}(\text{im}(T)) = \text{dim}(V)$$

This theorem connects the dimension of the kernel (nullity) and the dimension of the image (rank) with the dimension of the domain.

### Property 4: Injectivity and Kernel

A linear transformation $T$ is **injective** (or one-to-one) if and only if its kernel contains only the zero vector:

$$T \text{ is injective} \iff \text{ker}(T) = \{0_V\}$$

This means that distinct vectors in $V$ are mapped to distinct vectors in $W$.

### Property 5: Surjectivity and Image

A linear transformation $T$ is **surjective** (or onto) if and only if its image equals the entire codomain:

$$T \text{ is surjective} \iff \text{im}(T) = W$$

This means that every vector in $W$ is an image of some vector in $V$.

## Applications

### Computer Graphics

In computer graphics, linear transformations are used to represent rotations, translations, and scalings of objects. The kernel and image help determine the degrees of freedom and possible transformations.

### Machine Learning

Kernel methods in machine learning, such as Support Vector Machines (SVM), use the concept of kernels implicitly to map data into higher-dimensional spaces for classification tasks.

### Control Theory

In control systems, linear transformations are used to model state transitions. The kernel represents unobservable states, while the image captures reachable states.

### Quantum Mechanics

In quantum mechanics, linear transformations represent physical observables and operators. The kernel corresponds to eigenstates with zero eigenvalue, and the image spans the space of possible outcomes.

### Robotics

Linear algebra concepts are fundamental in robotics for modeling robot kinematics and dynamics, where transformations describe the movement of robotic parts.

The kernel and image provide essential tools for analyzing linear systems, solving equations, and understanding the structure of linear transformations across various applications.2