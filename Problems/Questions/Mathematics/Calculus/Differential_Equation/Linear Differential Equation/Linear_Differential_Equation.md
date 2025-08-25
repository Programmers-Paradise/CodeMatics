# Linear Differential Equations

Linear differential equations are a class of ordinary differential equations (ODEs) in which the unknown function and its derivatives appear only to the first power and are not multiplied by each other. They play a crucial role in various fields of science and engineering due to their ability to model many real-world phenomena.

## Definition

A linear differential equation is an equation that can be written in the form:

$$
a_n(x) \frac{d^n y}{dx^n} + a_{n-1}(x) \frac{d^{n-1} y}{dx^{n-1}} + \cdots + a_1(x) \frac{dy}{dx} + a_0(x) y = g(x)
$$

where $a_n(x), a_{n-1}(x), \ldots, a_1(x), a_0(x)$ are continuous functions on an interval $I$ and $g(x)$ is also a continuous function on $I$. The term $g(x)$ is known as the non-homogeneous part of the equation. If $g(x) = 0$, then the equation is called homogeneous.

### Homogeneous Linear Differential Equations

A linear differential equation is homogeneous if it can be written in the form:

$$
a_n(x) \frac{d^n y}{dx^n} + a_{n-1}(x) \frac{d^{n-1} y}{dx^{n-1}} + \cdots + a_1(x) \frac{dy}{dx} + a_0(x) y = 0
$$

### Non-Homogeneous Linear Differential Equations

A linear differential equation is non-homogeneous if it can be written in the form:

$$
a_n(x) \frac{d^n y}{dx^n} + a_{n-1}(x) \frac{d^{n-1} y}{dx^{n-1}} + \cdots + a_1(x) \frac{dy}{dx} + a_0(x) y = g(x)
$$

where $g(x)$ is not identically zero.

## Example

Consider the following non-homogeneous linear differential equation:

$$
y'' - 3y' + 2y = e^x
$$

### Step-by-Step Solution

1. **Find the complementary function (CF):**

   The complementary function is the solution to the corresponding homogeneous equation:

$$
y'' - 3y' + 2y = 0
$$

   To find the roots of the characteristic equation, we solve:

$$
r^2 - 3r + 2 = 0
$$

   Factoring the quadratic equation, we get:

$$
(r-1)(r-2) = 0
$$

   So, the roots are $r_1 = 1$ and $r_2 = 2$.

   Therefore, the complementary function is:

$$
y_c(x) = C_1 e^x + C_2 e^{2x}
$$

2. **Find the particular integral (PI):**

   For a non-homogeneous term $e^x$, we assume a particular solution of the form:

$$
y_p(x) = Ae^x
$$

   Substitute $y_p(x)$ into the original differential equation:

$$
(Ae^x)'' - 3(Ae^x)' + 2(Ae^x) = e^x
$$

   Simplifying, we get:

$$
Ae^x - 3Ae^x + 2Ae^x = e^x
$$

$$
0 = e^x
$$

   This indicates that our assumed form is not correct. Since $e^x$ is already part of the complementary function, we need to modify our guess. We try:

$$
y_p(x) = Axe^x
$$

   Substitute $y_p(x)$ into the original differential equation:

$$
(Axe^x)'' - 3(Axe^x)' + 2(Axe^x) = e^x
$$

Calculate the derivatives:

$$
y_p'(x) = Ae^x + Axe^x
$$

$$
y_p''(x) = Ae^x + Ae^x + Axe^x = (2A + Ax)e^x
$$

Substitute back into the differential equation:

$$
(2A + Ax)e^x - 3(Ae^x + Axe^x) + 2Axe^x = e^x
$$

Simplify:

$$
(2A + Ax - 3A - 3Ax + 2Ax)e^x = e^x
$$

$$
(-A)e^x = e^x
$$

Solving for $A$:

$$
A = -1
$$

Therefore, the particular integral is:

$$
y_p(x) = -xe^x
$$

3. **General solution:**

   The general solution to the non-homogeneous differential equation is the sum of the complementary function and the particular integral:

$$
y(x) = y_c(x) + y_p(x)
$$

$$
y(x) = C_1 e^x + C_2 e^{2x} - xe^x
$$

## Properties

- **Superposition Principle:** If $y_1(x)$ and $y_2(x)$ are solutions to the homogeneous equation, then any linear combination $C_1 y_1(x) + C_2 y_2(x)$ is also a solution.
  
- **Existence and Uniqueness Theorem:** For a non-homogeneous linear differential equation with continuous coefficients on an interval $I$, there exists a unique solution that satisfies the initial conditions.

## Applications

Linear differential equations are widely used in various fields:

- **Physics:** Modeling oscillations, heat transfer, electrical circuits, and fluid dynamics.
  
- **Engineering:** Designing control systems, analyzing mechanical vibrations, and optimizing processes.
  
- **Machine Learning:** In neural networks for modeling relationships between variables, especially in regression analysis.

Linear differential equations provide a powerful tool for understanding and predicting the behavior of complex systems in science and engineering.