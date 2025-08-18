# Geometric Distribution

The geometric distribution is a discrete probability distribution that models the number of Bernoulli trials needed to get one success in independent and identically distributed (i.i.d.) Bernoulli experiments. It is widely used in various fields such as statistics, machine learning, and engineering to model scenarios where we are interested in the number of trials until the first success occurs.

## Definition

The geometric distribution describes the probability $P(X = k)$ that the first success occurs on the $k$-th trial. The probability mass function (PMF) of a geometric random variable $X$ is given by:

$$
P(X = k) = (1 - p)^{k-1} \cdot p
$$

where:
- $k$ is the number of trials until the first success.
- $p$ is the probability of success on each trial.

The cumulative distribution function (CDF) for a geometric random variable $X$ is:

$$
F(X = k) = 1 - (1 - p)^k
$$

### Key Equations

1. **Probability Mass Function (PMF):**

$$
P(X = k) = (1 - p)^{k-1} \cdot p
$$

2. **Cumulative Distribution Function (CDF):**

$$
F(X = k) = 1 - (1 - p)^k
$$

## Example

Let's consider an example where we are flipping a fair coin until we get heads for the first time. The probability of getting heads on any single flip is $p = 0.5$.

**Example Problem:**
What is the probability that it takes exactly 3 flips to get heads?

**Step-by-Step Solution:**

1. **Identify Parameters:**
   - Number of trials, $k = 3$
   - Probability of success, $p = 0.5$

2. **Apply PMF Formula:**

$$
P(X = 3) = (1 - p)^{k-1} \cdot p
$$

   Substituting the values:

$$
P(X = 3) = (1 - 0.5)^{3-1} \cdot 0.5
$$

   Simplify:

$$
P(X = 3) = (0.5)^2 \cdot 0.5 = 0.25 \cdot 0.5 = 0.125
$$

Therefore, the probability that it takes exactly 3 flips to get heads is $0.125$.

## Properties

- **Mean (Expected Value):**
  The expected number of trials until the first success is given by:

$$
E(X) = \frac{1}{p}
$$

- **Variance:**
  The variance of the geometric distribution is:

$$
Var(X) = \frac{(1 - p)}{p^2}
$$

- **Mode:**
  The mode of the geometric distribution is:

$$
Mode(X) = 1
$$

  (Note: For $p > 0.5$, the mode is 1; for $p < 0.5$, there is no mode.)

## Applications

The geometric distribution has numerous applications in various fields:

- **Statistics:** It is used to model the number of trials until a specific event occurs, such as the number of coin flips until heads appears.
  
- **Machine Learning:** In machine learning, it can be used to model the number of iterations required for an algorithm to converge.

- **Engineering:** It is useful in reliability engineering to model the time until failure of a system or component.

- **Quality Control:** In quality control, it can be used to determine the number of inspections needed before finding a defective item.