# Lagrangian Duality

## Introduction
**Lagrangian duality** is a fundamental and powerful concept in constrained optimization. It provides a way to transform a given optimization problem (the **primal problem**) into a related but different problem (the **dual problem**). This transformation is powerful because the dual problem is always a convex optimization problem, and its solution provides valuable information about the original problem. The dual can provide a lower bound on the optimal value of the primal problem and, under certain conditions, can be used to find the exact solution. This framework is particularly valuable in machine learning, where it forms the basis for algorithms like the Support Vector Machine (SVM).

## The Primal and Dual Problems

### 1. The Primal Problem
Consider a standard constrained optimization problem, referred to as the primal problem:

$$\begin{aligned}
& \text{minimize} && f(\mathbf{x}) \\
& \text{subject to} && g_i(\mathbf{x}) \leq 0, \quad i = 1, \dots, m \\
& && h_j(\mathbf{x}) = 0, \quad j = 1, \dots, l
\end{aligned}$$

### 2. The Lagrangian Function
We can incorporate the constraints into the objective function using **Lagrange multipliers** $\boldsymbol{\mu}$ and $\boldsymbol{\lambda}$ to form the Lagrangian function:

$$\mathcal{L}(\mathbf{x}, \boldsymbol{\mu}, \boldsymbol{\lambda}) = f(\mathbf{x}) + \sum_{i=1}^{m} \mu_i g_i(\mathbf{x}) + \sum_{j=1}^{l} \lambda_j h_j(\mathbf{x})$$

### 3. The Lagrange Dual Function
The **Lagrange dual function** $q(\boldsymbol{\mu}, \boldsymbol{\lambda})$ is defined as the infimum (greatest lower bound) of the Lagrangian over the primal variables $\mathbf{x}$:

$$q(\boldsymbol{\mu}, \boldsymbol{\lambda}) = \inf_{\mathbf{x}} \mathcal{L}(\mathbf{x}, \boldsymbol{\mu}, \boldsymbol{\lambda})$$

A remarkable property of the dual function is that it is **always a concave function**, regardless of whether the original primal problem was convex.

### 4. The Dual Problem
The dual problem is to **maximize** this dual function with respect to the Lagrange multipliers. The multipliers for inequality constraints ($\mu_i$) must be non-negative.

$$\begin{aligned}
& \text{maximize} && q(\boldsymbol{\mu}, \boldsymbol{\lambda}) \\
& \text{subject to} && \mu_i \geq 0, \quad i = 1, \dots, m
\end{aligned}$$

Note that the multipliers $\lambda_j$ associated with equality constraints are unrestricted in sign.

## The Duality Theorems

### 1. Weak Duality
For any optimization problem, the optimal value of the dual problem, $d^*$, is always less than or equal to the optimal value of the primal problem, $p^*$.

$$d^* \leq p^*$$

This is known as **weak duality**. It always holds, even for non-convex problems, and it provides a valuable lower bound on the true solution.

### 2. Strong Duality
The ideal case is **strong duality**, where the optimal primal and dual values are equal:

$$d^* = p^*$$

If strong duality holds, we can solve the (often easier) dual problem to find the solution to the primal problem. For a convex optimization problem, strong duality holds if a **constraint qualification** condition, such as **Slater's condition**, is met. Slater's condition simply requires that there exists at least one point that is strictly feasible for the inequality constraints.

## Example
**Problem:** Minimize $f(x, y) = x^2 + y^2$ subject to the equality constraint $h(x,y) = x + y - 2 = 0$.

**1. Formulate the Lagrangian:**

$$\mathcal{L}(x, y, \lambda) = x^2 + y^2 + \lambda (x + y - 2)$$

**2. Find the Dual Function $q(\lambda)$:**
The dual function is the infimum of the Lagrangian with respect to the primal variables ($x, y$). We find this by setting the partial derivatives with respect to $x$ and $y$ to zero:
-   $\frac{\partial \mathcal{L}}{\partial x} = 2x + \lambda = 0 \implies x = -\frac{\lambda}{2}$
-   $\frac{\partial \mathcal{L}}{\partial y} = 2y + \lambda = 0 \implies y = -\frac{\lambda}{2}$
Now, substitute these back into the Lagrangian to get the dual function:

$$q(\lambda) = \left(-\frac{\lambda}{2}\right)^2 + \left(-\frac{\lambda}{2}\right)^2 + \lambda\left(-\frac{\lambda}{2} - \frac{\lambda}{2} - 2\right) = \frac{\lambda^2}{2} + \lambda(-\lambda - 2) = -\frac{1}{2}\lambda^2 - 2\lambda$$

**3. Solve the Dual Problem:**
The dual problem is to maximize $q(\lambda)$. We find the maximum by taking the derivative with respect to $\lambda$ and setting it to zero:

$$q'(\lambda) = -\lambda - 2 = 0 \implies \lambda^* = -2$$
The optimal dual value is $d^* = q(-2) = -\frac{1}{2}(-2)^2 - 2(-2) = -2 + 4 = 2$.

**4. Recover the Primal Solution:**
Using the optimal dual variable $\lambda^* = -2$, we find the optimal primal variables:

$$x^* = -\frac{\lambda^*}{2} = 1 \quad \text{and} \quad y^* = -\frac{\lambda^*}{2} = 1$$

The optimal primal value is $p^* = f(1,1) = 1^2 + 1^2 = 2$.

Since $p^* = d^* = 2$, strong duality holds for this problem.

## Applications
1.  **Support Vector Machines (SVMs)**: This is the most famous application of Lagrangian duality in machine learning. The primal SVM problem is complex, but its dual is a simpler quadratic programming problem that can be solved efficiently. Critically, the dual formulation is what allows for the **kernel trick**, enabling SVMs to solve non-linear problems. The support vectors correspond to the data points with non-zero Lagrange multipliers.
2.  **Engineering Optimization**: Duality is used to solve complex constrained problems in structural design, resource allocation, and control systems.
3.  **Economics**: The optimal Lagrange multipliers (dual variables) have a natural interpretation as **shadow prices**, representing the marginal cost or value associated with relaxing a constraint (e.g., the value of having one more unit of a resource).

Lagrangian duality is a versatile and elegant tool that provides deep theoretical insights, computational advantages, and a bridge between the primal and dual perspectives of an optimization problem.