# Parabolic Partial Differential Equations (PDEs)

Parabolic partial differential equations are a class of PDEs that describe phenomena evolving over time and involving diffusion processes. They are crucial in various fields including physics, engineering, finance, and machine learning. These equations are characterized by the presence of a second-order spatial derivative term, which models the rate of change of a quantity with respect to space.

## Definition

A parabolic PDE is generally written in the form:

$$
a(x,t) \frac{\partial u}{\partial t} = b(x,t) \nabla^2 u + c(x,t) \nabla u + d(x,t)u + f(x,t)
$$

where:
- $u(x,t)$ is the unknown function.
- $a(x,t), b(x,t), c(x,t), d(x,t),$ and $f(x,t)$ are known functions of space $x$ and time $t$.
- $\nabla^2 u$ denotes the Laplacian operator, representing the sum of second partial derivatives with respect to each spatial variable.
- $\nabla u$ denotes the gradient operator.

A common example of a parabolic PDE is the heat equation:

$$
\frac{\partial u}{\partial t} = \alpha \nabla^2 u
$$

where:
- $\alpha$ is the thermal diffusivity.
- $u(x,t)$ represents the temperature at position $x$ and time $ t$.

### Example

Consider the heat equation in one dimension:

$$
\frac{\partial u}{\partial t} = \alpha \frac{\partial^2 u}{\partial x^2}
$$

with initial condition:

$$
u(x,0) = f(x)
$$

and boundary conditions:

$$
u(0,t) = 0, \quad u(L,t) = 0
$$

To solve this equation, we can use the method of separation of variables. Assume a solution of the form:

$$
u(x,t) = X(x)T(t)
$$

Substituting into the heat equation gives:

$$
X(x) \frac{dT}{dt} = \alpha T(t) \frac{d^2X}{dx^2}
$$

Dividing both sides by $\alpha XT$:

$$
\frac{1}{\alpha T} \frac{dT}{dt} = \frac{1}{X} \frac{d^2X}{dx^2}
$$

Since the left side depends only on $t$ and the right side depends only on $x$, both sides must be equal to a constant, say $-\lambda$:

$$
\frac{1}{\alpha T} \frac{dT}{dt} = -\lambda
$$

$$
\frac{1}{X} \frac{d^2X}{dx^2} = -\lambda
$$

Solving the time-dependent equation:

$$
\frac{dT}{dt} = -\alpha \lambda T
$$

The solution is:

$$
T(t) = C_1 e^{-\alpha \lambda t}
$$

Solving the spatial equation:

$$
\frac{d^2X}{dx^2} + \lambda X = 0
$$

with boundary conditions $X(0) = 0$ and $X(L) = 0$, we get:

$$
X(x) = C_2 \sin(\sqrt{\lambda} x)
$$

Using the boundary condition $X(0) = 0$:

$$
C_2 \sin(0) = 0
$$

This implies $C_2 = 0$ or $\sin(\sqrt{\lambda} L) = 0$. The latter gives:

$$
\sqrt{\lambda} L = n\pi \quad \text{for} \quad n = 1, 2, 3, \ldots
$$

Thus, $\lambda_n = \left( \frac{n\pi}{L} \right)^2$.

The general solution is:

$$
u(x,t) = \sum_{n=1}^{\infty} C_n e^{-\alpha \left( \frac{n\pi}{L} \right)^2 t} \sin\left( \frac{n\pi x}{L} \right)
$$

Using the initial condition $u(x,0) = f(x)$:

$$
f(x) = \sum_{n=1}^{\infty} C_n \sin\left( \frac{n\pi x}{L} \right)
$$

The coefficients $C_n$ are determined by:

$$
C_n = \frac{2}{L} \int_0^L f(x) \sin\left( \frac{n\pi x}{L} \right) dx
$$

Thus, the solution to the heat equation is:

$$
u(x,t) = \sum_{n=1}^{\infty} C_n e^{-\alpha \left( \frac{n\pi}{L} \right)^2 t} \sin\left( \frac{n\pi x}{L} \right)
$$

## Properties

- **Energy Dissipation**: Parabolic PDEs often describe systems where energy is dissipated over time, leading to a smoothing effect.

$$
\int_{\Omega} u^2(x,t) dx \leq \int_{\Omega} u_0^2(x) dx
$$

- **Maximum Principle**: For certain parabolic PDEs, the maximum value of $u(x,t)$ over a region is bounded by the initial and boundary values.

## Applications

Parabolic PDEs have numerous applications in various fields:

- **Physics**: Heat transfer, diffusion processes, wave propagation.
- **Engineering**: Structural analysis, fluid dynamics, heat conduction.
- **Finance**: Pricing of financial derivatives (Black-Scholes equation).
- **Machine Learning**: Diffusion models for image generation and restoration.

These equations are essential for modeling and understanding phenomena that evolve over time and involve spatial diffusion.