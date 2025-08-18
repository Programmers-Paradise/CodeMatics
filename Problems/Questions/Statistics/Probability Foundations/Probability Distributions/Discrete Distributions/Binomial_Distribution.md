
# Binomial Distribution

The binomial distribution is a discrete probability distribution that models the number of successes in a fixed number of independent Bernoulli trials, each with the same probability of success. It is widely used in various fields including statistics, science, and engineering to model phenomena where there are two possible outcomes (success or failure).

## Definition

The binomial distribution describes the probability of having exactly $k$ successes in $n$ independent Bernoulli trials, each with a success probability $p$. The probability mass function (PMF) of a binomial random variable $X$ is given by:

$$
P(X = k) = \binom{n}{k} p^k (1-p)^{n-k}
$$

where:
- $n$ is the number of trials,
- $k$ is the number of successes,
- $p$ is the probability of success on a single trial,
- $\binom{n}{k}$ is the binomial coefficient, calculated as:

$$
\binom{n}{k} = \frac{n!}{k!(n-k)!}
$$

### Key Equations
1. **Binomial Coefficient**:

$$
\binom{n}{k} = \frac{n!}{k!(n-k)!}
$$

2. **Probability Mass Function (PMF)**:

$$
P(X = k) = \binom{n}{k} p^k (1-p)^{n-k}
$$

## Example

Consider a scenario where we flip a fair coin 5 times and want to find the probability of getting exactly 3 heads.

- $n = 5$ (number of trials)
- $k = 3$ (number of successes, i.e., heads)
- $p = 0.5$ (probability of success on a single trial)

Using the binomial distribution formula:

$$
P(X = 3) = \binom{5}{3} (0.5)^3 (1-0.5)^{5-3}
$$

First, calculate the binomial coefficient:

$$
\binom{5}{3} = \frac{5!}{3!(5-3)!} = \frac{5!}{3!2!} = \frac{5 \times 4}{2 \times 1} = 10
$$

Next, substitute the values into the PMF:

$$
P(X = 3) = 10 \times (0.5)^3 \times (0.5)^2 = 10 \times 0.125 \times 0.25 = 0.3125
$$

So, the probability of getting exactly 3 heads in 5 flips is \( 0.3125 \) or 31.25%.

## Properties

- **Mean (Expected Value)**:
  $$
  E(X) = np
  $$
  
- **Variance**:
  $$
  Var(X) = np(1-p)
  $$

- **Standard Deviation**:
  $$
  \sigma = \sqrt{np(1-p)}
  $$

## Applications

The binomial distribution is used in various fields, including:

- **Statistics**: For hypothesis testing and confidence interval estimation.
- **Machine Learning**: In classification problems where the output is binary (e.g., spam detection).
- **Engineering**: To model quality control processes where a product either passes or fails a test.
- **Finance**: In risk management to model the probability of default in loans.

The binomial distribution provides a fundamental framework for understanding and modeling scenarios with two possible outcomes, making it an essential tool in both theoretical and applied contexts.
