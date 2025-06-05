# Standard Deviation

The standard deviation measures the amount of variation or dispersion in a set of values. It indicates how much the individual data points differ from the mean.

### Standard Deviation Formula

For a dataset with $n$ values ${x_1, x_2, \ldots, x_n}$, with a mean $\bar{x}$, the standard deviation $\sigma$ is calculated as:

1. **Population Standard Deviation**:

$$
\sigma = \sqrt{\frac{1}{N} \sum_{i=1}^{N} (x_i - \mu)^2}
$$

2. **Sample Standard Deviation**:

$$
s = \sqrt{\frac{1}{n-1} \sum_{i=1}^{n} (x_i - \bar{x})^2}
$$

Where:

- $N$ is the total number of values in the population.
- $\mu$ is the population mean.
- $n$ is the number of values in the sample.
- $\bar{x}$ is the sample mean.

## Example

For a dataset ${4, 8, 6, 5, 7}$ with a mean $\bar{x} = 6$:

1. Compute the variance:

$$
\text{Variance} = \frac{1}{n-1} \sum_{i=1}^{n} (x_i - \bar{x})^2 = \frac{1}{5-1} \left[(4-6)^2 + (8-6)^2 + (6-6)^2 + (5-6)^2 + (7-6)^2\right]
$$

$$
\text{Variance} = \frac{10}{4} = 2.5
$$

2. Compute the standard deviation:

$$
s = \sqrt{2.5} \approx 1.58
$$


## Challenge

Create a program to find Standard Deviation of any values.
