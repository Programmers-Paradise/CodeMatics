# Median

The median is a statistical measure that represents the middle value in a dataset when it is ordered from least to greatest. It is an important concept in statistics and data analysis because it provides a robust measure of central tendency that is less affected by outliers than the mean.

## Definition

The median of a dataset is the value separating the higher half from the lower half of the data. If the dataset has an odd number of observations, the median is the middle number. If the dataset has an even number of observations, the median is the average of the two middle numbers.

Mathematically, for a sorted dataset $x_1, x_2, \ldots, x_n$:

- If $n$ is odd, the median $M$ is given by:
  
$$
M = x_{\left(\frac{n+1}{2}\right)}
$$

- If $n$ is even, the median $M$ is given by:

$$
M = \frac{x_{\left(\frac{n}{2}\right)} + x_{\left(\frac{n}{2} + 1\right)}}{2}
$$

## Example

Consider the following dataset: $3, 5, 7, 9, 11$.

1. **Sort the dataset**: The dataset is already sorted.
2. **Determine the number of observations**: $n = 5$ (odd).
...

- **Finance and Economics**: In financial analysis, the median income or wealth distribution provides insights into economic disparities that are less influenced by extreme values compared to the mean.

- **Quality Control**: In manufacturing, the median can be used to set control limits for quality metrics, ensuring that the process remains stable and within acceptable limits.
Output is truncated. View as a scrollable element or open in a text editor. Adjust cell output settings...