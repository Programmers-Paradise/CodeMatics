# Stochastic and Robust Optimization

## Introduction
Classical optimization assumes that all problem parameters are known with certainty. However, most real-world decisions must be made in the face of uncertainty. **Stochastic Optimization (SO)** and **Robust Optimization (RO)** are two powerful frameworks for decision-making under uncertainty. They provide principled ways to formulate and solve optimization problems where some data is unknown or subject to change. These methodologies are crucial in fields like finance, engineering, logistics, and machine learning, where accounting for variability is essential for making effective and reliable decisions.

## The Fundamental Difference: Modeling Uncertainty
The choice between stochastic and robust optimization depends on how uncertainty is modeled and the decision-maker's attitude towards risk.

-   **Stochastic Optimization (SO)**: Assumes uncertainty is probabilistic. It models unknown parameters as **random variables** with a known or estimated **probability distribution**.
    -   **Philosophy**: "Optimize for the average case." The goal is to find a solution that performs best in expectation, over all possible future scenarios.

-   **Robust Optimization (RO)**: Assumes uncertainty is adversarial and bounded. It models unknown parameters as belonging to a well-defined **uncertainty set**, without making any assumptions about probabilities.
    -   **Philosophy**: "Prepare for the worst case." The goal is to find a solution that is feasible and performs as well as possible, no matter what happens, as long as the uncertain parameters stay within their predefined set.

---

## Stochastic Optimization (SO)
Stochastic Optimization deals with problems where some parameters are random. The goal is typically to optimize an expected value.

**Formulation:**
A common formulation is to minimize the expected value of an objective function that depends on a decision variable $\mathbf{x}$ and a random variable $\boldsymbol{\xi}$:

$$\min_{\mathbf{x}} \mathbb{E}[f(\mathbf{x}, \boldsymbol{\xi})]$$

Constraints can also be probabilistic, such as **chance constraints**, which require a constraint to hold with at least a certain probability:$$\mathbb{P}(g(\mathbf{x}, \boldsymbol{\xi}) \leq 0) \geq 1 - \epsilon$$

**Key Characteristics:**
-   Requires knowledge of the probability distribution of the uncertain parameters.
-   Solutions are optimal on average but offer no hard guarantee for a single, specific outcome.
-   Often solved using techniques like Sample Average Approximation (SAA) or by formulating them as two-stage/multi-stage problems with recourse.

---

## Robust Optimization (RO)
Robust Optimization seeks a solution that is immune to all possible realizations of the uncertain parameters within a given set.

**Formulation:**
The goal is to find a solution $\mathbf{x}$ that is feasible for all possible parameter values $\mathbf{u}$ within an uncertainty set $U$. The objective is often to minimize the worst-case outcome:

$$\min_{\mathbf{x}} \max_{\mathbf{u} \in U} f(\mathbf{x}, \mathbf{u})$$

Subject to constraints that must hold for all possibilities:

$$g(\mathbf{x}, \mathbf{u}) \leq 0 \quad \forall \mathbf{u} \in U$$

**Key Characteristics:**
-   Does not require a probability distribution, only a bounded uncertainty set.
-   Provides a hard guarantee that the solution will remain feasible and the objective will not exceed the worst-case value.
-   Can be overly **conservative**, as it prepares for a worst-case scenario that may be extremely unlikely.

---

## Comparative Example: The Newsvendor Problem
**Problem:** A company must decide on a production quantity $x$ for a product where the customer demand $d$ is uncertain but is known to be in the range $[100, 200]$. The cost function, representing overage and underage costs, is $f(x, d) = (x - d)^2$.

### Stochastic Optimization Approach
Assume demand $d$ follows a **uniform distribution** over $[100, 200]$. The goal is to minimize the expected cost.

$$\min_{x} \mathbb{E}[(x - d)^2] = \min_{x} \int_{100}^{200} (x - d)^2 \cdot \frac{1}{100} dd$$

To find the minimum, we take the derivative with respect to $x$ and set it to zero:

$$\frac{d}{dx} \mathbb{E}[f] = \int_{100}^{200} 2(x - d) \cdot \frac{1}{100} dd = 0$$

Solving this gives $x^* = \frac{100+200}{2} = 150$. The optimal decision is to produce the **mean** of the demand distribution.

### Robust Optimization Approach
Assume demand $d$ can be **any value** in the uncertainty set $U=[100, 200]$. We don't know the probabilities. The goal is to minimize the cost in the **worst-case** scenario.

$$\min_{x} \max_{d \in [100, 200]} (x - d)^2$$

For a fixed production quantity $x$, the worst-case demand (the one that maximizes the squared error) will be the value in the range $[100, 200]$ that is farthest from $x$. The minimax solution is to choose $x$ such that the worst-case cost is minimized. This occurs when the distance to both endpoints is equal, which means choosing the midpoint of the interval:

$$x - 100 = 200 - x \implies 2x = 300 \implies x^* = 150$$


In this simple case, the solutions are the same, but for more complex objectives, the robust solution is often more conservative.

---

## Applications
1.  **Finance**:
    -   **SO**: Used in portfolio optimization to maximize expected return based on probabilistic models of asset prices.
    -   **RO**: Used to construct portfolios that perform well even under the worst-case market movements within a plausible range.
2.  **Energy Systems**:
    -   **SO**: For unit commitment problems, scheduling power generation to minimize expected cost given the probabilistic nature of demand and renewable energy (wind/solar) output.
    -   **RO**: To create a power generation schedule that is guaranteed to meet demand, no matter how the renewable output varies within its uncertainty set.
3.  **Logistics and Supply Chain Management**:
    -   **SO**: For inventory management, to set stock levels that are optimal on average given a probability distribution of customer demand.
    -   **RO**: To design a supply chain network that remains operational and efficient even under worst-case disruptions.
4.  **Machine Learning**:
    -   **SO**: Stochastic Gradient Descent (SGD) is a form of stochastic optimization where the expectation (over the full dataset's loss) is approximated using random mini-batches.
    -   **RO**: Used in adversarial training to make models robust to small, worst-case perturbations of the input data.