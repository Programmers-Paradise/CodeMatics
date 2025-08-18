# Standard Normal Distribution

## Introduction

The standard normal distribution is a fundamental concept in probability theory and statistics. It represents a specific type of continuous probability distribution characterized by its bell-shaped curve, also known as the Gaussian distribution. This distribution is pivotal in various fields such as mathematics, science, and engineering due to its role as a reference for other distributions and its foundational role in the Central Limit Theorem, which underpins many statistical methods.

The standard normal distribution has a mean (μ) of 0 and a variance (σ²) of 1, making it a normalized form that simplifies calculations. Its importance lies in its use as a benchmark for comparing different datasets and its foundational role in the Central Limit Theorem, which underpins many statistical methods.

## Definition

The standard normal distribution is defined by its probability density function (PDF):

$$
f(x) = \frac{1}{\sqrt{2\pi}} e^{-x^2/2}
$$

This equation describes the relative likelihood of a continuous random variable taking on a given value. The cumulative distribution function (CDF), denoted as Φ(x), provides the probability that a random variable X will be less than or equal to x:

$$
Φ(x) = \frac{1}{2} \left[ 1 + \text{erf}\left( \frac{x}{\sqrt{2}} \right) \right]
$$

where erf is the error function. The distribution is symmetric about its mean, and the total area under the curve equals 1.

### Key Properties

- **Mean (μ):** 0
- **Variance (σ²):** 1
- **Standard Deviation (σ):** 1
- **Symmetry:** Symmetric about the mean.
- **Total Area Under the Curve:** 1, representing total probability.
- **Empirical Rule (68-95-99.7):** Approximately 68% of data lies within ±1σ, 95% within ±2σ, and 99.7% within ±3σ.



## Example

**Problem:** Find the probability that a standard normal variable Z is less than 1.5.

**Solution:**

To find $P(Z < 1.5)$, we use the CDF:

$$
P(Z < 1.5) = Φ(1.5)
$$

Using standard normal tables or computational tools, we find:

$$
Φ(1.5) ≈ 0.9332
$$

Thus, there is approximately a 93.32% probability that Z is less than 1.5.

## Applications

The standard normal distribution is essential in various applications, including:

- **Hypothesis Testing:** Standardizing test statistics to compare against critical values.
- **Confidence Intervals:** Constructing intervals for population parameters using Z-scores.
- **Regression Analysis:** Assuming error terms follow a normal distribution in linear regression models.
- **Quality Control:** Monitoring processes using control charts based on normal distributions.
- **Finance:** Modeling stock market returns and risk assessment.

The standard normal distribution serves as a cornerstone in statistical theory and practical applications, providing a common framework for analyzing and comparing datasets across diverse fields.