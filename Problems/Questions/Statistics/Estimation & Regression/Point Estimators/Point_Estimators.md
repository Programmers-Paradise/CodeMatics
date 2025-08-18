# Point Estimators

## Introduction

Point estimators are fundamental tools in statistics used to estimate population parameters based on sample data. They provide a single value (a "point") as an estimate of an unknown parameter, such as the mean or variance of a distribution. This approach is crucial in various fields, including mathematics, science, engineering, and machine learning, where making precise predictions or measurements from data is essential.

## Definition

A point estimator $\hat{\theta}$ is a function that maps a sample $X_1, X_2, ..., X_n$ to an estimate of the parameter $\theta$. Formally,

$$
\hat{\theta} = g(X_1, X_2, ..., X_n)
$$

where $g$ is a known function. The goal is to choose $g$ such that $\hat{\theta}$ is as close as possible to the true parameter $\theta$.

## Example

Consider estimating the population mean $\mu$ using the sample mean $\bar{X}$. Given a random sample of size $n$, the point estimator for $\mu$ is:

$$
\hat{\mu} = \bar{X} = \frac{1}{n} \sum_{i=1}^{n} X_i
$$

**Example Problem:**

Suppose we have a dataset of 5 numbers: [10, 12, 14, 16, 18]. Calculate the point estimator for the population mean.

**Solution:**

Compute the sample mean:

$$
\hat{\mu} = \frac{1}{5}(10 + 12 + 14 + 16 + 18) = \frac{70}{5} = 14
$$

Thus, the point estimator for the population mean is 14.

## Properties

### Unbiasedness

An estimator $\hat{\theta}$ is unbiased if its expected value equals the true parameter:

$$
E[\hat{\theta}] = \theta
$$

**Example:**

For the sample mean,

$$
E[\bar{X}] = E\left[\frac{1}{n} \sum_{i=1}^{n} X_i\right] = \mu
$$

Thus, the sample mean is an unbiased estimator of $\mu$.

### Consistency

An estimator is consistent if it converges in probability to the true parameter as the sample size increases:

$$
\lim_{n \to \infty} P(|\hat{\theta} - \theta| < \epsilon) = 1
$$

**Example:**

As $n$ increases, the variance of $\bar{X}$ decreases ($Var(\bar{X}) = \sigma^2 / n$), making it consistent.

### Efficiency

An estimator is efficient if it has the lowest variance among unbiased estimators. The Cramér-Rao Lower Bound provides a benchmark:

$$
Var(\hat{\theta}) \geq \frac{1}{nI(\theta)}
$$

where $I(\theta)$ is the Fisher information.

### Sufficiency

An estimator is sufficient if it contains all the information about $\theta$ present in the sample. Formally, the likelihood can be factored into a function of $\hat{\theta}$ and another that depends only on the data:

$$
f(X|\theta) = h(X)g(\hat{\theta}, \theta)
$$

## Applications

Point estimators are widely used in various fields:

- **Machine Learning:** In regression models, point estimators predict continuous outcomes.
- **Engineering:** For quality control, estimating parameters like mean and variance of product dimensions.
- **Econometrics:** Estimating coefficients in regression models to understand relationships between variables.

In conclusion, point estimators are essential for making precise estimates from data, providing the foundation for statistical inference across diverse applications.