# Mean Absolute Error (MAE)

Mean Absolute Error (MAE) measures the average magnitude of errors in a set of predictions, without considering their direction. It represents the average absolute difference between predicted values and actual values.

### MAE Formula

For a set of $n$ predictions, where $\hat{y}_i$ is the predicted value and $ y_i $ is the actual value, the Mean Absolute Error $MAE$ is:

$$
\text{MAE} = \frac{1}{n} \sum_{i=1}^{n} | \hat{y}_i - y_i |
$$

Where:

- $\hat{y}_i$ is the predicted value for the $i $-th observation.
- $y_i$ is the actual value for the $i$-th observation.
- $n$ is the total number of observations.

### Explanation

- **Absolute Error**: The absolute difference between each predicted value and its actual value.
- **Average of Absolute Errors**: MAE is the mean of these absolute errors.

### Example

For actual values \( \{3, -0.5, 2, 7\} \) and predicted values \( \{2.5, 0.0, 2, 8\} \):

1. Compute the absolute errors:

$$
| 2.5 - 3 | = 0.5
$$

$$
| 0.0 - (-0.5) | = 0.5
$$

$$
| 2 - 2 | = 0
$$

$$
| 8 - 7 | = 1
$$

2. Compute the mean of these absolute errors:

$$
\text{MAE} = \frac{1}{4} (0.5 + 0.5 + 0 + 1) = 0.5
$$

## Challenge

Create a program to find the MAE of actual values vs predicted values.(Use any data)
