
# Second Order Linear Differential Equations

Second order linear differential equations are fundamental in mathematics and have wide-ranging applications in science and engineering. They describe systems that exhibit a second-order response to external inputs or disturbances. These equations are crucial for modeling phenomena such as mechanical vibrations, electrical circuits, and thermal processes.

## Definition

A second order linear differential equation is an equation of the form:

$$
a \frac{d^2y}{dt^2} + b \frac{dy}{dt} + cy = f(t)
$$

where:
- $y(t)$ is the dependent variable.
- $t$ is the independent variable (usually time).
- $a, b, c$ are constants with $a \neq 0$.
- $f(t)$ is an input function.

The equation can be classified into three types based on the nature of $f(t)$:
1. **Homogeneous Equation**: When $f(t) = 0$, i.e.,

$$
a \frac{d^2y}{dt^2} + b \frac{dy}{dt} + cy = 0
$$

2. **Non-Homogeneous (or Forced) Equation**: When $f(t) \neq 0$.

3. **Cauchy-Euler Equation**: A special type of linear differential equation where the independent variable appears in the derivatives.

### General Solution

The general solution to a second order linear differential equation consists of two parts:
1. **Complementary Function (CF)**: The solution to the corresponding homogeneous equation.
2. **Particular Integral (PI)**: A particular solution to the non-homogeneous equation.

For a non-homogeneous equation, the general solution is given by:

$$
y(t) = y_{cf}(t) + y_{pi}(t)
$$

### Complementary Function

The complementary function $y_{cf}(t)$ is found by solving the characteristic equation:

$$
a r^2 + b r + c = 0
$$

The roots of this quadratic equation, $r_1$ and $r_2$, determine the form of $y_{cf}(t)$:

- **Distinct Real Roots**: If $r_1 \neq r_2$,

$$
y_{cf}(t) = C_1 e^{r_1 t} + C_2 e^{r_2 t}
$$

- **Repeated Real Root**: If $r_1 = r_2 = r$,

$$
y_{cf}(t) = (C_1 + C_2 t) e^{rt}
$$

- **Complex Roots**: If the roots are complex, say $r = \alpha \pm i\beta$,

$$
y_{cf}(t) = e^{\alpha t} (C_1 \cos(\beta t) + C_2 \sin(\beta t))
$$

### Particular Integral

The particular integral $y_{pi}(t)$ depends on the form of $f(t)$. Common methods to find $y_{pi}(t)$ include:
- **Undetermined Coefficients**
- **Variation of Parameters**

## Example

Consider the non-homogeneous second order linear differential equation:

$$
\frac{d^2y}{dt^2} + 4 \frac{dy}{dt} + 3y = e^{-t}
$$

### Step 1: Solve the Homogeneous Equation

The characteristic equation is:

$$
r^2 + 4r + 3 = 0
$$

Solving for $r$:

$$
(r + 1)(r + 3) = 0 \implies r = -1, -3
$$

Thus, the complementary function is:

$$
y_{cf}(t) = C_1 e^{-t} + C_2 e^{-3t}
$$

### Step 2: Find a Particular Integral

Since $f(t) = e^{-t}$, we try a particular integral of the form $y_{pi}(t) = A t e^{-t}$.

Substitute $y_{pi}(t)$ into the original equation:

$$
\frac{d^2}{dt^2} (A t e^{-t}) + 4 \frac{d}{dt} (A t e^{-t}) + 3 (A t e^{-t}) = e^{-t}
$$

Calculate the derivatives:

$$
y_{pi}(t) = A t e^{-t}
$$

$$
\frac{dy_{pi}}{dt} = A e^{-t} - A t e^{-t}
$$

$$
\frac{d^2y_{pi}}{dt^2} = -A e^{-t} - A e^{-t} + A t e^{-t} = -2A e^{-t} + A t e^{-t}
$$

Substitute back into the equation:

$$
(-2A e^{-t} + A t e^{-t}) + 4(A e^{-t} - A t e^{-t}) + 3(A t e^{-t}) = e^{-t}
$$

Simplify:

$$
-2A e^{-t} + A t e^{-t} + 4A e^{-t} - 4A t e^{-t} + 3A t e^{-t} = e^{-t}
$$

$$
(2A) e^{-t} = e^{-t}
$$

Solving for $A$:

$$
2A = 1 \implies A = \frac{1}{2}
$$

Thus, the particular integral is:

$$
y_{pi}(t) = \frac{1}{2} t e^{-t}
$$

### Step 3: General Solution

The general solution is:

$$
y(t) = y_{cf}(t) + y_{pi}(t)
$$

$$
y(t) = C_1 e^{-t} + C_2 e^{-3t} + \frac{1}{2} t e^{-t}
$$

## Properties

- **Superposition Principle**: If $y_1(t)$ and $y_2(t)$ are solutions to the homogeneous equation, then any linear combination $c_1 y_1(t) + c_2 y_2(t)$ is also a solution.
- **Linearity**: The differential operator $L$ defined by $L[y] = a \frac{d^2y}{dt^2} + b \frac{dy}{dt} + cy$ is linear, meaning $L[c_1 y_1(t) + c_2 y_2(t)] = c_1 L[y_1(t)] + c_2 L[y_2(t)]$.

## Applications

Second order linear differential equations are widely used in various fields:
- **Mechanical Engineering**: Modeling vibrations, oscillations, and structural dynamics.
- **Electrical Engineering**: Analyzing RLC circuits, AC analysis, and signal processing.
- **Control Theory**: Designing control systems for stability and performance.
- **Thermal Engineering**: Studying heat transfer processes.

These equations provide a powerful tool for understanding and predicting the behavior of physical systems under different conditions.
