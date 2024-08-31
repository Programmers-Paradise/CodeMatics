# Entropy

Entropy is a measure of uncertainty or randomness in a system. It quantifies the amount of unpredictability or the expected amount of information in a random variable.

## Entropy Formula

The entropy $H(X)$ of a discrete random variable $X$ with possible outcomes ${(x_1, x_2, \ldots, x_n)}$ and corresponding probabilities ${(p_1, p_2, \ldots, p_n)}$ is defined as:

$$
H(X) = -\sum_{i=1}^{n} p(x_i) \log_2 p(x_i)
$$

Where:

- $p(x_i)$ is the probability of outcome $x_i$.
- $\log_2$ denotes the logarithm to the base 2.

## Explanation

- **High Entropy**: Indicates high uncertainty or diversity in outcomes.
- **Low Entropy**: Indicates low uncertainty, meaning the outcome is more predictable.

## Example
For a fair coin:

- $p(\text{heads}) = 0.5$
- $p(\text{tails}) = 0.5$

The entropy would be:

$$
H(X) = -[0.5 \log_2 0.5 + 0.5 \log_2 0.5] = 1 \text{ bit}
$$

For a biased coin where $p(\text{heads}) = 0.9$ and $p(\text{tails}) = 0.1 $:

$$
H(X) = -[0.9 \log_2 0.9 + 0.1 \log_2 0.1] \approx 0.47 \text{ bits}
$$

## Challenge
Create a program to demonstrate Entropy of a dataset.
