# Multi-Armed Bandits

## Introduction

Multi-armed bandits are a fundamental concept in reinforcement learning and decision-making under uncertainty. They model the dilemma of balancing exploration (discovering new options) with exploitation (choosing known good options). This problem is crucial in various fields, including machine learning, economics, and game theory, where optimizing decisions over time is essential.

## Definition

The multi-armed bandit problem involves an agent interacting with $K$ arms. Each arm $k$ has a reward distribution with unknown mean $\mu_k$ . At each time step $t = 1, 2, \ldots, T$:

1. The agent selects an arm $A_t$ .
2. Observes a reward $r_t \sim \text{Distribution}(\mu_{A_t})$.

The goal is to maximize cumulative rewards or minimize regret, defined as the difference between the best possible reward and actual rewards obtained:

$$
R(T) = \sum_{t=1}^{T} (\mu^* - \mu_{A_t})
$$

where $\mu^*$ is the maximum mean reward.

## Example

Consider two arms with known means $\mu_1 = 0.5$, $\mu_2 = 0.7$ and rewards following Bernoulli distributions. Over $T=10$ steps:

- At each step $t$, select arm $A_t$ .
- Observe reward $r_t$ .
- Update estimates of $\mu_k$ using sample averages.

Using an $\epsilon$-greedy strategy with $\epsilon=0.1$:
- Exploitation probability = 90% for the best arm (μ₂).
- Exploration probability = 10% across all arms.

After $T$ steps, calculate cumulative rewards and compare to optimal.

## Properties

### ε-Greedy Strategy
At each step $t$:

$$
A_t = \arg \max_k \hat{\mu}_k(t)
$$

with probability (1 - $\epsilon$), or randomly select an arm with probability $\epsilon$.

### Upper Confidence Bound (UCB1)
Uses confidence intervals to balance exploration and exploitation:

$$
UCB_k(t) = \hat{\mu}_k(t) + c\sqrt{\frac{\ln t}{N_k(t)}}
$$

where $N_k(t)$ is the number of times arm $k$ has been selected.

### Regret Bounds
For $\epsilon$-greedy, regret grows as $O(\sqrt{T})$ . For UCB1, it achieves logarithmic regret: $O(K \log T)$.

## Applications

- **Reinforcement Learning**: Guides policy selection and exploration strategies.
- **Clinical Trials**: Optimizes treatment allocation to find the most effective quickly.
- **Online Advertising**: Maximizes click-through rates by testing ad placements.
- **Economics**: Models optimal resource allocation under uncertainty.

Multi-armed bandits are versatile, enhancing decision-making in diverse real-world applications.