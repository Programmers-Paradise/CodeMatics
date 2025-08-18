# Covariance
Covariance is a measure of how much two random variables change together.

 If the greater values of one variable mainly correspond with the greater values of the other variable (and the same for lower values), the covariance is positive.
 
  Conversely, if the greater values of one variable mainly correspond to the lower values of the other, the covariance is negative.
 
  Covariance is a key concept in statistics and is used to describe the direction of the linear relationship between variables.

## Covariance Formula
The covariance between two random variables $X$ and $Y$ is calculated as:

$$
\text{Cov}(X, Y) = \frac{\sum_{i=1}^{n} (X_i - \overline{X})(Y_i - \overline{Y})}{n}
$$

Where:
- $X_i$
and $Y_i$ are the individual sample points.

- $\overline{X}$ and $\overline{Y}$ are the mean values of the X and Y samples, respectively.

 
- $n$ is the number of data points.
## Explanation
`Positive Covariance`: Indicates that as one variable increases, the other tends to increase as well.

`Negative Covariance`: Indicates that as one variable increases, the other tends to decrease.

`Zero Covariance`: Indicates no linear relationship between the variables.

## Example
Consider a dataset where you have the heights and weights of a group of people. Covariance can be used to determine whether taller people tend to weigh more (positive covariance), less (negative covariance), or if height and weight are independent of each other (covariance near zero).

## Challenge

Create a function to find covariance of any data.