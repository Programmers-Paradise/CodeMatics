
# Poisson Distribution

The Poisson distribution is a discrete probability distribution that expresses the probability of a given number of events occurring in a fixed interval of time or space if these events occur with a known constant mean rate and independently of the time since the last event. It is widely used in various fields, including telecommunications, traffic engineering, and reliability theory.

## Definition

The Poisson distribution describes the number of events $k$ that occur within a fixed period of time $t$, given a known average rate $\lambda$. The probability mass function (PMF) of the Poisson distribution is defined as:

$$
P(X = k; \lambda) = \frac{\lambda^k e^{-\lambda}}{k!}
$$

where:
- $X$ is the random variable representing the number of events.
- $k$ is a non-negative integer (0, 1, 2, ...).
- $\lambda$ (lambda) is the average rate of occurrence (events per unit time or space).
- $e$ is the base of the natural logarithm.

The cumulative distribution function (CDF) for the Poisson distribution is:

$$
F(k; \lambda) = P(X \leq k; \lambda) = \sum_{i=0}^{k} \frac{\lambda^i e^{-\lambda}}{i!}
$$

## Example

Let's consider a scenario where we are interested in the number of emails received by an email server every minute. Suppose, on average, 5 emails arrive per minute.

**Example Problem:**
What is the probability that exactly 3 emails will be received in the next minute?

**Step-by-Step Solution:**

1. **Identify Parameters:**
   - $\lambda = 5$ (average rate of emails per minute)
   - $k = 3$ (number of events we are interested in)

2. **Apply the Poisson PMF Formula:**

$$
P(X = 3; 5) = \frac{5^3 e^{-5}}{3!}
$$

3. **Calculate Each Component:**
   - $5^3 = 125$
   - $e^{-5} \approx 0.00674$
   - $3! = 6$

4. **Substitute and Simplify:**

$$
P(X = 3; 5) = \frac{125 \times 0.00674}{6} \approx \frac{0.8425}{6} \approx 0.1404
$$

Therefore, the probability that exactly 3 emails will be received in the next minute is approximately **0.1404** or **14.04%**.

## Properties

- **Mean (Expected Value):**
  The mean of a Poisson distribution is equal to its parameter $\lambda$:

$$
E(X) = \lambda
$$

- **Variance:**
  The variance of a Poisson distribution is also equal to its parameter $\lambda$:

$$
Var(X) = \lambda
$$

- **Mode:**
  The mode of the Poisson distribution is the integer part of $\lambda$, or $\lfloor \lambda \rfloor$.

## Applications

The Poisson distribution has numerous applications in various fields:

- **Telecommunications:** Modeling the number of phone calls received by a call center in a given time period.
- **Traffic Engineering:** Estimating the number of vehicles passing through an intersection within a certain time frame.
- **Reliability Theory:** Calculating the probability of a system failing within a specified time interval.
- **Machine Learning:** In algorithms like Poisson regression for modeling count data.

The Poisson distribution is particularly useful in scenarios where events occur independently and at a constant average rate, making it a 