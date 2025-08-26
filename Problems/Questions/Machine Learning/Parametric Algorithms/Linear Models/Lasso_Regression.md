# Lasso Regression

Lasso Regression (Least Absolute Shrinkage and Selection Operator) is a linear regression method that incorporates L1 regularization. It is particularly useful for feature selection and model regularization in scenarios where the number of predictors may be large.

## Definition

Lasso Regression minimizes the residual sum of squares while adding a constraint on the sum of the absolute values (L1 norm) of the coefficients. The objective function to minimize is:

$$
\text{Loss} = \sum_{i=1}^{n}(y_i - w^T x_i)^2 + \lambda \sum_{j=1}^{p}|w_j|
$$

where:
- $y_i$ is the dependent variable,
- $x_i$ are the independent variables,
- $w$ represents the coefficients (weights),
- $\lambda$ is the regularization parameter that controls the strength of the penalty.

## Example

Consider a dataset with two features and three samples:

| Sample | Feature 1 | Feature 2 | Target |
|--------|-----------|-----------|--------|
| 1      | 1         | 2         | 3      |
| 2      | 2         | 3         | 5      |
| 3      | 3         | 4         | 7      |

The goal is to fit a Lasso Regression model. The steps are:

1. **Initialize Parameters**: Set the regularization parameter $\lambda = 0.1$.

2. **Objective Function**: Minimize:
$$
   (3 - (w_1*1 + w_2*2))^2 + (5 - (w_1*2 + w_2*3))^2 + (7 - (w_1*3 + w_2*4))^2 + 0.1(|w_1| + |w_2|)
$$

3. **Optimization**: Use an iterative method like coordinate descent to find the coefficients $w_1$ and $w_2$.

4. **Solution**: Suppose after optimization, we get $w_1 = 0.5$ and $w_2 = 0.8$. The model is:

$$
\hat{y} = 0.5x_1 + 0.8x_2
$$

## Properties

- **Sparsity**: Lasso Regression can set some coefficients to zero, effectively performing feature selection.
  
- **Regularization**: The $L1$ penalty helps in reducing model complexity and preventing overfitting.

- **Optimization**: Uses iterative algorithms due to the non-differentiable nature of the L1 norm at zero.

## Applications

- **Feature Selection**: Useful in datasets with many features, such as gene expression analysis or text classification.
  
- **Model Interpretability**: By eliminating irrelevant features, it enhances understanding of which predictors are significant.
  
- **High-Dimensional Data**: Effective for datasets where the number of features exceeds the number of samples.

Lasso Regression is a powerful tool for both regularization and feature selection, making it a popular choice in various machine learning applications.