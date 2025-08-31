# Semidefinite Programming (SDP) 
## Introduction
**Semidefinite Programming (SDP)** is a powerful subfield of convex optimization and a significant generalization of linear and quadratic programming. It deals with optimizing a linear function of a matrix variable, subject to the constraint that the matrix must be **positive semidefinite**. SDP has become a cornerstone of modern optimization theory due to its ability to model a wide range of complex problems and provide tight relaxations for computationally intractable (NP-hard) problems. Its applications are vast, spanning combinatorial optimization, control theory, machine learning, and quantum information.

## The Semidefinite Programming Problem
The key feature of an SDP is that the decision variable is not a vector, but a symmetric matrix. The standard (primal) form of an SDP is:

$$\begin{aligned}
& \text{minimize} && \langle \mathbf{C}, \mathbf{X} \rangle \\
& \text{subject to} && \langle \mathbf{A}_i, \mathbf{X} \rangle = b_i, \quad \text{for } i = 1, \dots, m \\
& && \mathbf{X} \succeq 0
\end{aligned}$$

Where:
-   $\mathbf{X} \in \mathbb{S}^n$ is the **symmetric matrix variable** we are optimizing over.
-   $\mathbf{C}$ and $\mathbf{A}_i$ are given symmetric matrices that define the problem.
-   $\langle \mathbf{A}, \mathbf{B} \rangle = \text{Tr}(\mathbf{A}^T \mathbf{B})$ is the matrix inner product (the sum of the element-wise products). The objective and equality constraints are linear functions of the entries of $\mathbf{X}$.
-   $\mathbf{X} \succeq 0$ is the **semidefinite constraint**, meaning the matrix $\mathbf{X}$ must be positive semidefinite (i.e., have non-negative eigenvalues).

This semidefinite constraint, while non-linear, is **convex**. This makes the entire SDP problem a convex optimization problem, which means any local optimum is also a global optimum, and the problem can be solved efficiently.

## SDP as a Generalization
-   **Linear Programming (LP)**: An LP is a special case of an SDP where all matrices ($\mathbf{C}, \mathbf{A}_i, \mathbf{X}$) are restricted to be diagonal. The constraint that a diagonal matrix is positive semidefinite is equivalent to the constraint that its diagonal entries (the variables of the LP) are non-negative.
-   **Quadratic Programming (QP)**: Many convex quadratic programming problems can be reformulated and solved as SDPs.

## Example: The MAX-CUT SDP Relaxation
This is the most famous application of SDP, demonstrating its power in approximating NP-hard problems.
**The Problem (MAX-CUT)**: Given a graph, partition its vertices into two sets, $S_1$ and $S_2$, such that the number of edges connecting the two sets is maximized. This is a fundamental NP-hard problem.

**The SDP Relaxation:**
1.  **Formulation**: We can represent the cut using variables $x_i \in \{-1, 1\}$ for each vertex $i$. The problem is to maximize $\frac{1}{2}\sum_{i<j} w_{ij}(1-x_i x_j)$ where $w_{ij}$ is the weight of the edge between $i$ and $j$. This is a hard, discrete problem.
2.  **Relaxation**: The key insight is to "lift" this problem. We introduce a matrix variable $\mathbf{X}$ where $X_{ij} = x_i x_j$. The MAX-CUT problem can be relaxed into the following SDP:

    $$\begin{aligned}
    & \text{maximize} && \langle \mathbf{L}, \mathbf{X} \rangle \\
    & \text{subject to} && X_{ii} = 1, \quad \text{for all } i \\
    & && \mathbf{X} \succeq 0
    \end{aligned}$$
    where $\mathbf{L}$ is the graph Laplacian. This is a convex problem that can be solved efficiently.
3.  **The Result**: The solution to this SDP, $\mathbf{X}^*$, provides a very strong **upper bound** on the true value of the maximum cut. Furthermore, the famous **Goemans-Williamson algorithm** uses a randomized rounding procedure based on the solution $\mathbf{X}^*$ to find a cut that is, in expectation, at least **87.8%** of the true optimal value. This provides both a bound and a high-quality approximate solution to an NP-hard problem.

## Duality and Solution Methods
Like LP, SDP has a strong duality theory. The dual SDP provides a lower bound on the primal problem's objective, and for most well-behaved problems, the primal and dual optimal values are equal. SDPs are typically solved in polynomial time using **Interior-Point Methods**, which are sophisticated algorithms that iteratively move through the interior of the feasible set.

## Applications
1.  **Combinatorial Optimization**: As seen with MAX-CUT, SDP provides powerful relaxations for many NP-hard problems, including graph coloring and the traveling salesman problem. The **Lovász theta function**, an SDP, provides a tight bound on the Shannon capacity of a graph.
2.  **Control Theory**: A major application area. Many problems in robust control system design and stability analysis can be formulated as solving a set of **Linear Matrix Inequalities (LMIs)**, which are a form of SDP.
3.  **Machine Learning**:
    -   **Kernel Methods**: Finding the optimal kernel matrix for some learning tasks can be formulated as an SDP.
    -   **Covariance Matrix Estimation**: Estimating a valid covariance matrix from data subject to certain structural constraints.
    -   **Clustering**: Some clustering and data grouping problems can be relaxed as SDPs.
4.  **Quantum Information**: The state of a quantum system is described by a **density matrix**, which must be positive semidefinite and have a trace of 1. Many problems in quantum computing and information theory are naturally formulated as SDPs.
5.  **Structural Engineering**: For analyzing the stability and optimal design of structures, where the stiffness matrix must be positive semidefinite.

## Conclusion
Semidefinite Programming is a powerful and elegant framework that significantly expands the scope of solvable convex optimization problems. By allowing for matrix variables with a semidefinite constraint, it provides a unified way to model a vast range of problems and, most remarkably, offers a computationally tractable way to find high-quality approximate solutions to some of the most famously difficult problems in computer science and optimization.