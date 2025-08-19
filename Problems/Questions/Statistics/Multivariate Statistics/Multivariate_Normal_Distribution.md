# Multivariate Normal Distribution

## Introduction

The multivariate normal distribution is a generalization of the univariate normal distribution to higher dimensions. It is a cornerstone in statistics, machine learning, and various scientific fields due to its ability to model real-world phenomena involving multiple correlated variables.

## Definition

A random vector $\mathbf{X} = (X_1, X_2, \dots, X_k)^T$ follows a multivariate normal distribution if any linear combination of its components is normally distributed. The probability density function (PDF) is given by:

$$
f_{\mathbf{X}}(\mathbf{x}) = \frac{1}{(2\pi)^{k/2} |\boldsymbol{\Sigma}|^{1/2}} \exp\left( -\frac{1}{2} (\mathbf{x} - \boldsymbol{\mu})^T \boldsymbol{\Sigma}^{-1} (\mathbf{x} - \boldsymbol{\mu}) \right)
$$

where:
- $\boldsymbol{\mu}$ is the mean vector,
- $\boldsymbol{\Sigma}$ is the covariance matrix,
- $|\boldsymbol{\Sigma}|$ is the determinant of $\boldsymbol{\Sigma}$.

## Example

Consider a bivariate normal distribution with parameters:
- Mean vector: $\boldsymbol{\mu} = (0, 0)^T$,
- Covariance matrix: $\boldsymbol{\Sigma} = \begin{pmatrix} 1 & 0.5 \\ 0.5 & 1 \end{pmatrix}$.

To find the probability density at point $\mathbf{x} = (1, 1)^T$:

1. Compute $(\mathbf{x} - \boldsymbol{\mu})^T = (1, 1)$.
2. Calculate $\boldsymbol{\Sigma}^{-1} = \frac{1}{0.75}\begin{pmatrix} 1 & -0.5 \\ -0.5 & 1 \end{pmatrix}$.
3. Compute the quadratic form: $(1, 1) \boldsymbol{\Sigma}^{-1} (1, 1)^T = \frac{2}{3}$.
4. Substitute into the PDF formula to get:

$$
f_{\mathbf{X}}(1, 1) = \frac{1}{2\pi \sqrt{0.75}} \exp\left(-\frac{1}{3}\right)
$$

## Properties

- **Symmetry**: The multivariate normal distribution is symmetric about its mean vector.
  
- **Mean Vector**: The expected value of the distribution is $\boldsymbol{\mu}$.

- **Covariance Matrix**: The covariance between variables $X_i$ and $X_j$ is given by $\Sigma_{ij}$, indicating linear relationships.

- **Independence and Uncorrelatedness**: If two variables are uncorrelated in a multivariate normal distribution, they are independent.

- **Marginal Distributions**: Any marginal distribution of the multivariate normal is also normal.

- **Support**: The distribution is supported on all of $\mathbb{R}^k$.

## Applications

The multivariate normal distribution is used extensively in:
- **Machine Learning**: For algorithms like Gaussian mixture models and Bayesian networks.
- **Finance**: In portfolio optimization to model asset returns.
- **Engineering**: For quality control with multiple variables.
- **Machine Learning Algorithms**: Such as k-nearest neighbors for classification.

This distribution's versatility makes it a fundamental tool across various disciplines.