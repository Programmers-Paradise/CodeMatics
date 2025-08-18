# LBFGS

LBFGS (Limited-memory Broyden-Fletcher-Goldfarb-Shanno) is a popular optimization algorithm used in machine learning and other fields to find the minimum of a function, especially when dealing with large datasets or high-dimensional spaces.

## Definition

The LBFGS algorithm is an approximation of the Newton-Raphson method that avoids explicitly computing and inverting the Hessian matrix. Instead, it uses gradient information from previous iterations to approximate the inverse Hessian, which helps determine the search direction for minimizing a function.

### Key Equations

1. **Update Formula**:  

$$
s_k = x_{k+1} - x_k
$$ 
 
where $s_k$ is the difference between consecutive iterates.

2. **Approximate Inverse Hessian** ($H_k$):  
   The inverse Hessian is approximated using rank-1 updates based on previous gradient information:

$$
H_k = H_{k-1} + \frac{(y_{k-1} - H_{k-1}s_{k-1})s_{k-1}^T}{s_{k-1}^Ty_{k-1}}
$$

where $y_{k-1}$ is the difference between consecutive gradients.

3. **Search Direction**:  

$$
d_k = -H_k g_k
$$

where $g_k$ is the gradient at iteration $k$.

4. **Line Search**:  
   A line search is performed to determine the step size ($\alpha_k$) that minimizes a one-dimensional function along the direction $d_k$:

$$
x_{k+1} = x_k + \alpha_k d_k
$$

## Example

Let's apply LBFGS to minimize the simple quadratic function:

$$
f(x) = x^2
$$

Starting with an initial guess $x_0 = 3$ and a step size of $0.5$.

1. **Compute Gradient**:  

$$
g_k = 2x_k
$$

2. **Update Search Direction**:  
   Using the approximate inverse Hessian, compute the search direction $d_k$.

3. **Line Search**:  
   Determine the optimal step size ($\alpha_k$) using a line search.

4. **Iterate Until Convergence**:  
   Update $x$ and repeat until the gradient is sufficiently small or zero.

## Properties

- **Quasi-Newton Method**: LBFGS approximates the inverse Hessian without explicitly computing it, making it efficient for large problems.
- **Limited Memory**: It only stores a few past iterations to approximate the Hessian, reducing memory usage compared to full Newton methods.
- **Convergence**: Typically converges faster than gradient descent and is more robust than Newton's method when using exact Hessians.
- **Computational Efficiency**: Suitable for high-dimensional optimization problems due to its low memory footprint.
- **Robustness**: Often performs well on non-quadratic functions, making it versatile for various applications.

## Applications

- **Machine Learning**: Used in training models like neural networks and support vector machines.  
- **Deep Learning**: Optimizes large-scale models efficiently during training.  
- **Engineering Optimization**: Solves complex engineering problems with many variables or constraints.  
- **Economic Modeling**: Helps optimize economic models with numerous parameters.  

By leveraging these properties, LBFGS is a powerful tool for solving optimization problems across various domains.

## Code

```python
import numpy as np

class LBFGSOptimizer:
    def __init__(self, func, grad, m=10, max_iter=100, tol=1e-5, alpha=1.0):
        """
        Limited-memory BFGS optimizer.
        
        Parameters:
            func : callable
                Function to minimize.
            grad : callable
                Gradient of the function.
            m : int
                Memory size (number of past updates to store).
            max_iter : int
                Maximum number of iterations.
            tol : float
                Convergence tolerance.
            alpha : float
                Initial step size for line search.
        """
        self.func = func
        self.grad = grad
        self.m = m
        self.max_iter = max_iter
        self.tol = tol
        self.alpha = alpha

    def two_loop_recursion(self, q, s_list, y_list, rho_list):
        """Compute search direction using two-loop recursion."""
        alphas = []
        for i in reversed(range(len(s_list))):
            alpha = rho_list[i] * np.dot(s_list[i], q)
            alphas.append(alpha)
            q = q - alpha * y_list[i]
        
        # Scaling of initial Hessian (identity scaling)
        if len(s_list) > 0:
            gamma = np.dot(s_list[-1], y_list[-1]) / np.dot(y_list[-1], y_list[-1])
        else:
            gamma = 1.0
        r = gamma * q
        
        for i in range(len(s_list)):
            beta = rho_list[i] * np.dot(y_list[i], r)
            r = r + s_list[i] * (alphas[-(i+1)] - beta)
        return -r

    def line_search(self, x, d, g, c=1e-4, tau=0.5):
        """Backtracking line search (Armijo condition)."""
        alpha = self.alpha
        f_x = self.func(x)
        while self.func(x + alpha * d) > f_x + c * alpha * np.dot(g, d):
            alpha *= tau
        return alpha

    def minimize(self, x0):
        x = x0.astype(float)
        s_list, y_list, rho_list = [], [], []
        g = self.grad(x)

        for k in range(self.max_iter):
            if np.linalg.norm(g) < self.tol:
                print(f"Converged in {k} iterations.")
                break
            
            # Compute direction
            d = self.two_loop_recursion(g, s_list, y_list, rho_list)
            
            # Line search
            alpha = self.line_search(x, d, g)
            
            # Update
            x_new = x + alpha * d
            g_new = self.grad(x_new)
            
            s = x_new - x
            y = g_new - g
            rho = 1.0 / np.dot(y, s) if np.dot(y, s) > 1e-10 else 0.0
            
            if rho > 0:  # Store correction pairs
                if len(s_list) == self.m:
                    s_list.pop(0)
                    y_list.pop(0)
                    rho_list.pop(0)
                s_list.append(s)
                y_list.append(y)
                rho_list.append(rho)
            
            x, g = x_new, g_new

        return x


# ------------------------------
# Example: minimize f(x) = (x-3)^2 + (y+1)^2
# ------------------------------
def f(v):
    x, y = v
    return (x - 3)**2 + (y + 1)**2

def grad(v):
    x, y = v
    return np.array([2*(x - 3), 2*(y + 1)])

optimizer = LBFGSOptimizer(f, grad, m=5, max_iter=100)
x0 = np.array([0.0, 0.0])
opt_x = optimizer.minimize(x0)
print("Optimal solution:", opt_x)
print("f(opt_x) =", f(opt_x))

```
