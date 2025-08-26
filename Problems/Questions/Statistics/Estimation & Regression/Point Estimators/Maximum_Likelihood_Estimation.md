

# Maximum Likelihood Estimation (MLE)

## Introduction

Maximum likelihood estimation (MLE) is a statistical method used to estimate the parameters of a model that maximize the likelihood of observing the given data. It is widely used in machine learning for parameter estimation in classification and regression models, as well as in various scientific and engineering applications.

### Why it's important
MLE provides a principled approach to estimating model parameters by maximizing the probability of the observed data under the assumed statistical model. This method ensures that the estimated parameters are optimal in terms of likelihood, making it a cornerstone in statistical inference and machine learning.

## Definition

Given a set of independent and identically distributed (i.i.d.) observations $\mathbf{X} = \{x_1, x_2, \ldots, x_n\}$ drawn from an unknown distribution with probability density function (pdf) $f(x; \theta)$, where $\theta$ represents the parameters of the distribution, MLE aims to find the parameter values that maximize the likelihood of observing the data.

The likelihood function is defined as:

$$
L(\theta; \mathbf{X}) = \prod_{i=1}^{n} f(x_i; \theta)
$$

To simplify computation, especially with large datasets, the log-likelihood function is often used:

$$
\ell(\theta; \mathbf{X}) = \sum_{i=1}^{n} \log f(x_i; \theta)
$$

The MLE estimate $\hat{\theta}$ is found by maximizing this function:

$$
\hat{\theta} = {\arg\max}_{\theta} \ell(\theta; \mathbf{X})
$$

### Example

Consider a simple case where the data follows a normal distribution with unknown mean $\mu$ and variance $\sigma^2$. The likelihood function for a sample of size $n$ is:

$$
L(\mu, \sigma^2; \mathbf{X}) = \prod_{i=1}^{n} \frac{1}{\sqrt{2\pi\sigma^2}} e^{-\frac{(x_i - \mu)^2}{2\sigma^2}}
$$

Taking the log-likelihood:

$$
\ell(\mu, \sigma^2; \mathbf{X}) = -\frac{n}{2} \log(2\pi) - \frac{n}{2} \log(\sigma^2) - \frac{1}{2\sigma^2} \sum_{i=1}^{n} (x_i - \mu)^2
$$

To find the MLE estimates, take partial derivatives with respect to $\mu$ and $\sigma^2$, set them to zero, and solve:

$$
\frac{\partial \ell}{\partial \mu} = \sum_{i=1}^{n} (x_i - \mu) = 0 \Rightarrow \hat{\mu} = \frac{1}{n} \sum_{i=1}^{n} x_i
$$

$$
\frac{\partial \ell}{\partial \sigma^2} = -\frac{n}{2\sigma^2} + \frac{1}{2(\sigma^2)^2} \sum_{i=1}^{n} (x_i - \mu)^2 = 0 \Rightarrow \hat{\sigma}^2 = \frac{1}{n} \sum_{i=1}^{n} (x_i - \hat{\mu})^2
$$

### Properties

1. **Consistency**: As the sample size $n$ increases, MLE estimates converge to the true parameter values.

$$
\sqrt{n}(\hat{\theta} - \theta) \xrightarrow{d} \mathcal{N}(0, I^{-1}(\theta))
$$

2. **Efficiency**: Under certain regularity conditions, MLE achieves the Cramér-Rao lower bound, making it the most efficient estimator.

$$
\text{Var}(\hat{\theta}) \geq \frac{1}{I(\theta)}
$$

3. **Asymptotic Normality**: The distribution of $\sqrt{n}(\hat{\theta} - \theta)$ is approximately normal for large $n$, allowing the construction of confidence intervals.

$$
\hat{\theta} \xrightarrow{d} \mathcal{N}\left(\theta, \frac{1}{nI(\theta)}\right)
$$

## Applications

MLE is applied in various fields:

- **Machine Learning**: Used to train classifiers (e.g., logistic regression) and regressors (e.g., linear regression).
- **Signal Processing**: Estimating parameters of signals in noise.
- **Bioinformatics**: Inferring evolutionary trees and estimating mutation rates.
- **Finance**: Modeling asset returns with GARCH models.

## Conclusion

MLE is a powerful tool for parameter estimation, providing optimal estimates under certain conditions. Its applications span multiple domains, making it an essential technique in statistical modeling and machine learning.
