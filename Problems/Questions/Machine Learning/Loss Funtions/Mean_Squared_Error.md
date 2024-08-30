# Mean Squared Error (MSE)

Mean Squared Error (MSE) measures the average squared difference between predicted values and actual values. It is a common metric for assessing the performance of regression models.

### MSE Formula

For a set of $n$ predictions, where $\hat{y}_i$ is the predicted value and $y_i$  is the actual value, the Mean Squared Error $MSE$ is:

$$
\text{MSE} = \frac{1}{n} \sum_{i=1}^{n} (\hat{y}_i - y_i)^2
$$

Where:

- $\hat{y}_i$ is the predicted value for the $i$-th observation.
- $y_i$ is the actual value for the $i$-th observation.
- $n$ is the total number of observations.

### Explanation

- **Squared Error**: The squared difference between each predicted value and its actual value.
- **Mean of Squared Errors**: MSE is the average of these squared errors.

### Example

For actual values ${(3, -0.5, 2, 7)}$ and predicted values $({2.5, 0.0, 2, 8})$:

1. Compute the squared errors:

$$
(2.5 - 3)^2 = 0.25
$$

$$
(0.0 - (-0.5))^2 = 0.25
$$

$$
(2 - 2)^2 = 0
$$

$$
(8 - 7)^2 = 1
$$

2. Compute the mean of these squared errors:

$$
\text{MSE} = \frac{1}{4} (0.25 + 0.25 + 0 + 1) = 0.375
$$

## Challenge

Create a program to find the MAE of actual values vs predicted values.(Use any data)