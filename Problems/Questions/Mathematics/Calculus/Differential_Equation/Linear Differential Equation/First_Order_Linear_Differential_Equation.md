# First Order Linear Differential Equations

First order linear differential equations are a fundamental class of differential equations that have wide-ranging applications in various fields including mathematics, science, and engineering. These equations describe systems where the rate of change of a quantity depends linearly on the quantity itself and its derivative.

## Definition

A first order linear differential equation is an equation that can be written in the form:

$$
\frac{dy}{dt} + P(t)y = Q(t)
$$

where $y$ is the dependent variable, $t$ is the independent variable (often time), and $P(t)$ and $Q(t)$ are functions of $t$.

### Key Components:
- $\frac{dy}{dt}$: The derivative of $y$ with respect to $t$.
- **$P(t)y$**: A linear term involving the dependent variable $y$ and a function $P(t)$.
- **$Q(t)$**: A non-linear term that is a function of $t$.

### General Solution:
The general solution to a first order linear differential equation can be found using an integrating factor. The integrating factor $\mu(t)$ is given by:

$$
\mu(t) = e^{\int P(t) dt}
$$

Multiplying both sides of the differential equation by the integrating factor, we get:

$$
\mu(t)\frac{dy}{dt} + \mu(t)P(t)y = \mu(t)Q(t)
$$

The left-hand side of this equation is now the derivative of the product \( \mu(t)y \):

$$
\frac{d}{dt}\left(\mu(t)y\right) = \mu(t)Q(t)
$$

Integrating both sides with respect to \( t \), we obtain:

$$
\int \frac{d}{dt}\left(\mu(t)y\right) dt = \int \mu(t)Q(t) dt
$$

This simplifies to:

$$
\mu(t)y = \int \mu(t)Q(t) dt + C
$$

where $C$ is the constant of integration. Solving for $y$, we get the general solution:

$$
y(t) = e^{-\int P(t) dt} \left( \int e^{\int P(t) dt} Q(t) dt + C \right)
$$

## Example

Consider the first order linear differential equation:

$$
\frac{dy}{dt} + 2ty = t
$$

Here, $P(t) = 2t$ and $Q(t) = t$.

### Step-by-Step Solution:
1. **Find the integrating factor:**

$$
\mu(t) = e^{\int 2t dt} = e^{t^2}
$$

2. **Multiply both sides of the differential equation by the integrating factor:**

$$
e^{t^2}\frac{dy}{dt} + 2te^{t^2}y = te^{t^2}
$$

3. **Rewrite the left-hand side as a derivative:**

$$
\frac{d}{dt}\left(e^{t^2}y\right) = te^{t^2}
$$

4. **Integrate both sides with respect to \( t \):**

$$
e^{t^2}y = \int te^{t^2} dt + C
$$

5. **Evaluate the integral on the right-hand side:**

Let $u = t^2$, then $du = 2tdt$ or $td\left(\frac{u}{2}\right) = \frac{du}{2}$.

$$
\int te^{t^2} dt = \frac{1}{2}\int e^u du = \frac{1}{2}e^u + C_1 = \frac{1}{2}e^{t^2} + C_1
$$

6. **Substitute back into the equation:**

$$
e^{t^2}y = \frac{1}{2}e^{t^2} + C_1
$$

7. **Solve for $y(t)$:**

$$
y(t) = \frac{1}{2} + Ce^{-t^2}
$$

where $C = e^{-C_1}$.

## Properties

- **Existence and Uniqueness:** Under certain conditions on $P(t)$ and $Q(t)$, a unique solution exists for the initial value problem.
  
  - If $P(t)$ and $Q(t)$ are continuous on an interval $I$ containing $t_0$, then there exists a unique solution to the initial value problem $y(t_0) = y_0$.

- **Homogeneous Equation:** A first order linear differential equation is homogeneous if $Q(t) = 0$. The general solution to a homogeneous equation is:

$$
y_h(t) = Ce^{-\int P(t) dt}
$$

## Applications

First order linear differential equations are used in various fields, including:

- **Physics:** Modeling simple harmonic motion, RC circuits, and population growth.
  
- **Engineering:** Control systems, electrical circuits, and mechanical vibrations.

- **Machine Learning:** In the context of neural networks, first order linear differential equations can describe the dynamics of weights during training.

- **Economics:** Modeling supply and demand relationships, where the rate of change of price depends on current price and other factors.
