# Quadratic Programming (QP)
## Introduction
**Quadratic Programming (QP)** is a class of optimization problems that involves minimizing or maximizing a **quadratic** objective function, subject to a set of **linear** constraints on the decision variables. It represents a powerful extension of Linear Programming (LP) by allowing for a more complex, curved objective function. QP is fundamental to numerous applications in fields like machine learning, finance, robotics, and engineering, as it provides a framework for solving a wide range of practical problems, most notably the training of Support Vector Machines.

## The Anatomy of a Quadratic Program
A problem is defined as a Quadratic Program if it can be expressed in the following standard form:

$$\text{Minimize } \frac{1}{2}\mathbf{x}^T \mathbf{Q} \mathbf{x} + \mathbf{c}^T \mathbf{x}$$Subject to:$$\mathbf{A}\mathbf{x} \le \mathbf{b} \quad \text{(Inequality Constraints)}$$

$$\mathbf{E}\mathbf{x} = \mathbf{f} \quad \text{(Equality Constraints)}$$
Where:
-   $\mathbf{x}$ is the vector of decision variables.
-   $\mathbf{Q}$ is a symmetric $n \times n$ matrix that defines the quadratic part of the objective.
-   $\mathbf{c}$ is a vector that defines the linear part of the objective.
-   $\mathbf{A}$, $\mathbf{b}$, $\mathbf{E}$, and $\mathbf{f}$ define the linear constraints.

## The Importance of Convexity
The nature of a QP problem is determined entirely by the matrix $\mathbf{Q}$.
-   If the matrix $\mathbf{Q}$ is **positive semidefinite** or **positive definite**, the objective function is **convex**.
-   A QP with a convex objective function and linear constraints is a **convex optimization problem**. This is a crucial property, as it guarantees that **any local minimum is also the global minimum**.
-   Convex QPs can be solved efficiently and reliably in polynomial time. If $\mathbf{Q}$ is not positive semidefinite, the problem is non-convex and becomes much harder to solve (generally NP-hard).

## Example: Portfolio Optimization
The classic Markowitz mean-variance portfolio optimization problem is a perfect example of a QP.
**Problem**: An investor wants to allocate their capital across a set of assets to minimize the portfolio's risk (variance) while achieving at least a certain target expected return.

-   **Decision Variables**: The vector $\mathbf{x}$ represents the proportion of capital invested in each asset.

-   **Objective Function (Minimize Risk)**: The portfolio's variance (risk) is a quadratic function of the investment proportions:

    $$\text{Minimize } \text{Risk} = \mathbf{x}^T \mathbf{\Sigma} \mathbf{x}$$
    
    Here, $\mathbf{\Sigma}$ is the covariance matrix of the asset returns. This is the quadratic objective (with $\mathbf{Q} = 2\mathbf{\Sigma}$ and $\mathbf{c}=\mathbf{0}$).

-   **Constraints (Linear)**:
    -   **Target Return**: The expected return of the portfolio must meet a target $R$: $\boldsymbol{\mu}^T \mathbf{x} \ge R$.
    -   **Budget Constraint**: All capital must be invested: $\sum x_i = 1$.
    -   **Non-negativity**: No short selling is allowed: $x_i \ge 0$ for all assets.

This formulation is a convex QP that can be solved to find the optimal, risk-minimizing asset allocation.

## Key Properties and Solution Methods
-   **Geometric Interpretation**: The linear constraints define a feasible region that is a **polyhedron**. The level sets of the quadratic objective function are **ellipsoids**. The solution to the QP is the point where the "best" ellipsoid just touches the feasible polyhedron. Unlike in LP, this optimal point is not necessarily at a vertex.
-   **Optimality Conditions**: The solution to a convex QP is characterized by the **Karush-Kuhn-Tucker (KKT) conditions**, which are a generalization of Lagrange multipliers to problems with inequality constraints.
-   **Solution Algorithms**: Convex QPs are efficiently solved using algorithms like:
    -   **Interior-Point Methods**: These methods traverse the interior of the feasible region to find the solution.
    -   **Active-Set Methods**: These methods work by iterating along the faces of the feasible region.

## Applications in Machine Learning and Beyond

1.  **Support Vector Machines (SVMs)**: This is the most celebrated application of QP in machine learning. The process of training a soft-margin SVM is mathematically formulated as a QP. The goal is to find the maximum-margin hyperplane by solving the **dual problem**, which involves maximizing a quadratic function subject to linear constraints on the Lagrange multipliers.

2.  **Finance**: As shown in the example, portfolio optimization is a core application. QP is also used in risk management and for pricing complex financial derivatives.

3.  **Robotics**: QP is used extensively in trajectory planning and motion control. It can find optimal robot paths that are smooth (minimizing jerk, a quadratic quantity) and satisfy constraints on joint limits, velocity, and obstacle avoidance.

4.  **Optimal Control and Engineering**: Used to control dynamic systems (like chemical processes or aircraft) by minimizing a quadratic cost function (e.g., energy consumption or deviation from a target state) subject to linear constraints on the system's dynamics.

## Conclusion
Quadratic Programming is a powerful and practical framework that extends the capabilities of linear programming to problems with quadratic objectives. Its ability to efficiently solve convex problems makes it a fundamental tool in optimization. Its central role in training Support Vector Machines alone makes it one of the most important optimization techniques in the entire field of machine learning.