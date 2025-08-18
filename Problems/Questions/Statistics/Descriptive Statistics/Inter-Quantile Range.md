# Inter Quantile Range (IQR)

The Inter Quantile Range (IQR) is a statistical measure that represents the difference between the 75th percentile (Q3) and the 25th percentile (Q1) of a dataset. It provides a robust way to understand the spread or dispersion of data, particularly in the presence of outliers. The IQR is widely used in various fields including statistics, machine learning, and engineering for outlier detection, data normalization, and understanding data distribution.

## Definition

The Inter Quantile Range (IQR) is defined as:

$$
\text{IQR} = Q3 - Q1
$$

Where:
- $Q1$ (First Quartile): The value below which 25% of the data falls.
- $Q3$ (Third Quartile): The value below which 75% of the data falls.

To calculate the IQR, follow these steps:

1. **Sort the Data**: Arrange the dataset in ascending order.
2. **Find Q1 and Q3**:
   - If the number of observations $n$ is odd, then:
     
$$
Q1 = \text{median}\left(\frac{n+1}{4}\right)^\text{th} \text{ observation} $$

$$
Q3 = \text{median}\left(\frac{3(n+1)}{4}\right)^\text{th} \text{ observation}
$$

   - If $n$ is even, then:

$$
Q1 = \text{average of the }\left(\frac{n}{2}\right)^\text{th and } \left(\frac{n}{2} + 1\right)^\text{th observations}
$$

$$
Q3 = \text{average of the }\left(\frac{3n}{2}\right)^\text{th and } \left(\frac{3n}{2} + 1\right)^\text{th observations}
$$

## Example

Consider the following dataset:

$[5, 7, 8, 9, 10, 12, 14, 16, 18, 20]$

### Step 1: Sort the Data
The data is already sorted.

### Step 2: Find Q1 and Q3

- Number of observations $n = 10$ (even)

Calculate $Q1$:

$Q1 = \text{average of the } \left(\frac{10}{2}\right)^\text{th and } \left(\frac{10}{2} + 1\right)^\text{th observations}$

$Q1 = \text{average of the } 5^\text{th and } 6^\text{th observations}$
$Q1 = \text{average of } 10 \text{ and } 12$
$Q1 = \frac{10 + 12}{2} = 11$

Calculate $Q3$:

$Q3 = \text{average of the } \left(\frac{3 \times 10}{2}\right)^\text{th and } \left(\frac{3 \times 10}{2} + 1\right)^\text{th observations}$

$Q3 = \text{average of the } 15^\text{th and } 16^\text{th observations}$

Since $n = 10$, we need to extend our dataset by repeating the last value:
$[5, 7, 8, 9, 10, 12, 14, 16, 18, 20, 20]$

$ Q3 = \text{average of } 18 \text{ and } 20$

$ Q3 = \frac{18 + 20}{2} = 19$

### Step 3: Calculate the IQR
$\text{IQR} = Q3 - Q1 = 19 - 11 = 8$

## Properties

- **Robustness**: The IQR is less affected by outliers compared to the range (max - min).
- **Interpretation**: A larger IQR indicates a wider spread in the data, while a smaller IQR suggests that the data points are more closely clustered around the median.
- **Outlier Detection**: Outliers can be identified as values that fall below $Q1 - 1.5 \times \text{IQR}$ or above $Q3 + 1.5 \times \text{IQR}$.

## Applications

The Inter Quantile Range is used in various applications:

- **Outlier Detection**: In machine learning and data preprocessing, IQR helps identify outliers that can skew statistical analyses.
- **Data Normalization**: The IQR can be used to normalize data by scaling it between a fixed range (e.g., 0 to 1).
- **Understanding Data Distribution**: In statistics and engineering, the IQR provides insights into the central tendency and dispersion of data distributions.

By understanding and applying the Inter Quantile Range, analysts and engineers can make more informed decisions based on robust statistical measures.
