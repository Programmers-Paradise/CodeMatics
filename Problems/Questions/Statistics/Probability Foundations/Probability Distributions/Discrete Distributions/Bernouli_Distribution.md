
# Bernoulli Distribution

The Bernoulli distribution is a discrete probability distribution that models a single trial with two possible outcomes: success (1) and failure (0). It is one of the simplest probability distributions and forms the basis for more complex distributions like the binomial distribution.

## Definition

A random variable $X$ follows a Bernoulli distribution if it can take only two values, 1 (success) or 0 (failure), with probabilities $p$ and $q = 1 - p$ respectively. The probability mass function (PMF) of the Bernoulli distribution is given by:

$$
P(X = k) = 
\begin{cases} 
p & \text{if } k = 1 \\
q = 1 - p & \text{if } k = 0
\end{cases}
$$

Where:
- $p$ is the probability of success (0 < $p$ < 1).
- $q$ is the probability of failure, which is $1 - p$.

The expected value (mean) and variance of a Bernoulli random variable are:

$$
E(X) = p
$$

$$
Var(X) = pq
$$

## Example

Let's consider an example where we flip a fair coin. The outcome can be either heads (success) or tails (failure). We want to find the probability of getting heads.

1. **Define the parameters:**
   - $p$ (probability of success, i.e., getting heads) = 0.5
   - $q$ (probability of failure, i.e., getting tails) = 1 - 0.5 = 0.5

2. **Calculate the probability of getting heads:**
   Using the PMF of the Bernoulli distribution:

$$
P(X = 1) = p = 0.5
$$

So, the probability of getting heads when flipping a fair coin is 0.5.

## Properties

- **Support:** The support of a Bernoulli random variable $X$ is $\{0, 1\}$.
  
- **Mean (Expected Value):** 

$$
E(X) = p
$$

  This represents the long-run average outcome of the trial.

- **Variance:**

$$
Var(X) = pq
$$

  It measures how spread out the possible outcomes are from the mean.

- **Mode:** The mode of a Bernoulli distribution is the value that has the highest probability. If $p > 0.5$, the mode is 1; if $p < 0.5$, the mode is 0; and if $p = 0.5$, both values have equal probability.

## Applications

The Bernoulli distribution is widely used in various fields:

- **Statistics:** It forms the basis for hypothesis testing, where a single trial (e.g., a coin flip) is conducted to determine whether an observed outcome is significantly different from what would be expected under a null hypothesis.
  
- **Machine Learning:** In binary classification problems, the Bernoulli distribution can model the probability of a positive class label. For example, in spam detection, it can represent the probability that an email is spam (1) or not spam (0).

- **Engineering:** It can be used to model binary events such as system failures or successes, quality control checks, and more.

In summary, the Bernoulli distribution is a fundamental concept in probability theory with wide-ranging applications across various fields. Its simplicity makes it an essential tool for understanding more complex probabilistic models.
