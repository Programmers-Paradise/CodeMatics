# Multiplicative Weights Update Method 

## Introduction

The Multiplicative Weights Update (MWU) method is a fundamental technique in learning theory used to combine expert advice or hypotheses in an online setting. It dynamically adjusts the weights of each expert based on their past performance, allowing the algorithm to adapt and perform well even when the optimal expert changes over time. This method is crucial in machine learning for optimization and decision-making under uncertainty.

## Definition

The MWU method maintains a distribution over a set of experts (or hypotheses) and updates these weights multiplicatively after each round based on their performance. Formally, given $N$ experts and $T$ rounds, the update rule is defined as:

$$
\mu_{t+1}(i) = \mu_t(i) \cdot (1 - \eta \cdot L_i(t))
$$

where:
- $\mu_t(i)$ is the weight of expert $i$ at round $t$ ,
- $\eta > 0$ is the learning rate,
- $L_i(t)$ is the loss incurred by expert $i$ at round $t$.

The weights are normalized to form a probability distribution:

$$
\mu_{t+1}(i) = \frac{\mu_{t+1}(i)}{\sum_{j=1}^{N} \mu_{t+1}(j)}
$$

Additionally, the final hypothesis is often represented as an average of experts' predictions weighted by their accumulated performance:

$$
H(x) = \arg \max_{h \in H} \sum_{t=1}^{T} w_t(h) \cdot I(h(x) \neq y_t)
$$

where $w_t(h)$ are the weights assigned to hypothesis $h$.

### Key Equations

- **Update Rule**: 

$$
\mu_{t+1}(i) = \mu_t(i) \cdot (1 - \eta \cdot L_i(t))
$$
  
- **Normalized Weights**:

$$
\mu_{t+1}(i) = \frac{\mu_{t+1}(i)}{\sum_{j=1}^{N} \mu_{t+1}(j)}
$$

## Example

Consider a simple example with two experts ($N = 2$) and three rounds ($T = 3$). Let the learning rate $\eta = 0.1$.

**Initialization**: 

$$
\mu_1(1) = \mu_1(2) = 0.5
$$

**Round 1**:
- Expert 1 incurs loss $L_1(1) = 0.3$.
- Expert 2 incurs loss $L_2(1) = 0.7$.

**Update Weights**:

$$
\mu_2(1) = 0.5 \cdot (1 - 0.1 \cdot 0.3) = 0.485
$$

$$
\mu_2(2) = 0.5 \cdot (1 - 0.1 \cdot 0.7) = 0.465
$$

**Normalize Weights**:

$$
\mu_2(1) = \frac{0.485}{0.485 + 0.465} = 0.513, \quad \mu_2(2) = \frac{0.465}{0.95} = 0.487
$$

**Round 2**:
- Expert 1 incurs loss $L_1(2) = 0.2$.
- Expert 2 incurs loss $L_2(2) = 0.4$.

**Update Weights**:

$$
\mu_3(1) = 0.513 \cdot (1 - 0.1 \cdot 0.2) = 0.513 \cdot 0.98 = 0.502
$$

$$
\mu_3(2) = 0.487 \cdot (1 - 0.1 \cdot 0.4) = 0.487 \cdot 0.96 = 0.468
$$

**Normalize Weights**:

$$
\mu_3(1) = \frac{0.502}{0.502 + 0.468} = 0.517, \quad \mu_3(2) = \frac{0.468}{0.97} = 0.483
$$

**Round 3**:
- Expert 1 incurs loss $L_1(3) = 0.1$.
- Expert 2 incurs loss $L_2(3) = 0.5$.

**Update Weights**:

$$
\mu_4(1) = 0.517 \cdot (1 - 0.1 \cdot 0.1) = 0.517 \cdot 0.99 = 0.512
$$

$$
\mu_4(2) = 0.483 \cdot (1 - 0.1 \cdot 0.5) = 0.483 \cdot 0.95 = 0.460
$$

**Normalize Weights**:

$$
\mu_4(1) = \frac{0.512}{0.512 + 0.460} = 0.527, \quad \mu_4(2) = \frac{0.460}{0.972} = 0.473
$$

**Final Hypothesis**: The final hypothesis is a weighted average of the experts' predictions based on their accumulated weights.

## Properties

1. **Convergence Rate**: The MWU method achieves an $O(\sqrt{K \log N})$ convergence rate, where $K$ is the number of rounds and $N$ is the number of experts.
2. **Logarithmic Loss Dependency**: The performance depends logarithmically on the number of experts, making it efficient even for a large number of experts.
3. **Expert Independence**: The algorithm performs well regardless of whether the experts are correlated or not.
4. **Adaptivity**: The MWU method adapts to changing optimal hypotheses by dynamically adjusting weights.

## Applications

1. **Machine Learning**: Used in ensemble methods, such as boosting algorithms (e.g., AdaBoost), where it combines weak classifiers into a strong one.
2. **Online Algorithms**: Applied in scenarios like online learning and competitive analysis, where decisions are made sequentially without knowing future inputs.
3. **Game Theory**: Utilized in repeated games to find Nash equilibria by dynamically adjusting strategies based on past outcomes.

The Multiplicative Weights Update Method is a versatile tool with applications across various domains, including computer science, economics, and operations research.