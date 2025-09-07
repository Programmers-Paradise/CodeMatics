# Cost Allocation Problems

## Introduction
**Cost allocation problems** are a central application of cooperative game theory. They address a common and fundamental challenge: when a group of individuals or firms cooperates to build or use a shared resource, how should the total cost be divided among them in a way that is both **stable** and **fair**? This field provides a rigorous mathematical framework for analyzing such situations, with direct applications in economics, operations research, public policy, and machine learning.

## Modeling the Problem: The Cost Game
A cost allocation problem is formally modeled as a **cooperative game**.
-   **Players ($N$)**: The set of agents (individuals, firms, departments) who need to share the cost.
-   **The Characteristic Cost Function ($`c(S)`$)**: The game is defined by a cost function, $c(S)$, which specifies the minimum cost that any subgroup (coalition) $S$ would have to pay if it decided to undertake the project on its own, without the other players.

A key property of many cost games is **subadditivity**, which means that cooperation is beneficial (there are economies of scale). Formally, for any two disjoint coalitions $S$ and $T$:

$$c(S \cup T) \le c(S) + c(T)$$

This means the cost of building one large project is less than or equal to the cost of building two separate smaller projects.

## Solution Concepts: What is a "Fair" Allocation?
The goal is to find a cost allocation vector $\mathbf{x}=(x_1, x_2, \dots, x_n)$ that divides the total cost of the grand coalition, $c(N)$. There are two primary solution concepts for what constitutes a "good" allocation.

### 1. The Core (A Concept of Stability)
The Core is the set of all cost allocations that are stable because no subgroup has an incentive to break away. A cost allocation $\mathbf{x}$ is in the Core if:
1.  **Efficiency**: The total allocated cost equals the total project cost: $\sum_{i \in N} x_i = c(N)$.
2.  **Coalitional Rationality**: No subgroup is charged more than what it would cost them to complete the project on their own: $\sum_{i \in S} x_i \le c(S)$ for all coalitions $S$.
If an allocation is not in the Core, it is unstable because some subgroup is being "overcharged" and has a rational incentive to secede.

### 2. The Shapley Value (A Concept of Fairness)
The Shapley value provides a single, unique allocation that is considered "fair" based on each player's average marginal contribution. For cost games, this is typically done by first converting the problem into a **savings game**.
1.  **The Savings Game**: We define a new value function, $v(S)$, which represents the cost savings that a coalition $S$ achieves by cooperating, compared to its members acting alone.
    $$v(S) = \left( \sum_{i \in S} c(\{i\}) \right) - c(S)$$
2.  **Calculate Shapley Value**: We then calculate the Shapley value, $\phi_i(v)$, for each player in this savings game. This gives each player their "fair share" of the total savings.
3.  **Final Cost Allocation**: The final cost allocated to player $i$ is their standalone cost minus their fair share of the savings:
    $$x_i = c(\{i\}) - \phi_i(v)$$

## Example: The Airport Problem
This is a classic and intuitive cost allocation problem.
**Problem**: Three airlines need to use a single runway.
-   Airline A (Small Jet) needs a runway of length 1. Cost = $c(\{A\}) = 90$.
-   Airline B (Medium Jet) needs a runway of length 2. Cost = $c(\{B\}) = 150$.
-   Airline C (Large Jet) needs a runway of length 3. Cost = $c(\{C\}) = 180$.

**The Characteristic Cost Function**: The cost of a coalition is the cost of the longest runway required by any of its members.
-   $c(\{A\}) = 90$, $c(\{B\}) = 150$, $c(\{C\}) = 180$.
-   $c(\{A,B\}) = 150$ (a medium runway serves both).
-   $c(\{A,C\}) = 180$, $c(\{B,C\}) = 180$.
-   $c(\{A,B,C\}) = 180$ (a large runway serves all).

**The Solution (using the Shapley Value)**:
The problem is how to fairly divide the total cost of $180. A simple analysis using the Shapley value on the corresponding savings game yields the following unique cost allocation:
-   **Airline A pays**: $30$
-   **Airline B pays**: $50$
-   **Airline C pays**: $100$

**Intuition**: The cost of the basic runway ($90) is shared by all three. The incremental cost of extending it for the medium jet ($150-90=60$) is shared by B and C. The final incremental cost ($180-150=30$) is borne by C alone. This gives an allocation of A: $90/3=30$; B: $30+60/2=60$; C: $30+30+30=90$. The Shapley value is a more sophisticated version of this intuitive marginal cost pricing.

## Applications
1.  **Public Utilities and Infrastructure**: The primary application. Fairly allocating the cost of shared infrastructure like an airport, a water treatment plant, or a power grid among different users or municipalities.
2.  **Business and Supply Chains**: For distributing the costs of a joint venture, a shared logistics network, or a cooperative purchasing agreement among partner firms.
3.  **Machine Learning (Explainable AI)**: The principles of fair allocation from the Shapley value are the foundation of **SHAP (SHapley Additive exPlanations)**. This technique "allocates" the "credit" for a model's prediction among the different input features, providing a fair assessment of each feature's importance.
4.  **Environmental Policy**: For allocating the costs of pollution abatement among a group of firms or countries that share a common resource like an airshed or a river.