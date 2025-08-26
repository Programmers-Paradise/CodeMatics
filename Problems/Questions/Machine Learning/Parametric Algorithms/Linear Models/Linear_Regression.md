# Simple Linear Regression

## Introduction

Simple Linear Regression is a fundamental statistical technique used to model the relationship between two variables: one dependent variable $y$ and one independent variable $x$. It is widely used in various fields such as economics, biology, engineering, and machine learning for prediction, forecasting, and understanding relationships between variables. By analyzing the linear relationship between these variables, we can make informed decisions and predictions based on data.

## Definition

Simple Linear Regression models the relationship between a dependent variable $y$ and an independent variable $x$ using a linear equation:

$$
y = \beta_0 + \beta_1 x + \epsilon
$$

Where:
- $y$ is the dependent variable.
- $x$ is the independent variable.
- $\beta_0$ is the y-intercept (the value of y when x=0).
- $\beta_1$ is the slope (the change in y for a one-unit change in x).
- $\epsilon$ is the error term, representing the difference between the observed and predicted values.

The goal of Simple Linear Regression is to find the best-fitting line that minimizes the sum of squared errors (SSE), which is calculated as:

$$
SSE = \sum_{i=1}^{n} (y_i - (\beta_0 + \beta_1 x_i))^2
$$

## Example

Consider a dataset of 5 individuals with their heights (x) and weights (y):

| Height (cm) | Weight (kg) |
|-------------|-------------|
| 160         | 60          |
| 165         | 65          |
| 170         | 70          |
| 175         | 75          |
| 180         | 80          |

**Step 1: Calculate the means of x and y.**

$$
\bar{x} = \frac{160 + 165 + 170 + 175 + 180}{5} = 170
$$

$$
\bar{y} = \frac{60 + 65 + 70 + 75 + 80}{5} = 70
$$

**Step 2: Calculate the slope (β₁).**

$$
\beta_1 = \frac{\sum (x_i - \bar{x})(y_i - \bar{y})}{\sum (x_i - \bar{x})^2}
$$

Calculating each term:

- $(160 - 170)(60 - 70) = (-10)(-10) = 100$
- $(165 - 170)(65 - 70) = (-5)(-5) = 25$
- $(170 - 170)(70 - 70) = (0)(0) = 0$
- $(175 - 170)(75 - 70) = (5)(5) = 25$
- $(180 - 170)(80 - 70) = (10)(10) = 100$

Sum of numerator terms: $100 + 25 + 0 + 25 + 100 = 250$

Denominator:

$$
(160 - 170)^2 + (165 - 170)^2 + (170 - 170)^2 + (175 - 170)^2 + (180 - 170)^2 = 100 + 25 + 0 + 25 + 100 = 250
$$

Thus,

$$
\beta_1 = \frac{250}{250} = 1
$$

**Step 3: Calculate the intercept (β₀).**

$$
\beta_0 = \bar{y} - \beta_1 \bar{x} = 70 - 1 \times 170 = -100
$$

**Step 4: Write the regression equation.**

$$
y = -100 + 1x
$$

## Properties

- **Unbiased Estimator**: The regression coefficients $\beta_0$ and $\beta_1$ are unbiased, meaning their expected values equal the true population parameters.
  
- **Best Fit Line**: The line minimizes the sum of squared errors (SSE), making it the best fit in terms of least squares.

- **Covariance and Variance Relationship**: The slope $\beta_1$ is proportional to the covariance between x and y divided by the variance of x:

$$
\beta_1 = \frac{\text{Cov}(x, y)}{\text{Var}(x)}
$$

- **Coefficient of Determination (R²)**: Measures the proportion of variance in y explained by the regression model. It is calculated as:

$$
R^2 = \left( \frac{\text{Cov}(x, y)}{\sqrt{\text{Var}(x) \text{Var}(y)}} \right)^2
$$

## Applications

- **Economics**: forecasting GDP growth based on unemployment rates.
- **Biology**: studying the relationship between height and weight in organisms.
- **Machine Learning**: as a foundational algorithm for predictive modeling.
- **Engineering**: optimizing processes by understanding input-output relationships.

## Conclusion

Simple Linear Regression is a cornerstone of statistical analysis, providing insights into linear relationships between variables. It is widely applicable across various domains, offering a straightforward yet powerful tool for prediction and inference. Despite its simplicity, it serves as a building block for more complex models and continues to be a vital technique in data-driven decision-making.

