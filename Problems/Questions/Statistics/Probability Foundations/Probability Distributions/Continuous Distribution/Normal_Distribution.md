# Normal Distribution

## Introduction

The normal distribution is a cornerstone of probability theory and statistics, characterized by its bell-shaped curve. It is pivotal in various fields due to the Central Limit Theorem, which states that the sum of independent random variables tends toward a normal distribution as the sample size increases. This distribution is fundamental in natural sciences, social sciences, engineering, and machine learning for modeling real-world phenomena.

## Definition

The normal distribution, often referred to as the Gaussian distribution, is defined by two parameters: the mean (μ) and variance (σ²). Its probability density function (PDF) is given by:

$$
f(x; \mu, \sigma^2) = \frac{1}{\sigma \sqrt{2\pi}} e^{-\frac{(x - \mu)^2}{2\sigma^2}}
$$

This equation describes the distribution's peak at μ and its spread determined by σ. The standard normal distribution (μ=0, σ²=1) is a special case.

## Example

Consider X ~ N(50, 10²). To find P(X < 60):

1. Compute Z-score: $Z = \frac{60 - 50}{10} = 1$
2. Look up P(Z < 1) ≈ 0.8413

Thus, the probability is approximately 84.13%.

## Properties

- **Symmetry**: The distribution is symmetric about μ.
- **Mean, Median, Mode**: All equal to μ.
- **Variance**: σ²; standard deviation is σ.
- **Total Area**: Equals 1 under the curve.
- **Unimodal**: Single peak at μ.

**Empirical Rule**: Approximately 68% of data lies within μ ± σ, 95% within μ ± 2σ, and 99.7% within μ ± 3σ.

## Applications

The normal distribution is widely applied in:

- **Statistics**: For hypothesis testing and confidence intervals.
- **Quality Control**: Monitoring product dimensions for defects.
- **Social Sciences**: Analyzing test scores and income distributions.
- **Machine Learning**: In algorithms like Gaussian Naive Bayes.
- **Engineering**: Modeling component lifetimes and tolerances.

It also models natural phenomena such as human heights and weights, providing a statistical framework for understanding variability.