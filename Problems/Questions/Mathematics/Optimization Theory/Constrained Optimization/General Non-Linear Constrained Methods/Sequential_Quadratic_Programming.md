# Sequential Quadratic Programming (SQP)
## Introduction
**Sequential Quadratic Programming (SQP)** is one of the most powerful and widely used iterative methods for solving **non-linear constrained optimization problems**. It is a general-purpose algorithm that can handle problems with both non-linear objective functions and non-linear constraints.

The core idea of SQP is to model the original, difficult problem with a sequence of simpler subproblems. At each iteration, it approximates the problem as a **Quadratic Program (QP)**, which can be solved efficiently. By solving a series of these QP approximations, the algorithm converges to a solution of the original non-linear problem. Its combination of theoretical robustness and practical efficiency makes it a cornerstone of modern optimization.

## The Core Idea: A Constrained Newton's Method
SQP can be thought of as an extension of the powerful Newton's method to constrained optimization. At each step, it creates a simplified model of the original problem at the current point $\mathbf{x}_k$. This model consists of:

1.  A **quadratic approximation** of the problem's **Lagrangian function**. This captures the local curvature of the objective function and the constraints.
2.  A **linear approximation** of the problem's **constraints**, created using their first-order Taylor expansions.

The algorithm then solves this simplified problem—a Quadratic Program—to find a search direction, and then performs a line search along that direction to find the next point.

## The SQP Algorithm
The iterative process for solving `minimize f(x) s.t. g(x) <= 0, h(x) = 0` is as follows:

1.  **Initialize**: Start with an initial guess for the solution, $\mathbf{x}_0$, and an initial approximation for the Hessian of the Lagrangian, $\mathbf{B}_0$ (often the identity matrix).

2.  **Formulate the QP Subproblem**: At the current iterate $\mathbf{x}_k$, formulate a QP to find the optimal search direction $\mathbf{d}$. The QP is:

$$\begin{aligned}
& \text{minimize}_{\mathbf{d}} && \frac{1}{2}\mathbf{d}^T \mathbf{B}_k \mathbf{d} + \nabla f(\mathbf{x}_k)^T \mathbf{d} \\
& \text{subject to} && \nabla g_i(\mathbf{x}_k)^T \mathbf{d} + g_i(\mathbf{x}_k) \leq 0, \quad \text{for all } i \\
& && \nabla h_j(\mathbf{x}_k)^T \mathbf{d} + h_j(\mathbf{x}_k) = 0, \quad \text{for all } j
\end{aligned}$$
    
   -   The objective is a quadratic approximation of the change in the Lagrangian.
   -   The constraints are linearizations of the original constraints.

4.  **Solve the QP Subproblem**: Solve this QP to find the optimal search direction $\mathbf{d}_k$ and the optimal Lagrange multipliers for the subproblem (which become estimates for the multipliers of the original problem).

5.  **Line Search**: Perform a line search to find a suitable step size $\alpha_k \in (0, 1]$. This is done to ensure that the next step makes sufficient progress. The search is guided by a **merit function**, which combines the objective function and constraint violations into a single value to be minimized.

6.  **Update Primal Variables**: Update the solution:
    $$\mathbf{x}_{k+1} = \mathbf{x}_k + \alpha_k \mathbf{d}_k$$

7.  **Update Hessian Approximation**: In practice, the true Hessian of the Lagrangian is rarely computed. Instead, $\mathbf{B}_k$ is updated to a new approximation $\mathbf{B}_{k+1}$ using a **Quasi-Newton formula (like BFGS)**, which uses the change in the gradients from the previous step.

8.  **Repeat**: Repeat steps 2-6 until the solution converges.

## Conceptual Example
Imagine trying to find the lowest point in a curved valley (the objective function) while being constrained to stay on a winding path on the mountainside (the constraints).

-   **At your current position ($x_k$):**
    1.  You approximate the curved valley floor with a simple, smooth **bowl shape** (a quadratic).
    2.  You approximate the winding constraint path with a **straight line** (a linear constraint) that is tangent to the path at your current position.
    3.  You solve the easy problem: "What is the minimum point of the bowl that is on the straight line?" This gives you a direction to walk in, **d**.
    4.  You take a step in that direction to a new, better position, **$x_{k+1}$**.
    5.  From this new position, you repeat the process, creating a new bowl and a new tangent line to guide your next step.

## Properties
1.  **Fast Convergence**: A key advantage of SQP is its very fast rate of convergence. Under certain conditions, it has a **superlinear** or even **quadratic** convergence rate, meaning it can find a highly precise solution in very few iterations once it is near the optimum.
2.  **General Applicability**: It is a general-purpose method that can handle a wide variety of non-linear problems with both equality and inequality constraints.
3.  **Computational Cost**: Each iteration can be computationally expensive because it requires solving a full QP subproblem.
4.  **Robustness**: Modern SQP algorithms incorporate sophisticated techniques (like merit functions and trust regions) to ensure they converge reliably to a local solution even from a poor starting point.

## Applications
SQP is a state-of-the-art method used in many demanding optimization applications.
1.  **Robotics and Optimal Control**: For computing optimal trajectories for robots or vehicles that minimize energy consumption while satisfying constraints on joint limits, velocity, and obstacle avoidance.
2.  **Engineering Design**: For optimizing complex engineering designs, such as the shape of an aircraft wing to maximize lift and minimize drag, subject to constraints on structural integrity and weight.
3.  **Economics**: For solving complex non-linear economic models, such as computational general equilibrium (CGE) models.
4.  **Machine Learning**: While not typically used for training standard deep learning models, it is used in other areas, such as training support vector machines with custom non-linear kernels or in reinforcement learning for policy optimization.