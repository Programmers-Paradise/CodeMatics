# Projected Gradient Methods 

## Introduction
**Projected Gradient Methods** are a class of simple and intuitive iterative algorithms for solving **constrained optimization problems**. They are a direct extension of the familiar gradient descent algorithm, modified to handle constraints by ensuring that each updated solution remains within the feasible set.

The core idea is a two-step "step and project" process: first, take a standard gradient descent step as if the problem were unconstrained, and second, if that step lands outside the feasible region, project it back to the nearest point within the region. This makes the method particularly effective for problems where the projection onto the constraint set is computationally easy, such as those with box or norm constraints common in machine learning.

## The Projected Gradient Algorithm
The goal is to solve a problem of the form:

$$\text{minimize} \quad f(\mathbf{x})$$
$$\text{subject to } \mathbf{x} \in \mathcal{C}$$

where $f$ is a differentiable function and $\mathcal{C}$ is a closed, convex set representing the constraints.

The algorithm iteratively updates the current solution $\mathbf{x}_k$ using a two-step procedure:

1.  **Gradient Step**: Take a standard gradient descent step with a step size $\alpha > 0$. This temporary point, $\mathbf{z}_{k+1}$, may be outside the feasible set $\mathcal{C}$.

    $$\mathbf{z}_{k+1} = \mathbf{x}_k - \alpha \nabla f(\mathbf{x}_k)$$

3.  **Projection Step**: Project the point $\mathbf{z}_ {k+1}$ back onto the feasible set $\mathcal{C}$ to get the next iterate, $\mathbf{x}_ {k+1}$. The projection finds the point in $\mathcal{C}$ that is closest to $\mathbf{z}_{k+1}$ in Euclidean distance.

    $$\mathbf{x}_ {k+1} = P_{\mathcal{C}}(\mathbf{z}_{k+1})$$
    
    where $P_{\mathcal{C}}(\mathbf{z}) = \arg\min_{\mathbf{x} \in \mathcal{C}} \|\mathbf{x} - \mathbf{z}\|_2^2$ is the projection operator.

The algorithm repeats these two steps until the solution converges.

### Examples of Simple Projections
The efficiency of the method depends on having a simple, closed-form solution for the projection.
-   **Box Constraints ($l_i \le x_i \le u_i$)**: The projection is a simple clipping operation for each component:

    $$P_{\mathcal{C}}(\mathbf{z})_i = \max(l_i, \min(u_i, z_i))$$
    
-   **Non-negativity Constraints ($x_i \ge 0$)**: A special case of box constraints where $l_i=0$:

    $$P_{\mathcal{C}}(\mathbf{z})_i = \max(0, z_i)$$
    
-   **Ball Constraint ($\|\mathbf{x}\|_2 \le R$)**: The projection involves scaling the vector back to the surface of the ball if it is outside:

    $$P_{\mathcal{C}}(\mathbf{z}) = \min\left(1, \frac{R}{\|\mathbf{z}\|_2}\right) \mathbf{z}$$

## Example: Minimization on a Unit Ball
**Problem**: Minimize $f(x, y) = (x-2)^2 + (y-2)^2$ subject to the constraint that the solution lies within the unit circle, $\mathcal{C} = \{(x,y) | x^2+y^2 \le 1\}$. The unconstrained minimum is at $(2,2)$.

**Iteration 1:**
1.  **Initialize**: Start at a feasible point, e.g., $\mathbf{x}_0 = (0, 1)$.
2.  **Gradient Step**: The gradient is $\nabla f = [2(x-2), 2(y-2)]^T$. At $(0,1)$, the gradient is $\nabla f(\mathbf{x}_0) = [-4, -2]^T$. Let's choose a step size $\alpha=0.5$.

     $$\mathbf{z}_1 = \mathbf{x}_0 - \alpha \nabla f(\mathbf{x}_0) = (0, 1) - 0.5(-4, -2) = (0,1) - (-2, -1) = (2, 2)$$
    
4.  **Check Feasibility**: The point $(2,2)$ is outside the unit circle, since $2^2+2^2 = 8 > 1$.
5.  **Projection Step**: We must project $\mathbf{z}_1=(2,2)$ back onto the unit circle.

    $$\mathbf{x}_1 = P_{\mathcal{C}}(2,2) = \frac{(2,2)}{\|(2,2)\|_2} = \frac{(2,2)}{\sqrt{2^2+2^2}} = \frac{(2,2)}{\sqrt{8}} \approx (0.707, 0.707)$$
    
The first iteration moves the solution from $(0,1)$ to $(0.707, 0.707)$, which is the point on the circle closest to the unconstrained minimum.

## Properties and Convergence
-   **Descent Method**: For a suitable step size, the algorithm is a descent method, meaning the objective function value does not increase at each iteration: $f(\mathbf{x}_{k+1}) \leq f(\mathbf{x}_k)$.
-   **Feasibility**: The projection step guarantees that every iterate $\mathbf{x}_k$ is feasible.
-   **Convergence**: For a convex function $f$ with a Lipschitz continuous gradient, the sequence of iterates is guaranteed to converge to an optimal solution.

## Proximal Gradient Methods: A Generalization
Projected gradient descent is a special case of a broader class of algorithms called **Proximal Gradient Methods**. These methods can solve problems with more complex, non-differentiable but structured regularizers (like the L1 norm in Lasso). The projection step is replaced by a more general **proximal operator**. For example, the **Iterative Soft-Thresholding Algorithm (ISTA)** used to solve the Lasso problem is a proximal gradient method.

## Applications
Projected gradient methods are widely used when constraints are simple enough to allow for an efficient projection.
1.  **Machine Learning**:
    -   For training models with **box constraints** or **non-negativity constraints** on their parameters.
    -   Its generalization, the proximal gradient method, is a standard solver for **L1 regularization (Lasso)**.
    -   It is used in matrix factorization problems with non-negativity constraints (**NMF**).
2.  **Optimal Control**: For solving problems where the control inputs or system states are subject to simple bounds.
3.  **Image Processing**: In image reconstruction and denoising problems, constraints are often used to ensure pixel values remain within a valid range (e.g., [0, 255]).
4.  **Portfolio Optimization**: For finding an optimal asset allocation subject to constraints, such as no short selling ($x_i \ge 0$) or limits on the concentration in any single asset.