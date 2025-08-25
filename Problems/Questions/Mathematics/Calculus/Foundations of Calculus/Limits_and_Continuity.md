# Limits and Continuity in Calculus

## Introduction
Limits and continuity are the foundational concepts upon which calculus is built. The idea of a limit allows us to describe the behavior of a function as its input approaches a certain value, even if the function is not defined at that exact value. Continuity, in turn, uses limits to formally define the notion of a "smooth" or "unbroken" function, a property essential for the key operations of differentiation and integration.

## The Concept of a Limit

### Intuitive Definition
The **limit** of a function $f(x)$ as $x$ approaches a value $c$ is a number $L$, written as:

$$\lim_{x \to c} f(x) = L$$

This means that the value of $f(x)$ can be made arbitrarily close to $L$ by choosing an $x$ that is sufficiently close to $c$, but not equal to $c$.

### One-Sided Limits
For a limit to exist, the function must approach the same value from both the left and the right side.
-   **Left-Hand Limit**: $\lim_{x \to c^-} f(x)$ (as $x$ approaches $c$ from values less than $c$)
-   **Right-Hand Limit**: $\lim_{x \to c^+} f(x)$ (as $x$ approaches $c$ from values greater than $c$)
A limit exists if and only if the left-hand and right-hand limits exist and are equal: $\lim_{x \to c} f(x) = L \iff \lim_{x \to c^-} f(x) = \lim_{x \to c^+} f(x) = L$.

## Continuity

### Continuity at a Point
A function $f$ is **continuous** at a point $x=c$ if it meets three conditions:
1.  **$f(c)$ is defined** (the point exists on the graph).
2.  **$\lim_{x \to c} f(x)$ exists** (the function approaches a single value from both sides).
3.  **$\lim_{x \to c} f(x) = f(c)$** (the limit value is the same as the function's value).

Intuitively, a function is continuous at a point if you can draw its graph through that point without lifting your pencil.

### Types of Discontinuities
When a function is not continuous at a point, it has a discontinuity, which can be classified:
-   **Removable Discontinuity**: Occurs when the limit exists, but it does not equal the function's value (either because $f(c)$ is different or undefined). This appears as a "hole" in the graph.
-   **Jump Discontinuity**: Occurs when the left-hand and right-hand limits exist but are not equal. This is common in piecewise functions.
-   **Infinite Discontinuity**: Occurs when one or both of the one-sided limits approach $\pm\infty$. This corresponds to a vertical asymptote.

## Examples

**1. A Continuous Function**
Consider the function $f(x) = x^2$ at $x=2$.
1.  $f(2) = 2^2 = 4$ (is defined).
2.  $\lim_{x \to 2} x^2 = 4$ (exists).
3.  $\lim_{x \to 2} f(x) = f(2)$.
Since all conditions are met, $f(x)$ is continuous at $x=2$.

**2. A Removable Discontinuity**
Consider the function $g(x) = \frac{x^2 - 9}{x - 3}$ at $x=3$.
1.  $g(3)$ is undefined (division by zero).
2.  However, the limit exists: $\lim_{x \to 3} \frac{(x-3)(x+3)}{x-3} = \lim_{x \to 3} (x+3) = 6$.
Since the limit exists but the function is not defined at the point, this is a removable discontinuity.

## Properties and Key Theorems

### Limit Laws
If $\lim_{x \to c} f(x)$ and $\lim_{x \to c} g(x)$ exist, then:
-   **Sum/Difference**: $\lim_{x \to c} [f(x) \pm g(x)] = \lim f(x) \pm \lim g(x)$
-   **Product**: $\lim_{x \to c} [f(x) \cdot g(x)] = (\lim f(x)) \cdot (\lim g(x))$
-   **Quotient**: $\lim_{x \to c} \frac{f(x)}{g(x)} = \frac{\lim f(x)}{\lim g(x)}$ (provided $\lim g(x) \neq 0$)

### Properties of Continuous Functions
If $f$ and $g$ are continuous at $x=c$, then so are their sum, difference, product, constant multiple, and composition. Their quotient $\frac{f}{g}$ is also continuous, provided $g(c) \neq 0$.

### The Intermediate Value Theorem (IVT)
If a function $f$ is continuous on a closed interval $[a, b]$, then it takes on every value between $f(a)$ and $f(b)$. A key consequence is that if $f(a)$ and $f(b)$ have opposite signs, there must be at least one root (a point $c$ where $f(c)=0$) in the interval $(a, b)$.

## Applications
-   **Physics**: The very definition of a derivative, such as instantaneous velocity, is a limit:
    $$v(t) = \lim_{\Delta t \to 0} \frac{\Delta s}{\Delta t} = \frac{ds}{dt}$$
    Continuity is assumed in classical mechanics, ensuring that objects cannot teleport and that physical properties like temperature change smoothly.

-   **Engineering**: Continuity is crucial in structural analysis and material science. Stress and strain distributions in a material under load are modeled with continuous functions to ensure there are no abrupt weak points that could lead to catastrophic failure.

-   **Economics**: Many economic models assume continuous supply and demand functions. The Intermediate Value Theorem can be used to prove that a price equilibrium (where supply equals demand) must exist under certain conditions.

-   **Computer Science and Machine Learning**: In optimization algorithms like gradient descent, the cost function is often required to be continuous and differentiable so that its slope (gradient) can be reliably calculated to find a minimum. Activation functions in neural networks (like sigmoid or tanh) are continuous to allow for stable training.