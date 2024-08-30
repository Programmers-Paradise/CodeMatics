# Differential Equations 

## Easy: Euler's Method for Solving Ordinary Differential Equations

Implement Euler's Method to solve a first-order ordinary differential equation (ODE).

**Function Signature:**
```c
void eulers_method(double (*f)(double, double), double y0, double a, double b, int n, double* t, double* y);
```

**Problem Description:**
Write a function that uses Euler's Method to approximate the solution of an ODE. Euler's Method is a basic numerical method for solving initial value problems.

**Example ODE:** 
dy/dt = y, y(0) = 1 (solution: y = e^t)

**Euler's Method Formula:**
y_(n+1) = y_n + h * f(t_n, y_n)
where h = (b - a) / n is the step size

## Medium: Runge-Kutta 4th Order Method for Solving ODEs

Implement the Runge-Kutta 4th Order Method to solve a first-order ordinary differential equation (ODE).

**Function Signature:**
```c
void runge_kutta_4(double (*f)(double, double), double y0, double a, double b, int n, double* t, double* y);
```

**Problem Description:**
Write a function that uses the Runge-Kutta 4th Order Method to approximate the solution of an ODE. This method is more accurate than Euler's Method and is widely used in practice.

**Example ODE:** 
dy/dt = -2t*y, y(0) = 1 (solution: y = exp(-t^2))

**Runge-Kutta 4th Order Method Formula:**
```
k1 = h * f(t_n, y_n)
k2 = h * f(t_n + h/2, y_n + k1/2)
k3 = h * f(t_n + h/2, y_n + k2/2)
k4 = h * f(t_n + h, y_n + k3)
y_(n+1) = y_n + (k1 + 2k2 + 2k3 + k4) / 6
```
where h = (b - a) / n is the step size

## Hard: Finite Difference Method for Solving the Heat Equation (Partial Differential Equation)

Implement the Finite Difference Method to solve the 1D Heat Equation.

**Function Signature:**
```c
void solve_heat_equation(int nx, int nt, double Lx, double Lt, double alpha, double* u);
```

**Problem Description:**
Write a function that uses the Finite Difference Method to approximate the solution of the 1D Heat Equation. The Heat Equation is a partial differential equation that describes how the temperature of a body changes over time.

**Heat Equation:** 
du/dt = alpha * (d^2u/dx^2)

**Initial Condition:** 
u(x, 0) = sin(π*x/Lx)

**Boundary Conditions:** 
u(0, t) = u(Lx, t) = 0

**Finite Difference Method Formula:**
u[i][j+1] = u[i][j] + alpha * (dt/dx^2) * (u[i-1][j] - 2*u[i][j] + u[i+1][j])
where dx = Lx / nx and dt = Lt / nt

For each problem, implement the required function and use the provided main function to test your solution. Good luck!
