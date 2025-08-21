# Regret Minimization

## Introduction

Regret minimization is a fundamental concept in learning theory that deals with sequential decision-making under uncertainty. It involves making choices at each step based on past information, aiming to minimize the difference between our cumulative loss and the best possible loss we could have achieved by consistently choosing the optimal action. This framework is crucial in various fields such as machine learning, finance, game theory, and operations research.

## Definition

Regret minimization can be formally defined using mathematical notation. Let $T$ denote the number of rounds or steps. At each round $t$ , a loss function $L_t: \mathcal{A} \rightarrow \mathbb{R}$ is revealed, where $\mathcal{A}$ is the set of possible actions. The decision-maker selects an action $i_t \in \mathcal{A}$. The regret after $T$ steps is defined as:

$$
R_T = \sum_{t=1}^{T} (L_t(i^*) - L_t(i_t))
$$

where $i^*$ is the best action in hindsight, i.e.,

$$
i^* = \arg \min_{i \in \mathcal{A}} \sum_{t=1}^{T} L_t(i)
$$

The goal is to design algorithms that minimize this regret over time.

## Example

Consider a simple scenario with two actions $A_1$ and $A_2$ , and three rounds. The losses are as follows:

- Round 1: $L_1(A_1) = 5, L_1(A_2) = 3$
- Round 2: $L_2(A_1) = 2, L_2(A_2) = 4$
- Round 3: $L_3(A_1) = 1, L_3(A_2) = 5$

Assume the decision-maker chooses actions in the order $A_1, A_2, A_2$ . The cumulative losses are:

$$
\sum_{t=1}^{3} L_t(A_1) = 5 + 2 + 1 = 8
$$

$$
\sum_{t=1}^{3} L_t(A_2) = 3 + 4 + 5 = 12
$$

The best action in hindsight is $A_1$ , with a cumulative loss of 8. The regret for the decision-maker's choices is:

$$
R_3 = (8 - 8) + (12 - 9) + (12 - 10) = 0 + 3 + 2 = 5
$$

This example illustrates how regret measures the suboptimality of decisions made sequentially.

## Properties

### Adversarial vs. Stochastic Settings

In adversarial settings, an adversary chooses the losses to maximize regret, while in stochastic settings, losses are drawn from fixed distributions. Algorithms perform differently in each setting:

- **Adversarial**: Regret bounds typically have a linear dependence on $T$, e.g., $R_T = O(T)$.
- **Stochastic**: Regret grows sub-linearly, e.g., $R_T = O(\sqrt{T})$.

### Time Complexity

Algorithms aiming to minimize regret often involve trade-offs between exploration and exploitation. For example, the EXP-3 algorithm for multi-armed bandits has a time complexity of $O(K\sqrt{T})$, where $K$ is the number of actions.

### Regret Bounds

For adversarial losses bounded in [0,1], the minimax regret bound is:

$$
R_T \leq C\sqrt{T}
$$

where $C$ is a constant. This bound shows that regret grows at an optimal sub-linear rate.

## Applications

### Machine Learning

- **Online Learning**: Algorithms like EXP-3 and UCB are used for regret minimization in multi-armed bandits.
- **Reinforcement Learning**: Minimizing regret helps agents learn optimal policies efficiently.

### Game Theory

- **Repeated Games**: Players minimize regret to converge to Nash equilibria, ensuring no player can benefit by changing strategies unilaterally.

### Finance

- **Portfolio Selection**: Algorithms minimize regret in dynamic asset allocation, balancing risk and return over time.

### E-commerce

- **Dynamic Pricing**: Regret minimization optimizes pricing strategies based on demand feedback, minimizing revenue loss from suboptimal prices.

## Conclusion

Regret minimization is a powerful framework for sequential decision-making under uncertainty. By understanding its definition, properties, and applications, we can design algorithms that make optimal choices over time, reducing the gap between actual performance and the best possible outcome.