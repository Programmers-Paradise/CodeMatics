# Expected Value

The expected value, or mean, represents the long-term average or mean value of a random variable. It provides a measure of the center of the distribution of the variable.

## Expected Value Formula

For a discrete random variable $X$ with possible outcomes ${x_1, x_2, .., x_n}$ and corresponding probabilities ${p_1, p_2, \ldots, p_n}$ the expected value $E(X)$ is calculated as:

$$
E(X) = \sum_{i=1}^{n} x_i \cdot p(x_i)
$$

For a continuous random variable with probability density function \( f(x) \), the expected value \( E(X) \) is:

$$
E(X) = \int_{-\infty}^{\infty} x \cdot f(x) \, dx
$$

## Explanation

- **Discrete Random Variable**: Sum of each outcome multiplied by its probability.
- **Continuous Random Variable**: Integral of the variable multiplied by its probability density function.

## Example

For a six-sided die:

- Outcomes: $1, 2, 3, 4, 5, 6$
- Probability for each outcome: $\frac{1}{6}$

The expected value is:

$$
E(X) = \sum_{i=1}^{6} i \cdot \frac{1}{6} = \frac{1 + 2 + 3 + 4 + 5 + 6}{6} = \frac{21}{6} = 3.5
$$

This indicates that the average outcome of rolling the die is 3.5.

## Challenge

Create a program to find the Expected Values from a Probability Distribution.
