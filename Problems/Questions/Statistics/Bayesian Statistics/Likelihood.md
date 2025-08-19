# Likelihood

## Introduction

Likelihood is a fundamental concept in statistics and probability theory that quantifies the probability of observing a given set of data under different parameter values. It plays a crucial role in statistical inference, machine learning, and various scientific fields by providing a framework to estimate parameters and make predictions based on observed data.

## Definition

The likelihood function, denoted as $\mathcal{L}(\theta | x)$, represents the probability of observing the data $x$ given a parameter $\theta$. Formally, it is defined as:

$$
\mathcal{L}(\theta | x) = P(x | \theta)
$$

Here, $P(x | \theta)$ is the conditional probability of $x$ given $\theta$, and $\theta$ can be a vector of parameters. Unlike probability distributions where $\theta$ is fixed, in likelihood, \( \theta \) is treated as a variable to be estimated.

### Example

Suppose we have a dataset $X = \{x_1, x_2, ..., x_n\}$ drawn from a normal distribution with unknown mean $\mu$ and known variance $\sigma^2$. The likelihood function for the parameters $\mu$ is:

$$
\mathcal{L}(\mu | X) = \prod_{i=1}^{n} \frac{1}{\sqrt{2\pi\sigma^2}} e^{-\frac{(x_i - \mu)^2}{2\sigma^2}}
$$

To find the maximum likelihood estimate (MLE) of $\mu$, we take the logarithm of the likelihood function:

$$
\ln \mathcal{L}(\mu | X) = -\frac{n}{2}\ln(2\pi\sigma^2) - \frac{1}{2\sigma^2} \sum_{i=1}^{n} (x_i - \mu)^2
$$

Taking the derivative with respect to $\mu$ and setting it to zero:

$$
\frac{\partial \ln \mathcal{L}}{\partial \mu} = \frac{1}{\sigma^2} \sum_{i=1}^{n} (x_i - \mu) = 0
$$

Solving for $\mu$:

$$
\hat{\mu}_ {MLE} = \frac{1}{n} \sum_{i=1}^{n} x_i
$$

This demonstrates how likelihood is used to estimate parameters by maximizing the probability of observing the data.

## Properties

### 1. Proportionality vs. Equality

The likelihood function is proportional to the probability distribution but treats $\theta$ as a variable rather than a fixed parameter:

$$
P(x | \theta) = L(\theta | x)
$$

This distinction allows us to use likelihood for inference without fixing $\theta$.

### 2. Maximum Likelihood Estimation (MLE)

MLE is a method that finds the parameter values maximizing the likelihood function:

$$
\hat{\theta}_ {MLE} = \arg \max_{\theta} \mathcal{L}(\theta | x)
$$

This approach is widely used in statistics and machine learning for parameter estimation.

### 3. Log-Likelihood Function

Taking the logarithm of the likelihood simplifies computation, especially with products turning into sums:

$$
\ln \mathcal{L}(\theta | x) = \sum_{i=1}^{n} \ln P(x_i | \theta)
$$

This property is particularly useful in optimization and avoids numerical underflow.

### 4. Invariance

If \( T(x) \) is a sufficient statistic, the likelihood function depends only on $T(x)$:

$$
\mathcal{L}(\theta | x) = \mathcal{L}(\theta | T(x))
$$

This property highlights the importance of sufficient statistics in reducing data dimensions.

### 5. Likelihood Ratio

The likelihood ratio compares the likelihoods under two different parameter values:

$$
\Lambda = \frac{\mathcal{L}(\theta_0 | x)}{\mathcal{L}(\theta_1 | x)}
$$

It is used in hypothesis testing to assess the significance of parameter differences.

## Applications

### 1. Hypothesis Testing

In statistics, likelihood ratios are used to test hypotheses about parameters:

$$
-2 \ln \Lambda = -2 \left( \ln \mathcal{L}(\theta_0 | x) - \ln \mathcal{L}(\theta_1 | x) \right)
$$

This statistic follows a chi-squared distribution under the null hypothesis.

### 2. Machine Learning

In classification models, such as logistic regression, the loss function is based on log-likelihood to maximize correct predictions:

$$
\mathcal{L} = -\frac{1}{n} \sum_{i=1}^{n} [y_i \ln h_\theta(x_i) + (1 - y_i) \ln(1 - h_\theta(x_i))]
$$

### 3. Bayesian Inference

In Bayesian statistics, likelihood combines with prior distributions to form posterior probabilities:

$$
P(\theta | x) = \frac{P(x | \theta) P(\theta)}{P(x)}
$$

This framework updates beliefs about parameters based on observed data.

## Conclusion

Likelihood is a cornerstone in statistical inference and machine learning, enabling parameter estimation and hypothesis testing. By understanding its properties and applications, we can effectively model real-world phenomena and make informed decisions based on data.