# Sampling Methods and Distribution

## Introduction

Sampling methods and probability distributions are fundamental concepts in statistics and machine learning. They enable us to make inferences about large datasets by analyzing subsets (samples) and understanding the underlying data patterns. These tools are crucial for making accurate predictions, drawing conclusions, and supporting decision-making processes across various fields such as physics, engineering, finance, and biology.

## Definition

### Sampling Methods
Sampling methods involve techniques used to select a subset of individuals or items from a larger population to estimate characteristics of the entire population. Common sampling methods include:

1. **Simple Random Sampling**: Each member of the population has an equal chance of being selected.
2. **Stratified Sampling**: The population is divided into subgroups (strata) based on specific attributes, and samples are taken from each stratum.
3. **Cluster Sampling**: The population is divided into clusters, and entire clusters are randomly selected for sampling.

### Probability Distributions
A probability distribution describes the likelihood of occurrence of different outcomes in an experiment. It can be discrete or continuous:

- **Discrete Distribution**: Defined by a probability mass function (PMF) that assigns probabilities to each possible outcome.
  - Example: Binomial distribution with parameters $n$ and $p$:

$$
P(X = k) = \binom{n}{k} p^k (1-p)^{n-k}
$$

- **Continuous Distribution**: Defined by a probability density function (PDF) that describes the relative likelihood for outcomes to occur within a given range.
  - Example: Normal distribution with mean $\mu$ and variance $\sigma^2$:
  
$$
f(x) = \frac{1}{\sigma \sqrt{2\pi}} e^{-\frac{(x-\mu)^2}{2\sigma^2}}
$$

## Example

**Problem**: Estimate the average height of adult males in a city with a population of 10,000 individuals using stratified sampling.

1. **Define Population**: $N = 10,000$ adult males.
2. **Stratification**: Divide the population into strata based on age groups (e.g., 18-25, 26-35, etc.).
3. **Sample Selection**: Select a random sample from each stratum. Suppose we select 50 individuals from each of 20 strata.
4. **Calculate Sample Mean**:
 
$$
\bar{x} = \frac{1}{n} \sum_{i=1}^{n} x_i
$$

    where \( n = 1000 \) (50 per stratum × 20 strata).
6. **Compare with Population Mean**: If the actual population mean is known, compare the sample mean to assess accuracy.

## Properties

### Discrete Distributions
- **Support**: The set of possible outcomes.
- **Probability Mass Function (PMF)**: $P(X = k)$
- **Expected Value**:

$$
E[X] = \sum_{k} k \cdot P(X=k)
$$

- **Variance**: 

$$
Var(X) = E[(X - E[X])^2]
$$

### Continuous Distributions
- **Support**: The interval over which the PDF is non-zero.
- **Probability Density Function (PDF)**: $f(x)$
- **Cumulative Distribution Function (CDF)**: 

$$
F(x) = P(X \leq x)
$$

- **Expected Value**:
 
$$
E[X] = \int_{-\infty}^{\infty} x f(x) dx
$$

- **Variance**:
- 
$$
Var(X) = E[(X - E[X])^2]
$$

## Applications

1. **Machine Learning**: Used in training models by sampling from large datasets.
2. **Physics**: Modeling experimental outcomes and natural phenomena.
3. **Engineering**: Assessing product reliability through life testing.
4. **Finance**: Risk assessment involving asset returns and market movements.
5. **Biology**: Studying population dynamics and genetic diversity.

This structured approach ensures a comprehensive understanding of sampling methods and distributions, their properties, examples, and real-world applications.