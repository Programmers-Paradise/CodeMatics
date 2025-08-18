# Skewness

Skewness is a statistical measure that quantifies the asymmetry of the probability distribution of a real-valued random variable about its mean. It indicates whether the data points are skewed to the left (negative skew) or right (positive skew), and how much they are skewed. Understanding skewness is crucial in various fields, including statistics, finance, and engineering, as it affects the choice of statistical methods and interpretations.

## Definition

Skewness measures the degree of asymmetry of a distribution around its mean. It can be calculated using the third standardized moment:

$$
\text{Skewness} = \frac{\mathbb{E}[(X - \mu)^3]}{\sigma^3}
$$

where:
- $X$ is a random variable,
- $\mu$ is the mean of $X$,
- $\sigma$ is the standard deviation of $X$.

The skewness value can be interpreted as follows:
- If skewness is less than -1 or greater than 1, the distribution is highly skewed.
- If skewness is between -1 and -0.5 or between 0.5 and 1, the distribution is moderately skewed.
- If skewness is between -0.5 and 0.5, the distribution is approximately symmetric.

## Example

Consider a dataset representing the annual incomes of a small company:

$$
X = \{30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 200000\}
$$

First, calculate the mean (\( \mu \)) and standard deviation (\( \sigma \)):

$$
\mu = \frac{30000 + 40000 + 50000 + 60000 + 70000 + 80000 + 90000 + 100000 + 200000}{9} = 70000
$$

$$
\sigma^2 = \frac{1}{9} \sum_{i=1}^{9} (X_i - \mu)^2 = \frac{1}{9} [(30000-70000)^2 + (40000-70000)^2 + ... + (200000-70000)^2] = 500000000
$$

$$
\sigma = \sqrt{500000000} \approx 22360.68
$$

Next, calculate the skewness:

$$
\text{Skewness} = \frac{\sum_{i=1}^{9} (X_i - \mu)^3}{9 \sigma^3}
$$

$$
\text{Skewness} = \frac{(30000-70000)^3 + (40000-70000)^3 + ... + (200000-70000)^3}{9 \times 500000000^3}
$$

$$
\text{Skewness} = \frac{-160000000000000 - 80000000000000 + ... + 270000000000000}{9 \times 500000000^3}
$$

$$
\text{Skewness} = \frac{140000000000000}{9 \times 500000000^3} \approx 0.0000028
$$

Since the skewness is approximately 0, the income distribution is nearly symmetric.

## Properties

- **Symmetry**: A perfectly symmetric distribution has a skewness of 0.
- **Positive Skew (Right Skewed)**: The right tail (tail with larger values) extends further than the left tail. This indicates that there are more extreme values on the higher end.
- **Negative Skew (Left Skewed)**: The left tail extends further than the right tail, indicating more extreme values on the lower end.

## Applications

Skewness is widely used in various fields:
- **Finance**: In finance, skewness helps in understanding the risk and return characteristics of investments. A positively skewed distribution indicates a higher probability of large returns.
- **Engineering**: In engineering, skewness can affect the design of structures and systems that rely on statistical assumptions about data distributions.
- **Machine Learning**: Skewness is important in feature scaling and transformation techniques to ensure that algorithms perform optimally.

Understanding skewness is essential for accurate data analysis and decision-making in many scientific and practical applications.