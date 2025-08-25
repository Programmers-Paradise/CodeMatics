# Complex Eigenvalues in Linear Algebra

## Introduction
Eigenvalues are a cornerstone of linear algebra, revealing the intrinsic behavior of linear transformations. While many introductory examples focus on real eigenvalues, which correspond to simple scaling, **complex eigenvalues** are essential for understanding more intricate transformations, particularly those involving rotation. They arise naturally in the study of dynamical systems, electrical circuits, and quantum mechanics, providing a deeper analytical framework than real numbers alone can offer.

## Definition and Origin
For a square matrix $A$, an eigenvalue $\lambda$ and its corresponding non-zero eigenvector $\mathbf{v}$ satisfy the equation:

$$A\mathbf{v} = \lambda\mathbf{v}$$

Complex eigenvalues emerge when the **characteristic equation**, $\det(A - \lambda I) = 0$, has roots that are not real numbers. This occurs when the characteristic polynomial has irreducible quadratic factors.

For a matrix $A$ with real entries, its complex eigenvalues will always appear in **conjugate pairs**. Furthermore, if $\lambda$ is a complex eigenvalue, its corresponding eigenvector $\mathbf{v}$ will also have complex entries.

## Example
Consider the matrix $A$, which represents a rotation and scaling:

$$A = \begin{pmatrix} 1 & -2 \\
3 & 4 \end{pmatrix}$$

**Step 1: Find the Eigenvalues**
We solve the characteristic equation:

$$
\det(A - \lambda I) = \det\left( \begin{pmatrix} 1 - \lambda & -2 \\
3 & 4 - \lambda \end{pmatrix} \right) = (1 - \lambda)(4 - \lambda) - (-2)(3) = 0
$$

Expanding and simplifying gives the characteristic polynomial:

$$\lambda^2 - 5\lambda + 10 = 0$$

Using the quadratic formula to find the roots:

$$\lambda = \frac{-(-5) \pm \sqrt{(-5)^2 - 4(1)(10)}}{2} = \frac{5 \pm \sqrt{25 - 40}}{2} = \frac{5 \pm \sqrt{-15}}{2}$$

Thus, the matrix has a complex conjugate pair of eigenvalues:

$$\lambda_1 = \frac{5}{2} + i\frac{\sqrt{15}}{2} \quad \text{and} \quad \lambda_2 = \frac{5}{2} - i\frac{\sqrt{15}}{2}$$

**Step 2: Find the Eigenvectors**

Let's find the eigenvector $\mathbf{v}_1$ corresponding to $\lambda_1$. We solve $(A - \lambda_1 I)\mathbf{v}_1 = \mathbf{0}$:

$$
\left( \begin{pmatrix} 1 & -2 \\
3 & 4 \end{pmatrix} - \left(\frac{5}{2} + i\frac{\sqrt{15}}{2}\right) \begin{pmatrix} 1 & 0 \\
0 & 1 \end{pmatrix} \right) \begin{pmatrix} v_a \\
v_b \end{pmatrix} = \begin{pmatrix} 0 \\
0 \end{pmatrix}
$$

Using the first row of the resulting matrix gives the equation:

$$\left(1 - \left(\frac{5}{2} + i\frac{\sqrt{15}}{2}\right)\right)v_a - 2v_b = 0 \implies \left(-\frac{3}{2} - i\frac{\sqrt{15}}{2}\right)v_a = 2v_b$$

To find a simple eigenvector, we can choose $v_a = 2$. This yields $v_b = -\frac{3}{2} - i\frac{\sqrt{15}}{2}$. So, one eigenvector is:

$$\mathbf{v}_1 = \begin{pmatrix} 2 \\ -\frac{3}{2} - i\frac{\sqrt{15}}{2} \end{pmatrix}$$

The eigenvector for $\lambda_2$ will be the complex conjugate, $\mathbf{v}_2 = \overline{\mathbf{v}_1}$.

## Properties and Geometric Interpretation
1.  **Conjugate Pairs**: If a real matrix $A$ has a complex eigenvalue $\lambda = a + bi$, then its conjugate $\overline{\lambda} = a - bi$ is also an eigenvalue. Their corresponding eigenvectors are also complex conjugates.
2.  **Trace and Determinant**: The sum of all eigenvalues (real and complex) equals the trace of the matrix, and their product equals the determinant. For our example, $\text{tr}(A) = 1+4=5$ and $\lambda_1+\lambda_2=5$. Also, $\det(A) = 4 - (-6)=10$ and $\lambda_1\lambda_2 = (\frac{5}{2})^2 - (i\frac{\sqrt{15}}{2})^2 = \frac{25}{4} + \frac{15}{4} = \frac{40}{4}=10$.
3.  **Geometric Meaning: Rotation and Scaling**: A real matrix with complex eigenvalues $\lambda = a \pm bi$ (where $b \neq 0$) acts on a plane in its domain as a **rotation combined with scaling**. The matrix is similar to a rotation-scaling matrix of the form $\begin{pmatrix} a & -b \\ b & a \end{pmatrix}$. The real part, $a$, contributes to scaling, and the imaginary part, $b$, contributes to rotation. The overall scaling factor is $|\lambda| = \sqrt{a^2+b^2}$.

## Applications
1.  **Mechanical and Electrical Systems**: In vibration analysis and AC circuit analysis, complex eigenvalues describe damped or driven oscillations. The real part of the eigenvalue corresponds to the damping (decay or growth), while the imaginary part corresponds to the natural frequency of oscillation.
2.  **Control Theory**: The stability of a linear control system is determined by the eigenvalues of its state matrix. For a system to be stable, all eigenvalues must have a negative real part. Complex eigenvalues with negative real parts indicate that the system returns to equilibrium via damped oscillations.
3.  **Fluid Dynamics**: The stability of fluid flows can be analyzed using eigenvalues. Complex eigenvalues can signify the onset of oscillatory instabilities, such as the vortex shedding that occurs behind a cylinder in a flow.
4.  **Quantum Mechanics**: While the observables of closed quantum systems are represented by Hermitian operators with real eigenvalues, open or dissipative systems are described by non-Hermitian operators. These can have complex eigenvalues, where the imaginary part represents the decay rate or lifetime of a quantum state.