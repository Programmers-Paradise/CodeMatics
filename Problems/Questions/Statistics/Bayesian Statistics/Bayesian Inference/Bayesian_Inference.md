# Bayesian Inference

## Introduction

Bayesian inference is a statistical method used to update the probability of a hypothesis as more evidence or information becomes available. It plays a crucial role in various fields, including mathematics, statistics, machine learning, and engineering, by providing a framework for incorporating prior knowledge with observed data to make probabilistic predictions.

## Definition

Bayesian inference is based on Bayes' theorem, which describes the probability of an event based on prior knowledge of conditions that might be related to the event. The theorem is expressed as:

$$ P(A|B) = \frac{P(B|A) \cdot P(A)}{P(B)} $$

Where:
- $P(A|B)$ is the posterior probability of hypothesis A given evidence B.
- $P(B|A)$ is the likelihood of observing evidence B given hypothesis A.
- $P(A)$ is the prior probability of hypothesis A.
- $P(B)$ is the marginal likelihood or normalizing constant.

### Key Components:
1. **Prior Probability**: Represents existing beliefs about an event before considering new data.
2. **Likelihood**: The probability of observing the data given a hypothesis.
3. **Posterior Probability**: The updated probability of the hypothesis after incorporating the evidence.

## Example

**Problem**: Suppose there is a disease with prevalence 1% (prior). A test for the disease has a 95% true positive rate and a 5% false positive rate. If a randomly selected individual tests positive, what is the probability they actually have the disease?

**Solution**:
- Let $D$ be the event that an individual has the disease.
- Let $T+$ be the event of testing positive.

Using Bayes' theorem:

$$ P(D|T+) = \frac{P(T+|D) \cdot P(D)}{P(T+)} $$

Where:
- $P(D) = 0.01$ (prior)
- $P(T+|D) = 0.95$ (sensitivity)
- $P(T+) = P(T+|D)P(D) + P(T+|\neg D)P(\neg D) = (0.95)(0.01) + (0.05)(0.99) = 0.0594$

Thus:

$$ P(D|T+) = \frac{0.95 \cdot 0.01}{0.0594} \approx 0.1587 $$

So, approximately a 15.87% chance of having the disease despite testing positive.

## Properties

### 1. **Conditional Probability**
Bayesian inference relies on conditional probabilities to update beliefs based on new evidence.

$$ P(A|B) = \frac{P(B|A) \cdot P(A)}{P(B)} $$

### 2. **Conjugate Priors**
Using conjugate priors simplifies computation by ensuring the posterior is of the same family as the prior.

For example, if the likelihood is binomial and the prior is beta-distributed:
$\text{Posterior} = Beta(\alpha + k, \beta + n - k)$
Where $k$ is successes and $n$ trials.

### 3. **Marginal Likelihood**
The marginal likelihood integrates over all possible parameter values to normalize the posterior:

$$ P(B) = \int P(B|\theta)P(\theta)d\theta $$

This is crucial for model comparison.

### 4. **Coherence**
Bayesian updates are coherent, meaning they respect probability axioms and provide consistent results across different scenarios.

## Applications

1. **Machine Learning**: Used in parameter estimation (e.g., Naive Bayes classifiers) and probabilistic modeling.
2. **Spam Filtering**: Determines the probability an email is spam based on word presence.
3. **Medical Diagnostics**: Assesses disease likelihood given test results, aiding in diagnosis.
4. **Signal Processing**: Enhances signal-to-noise ratio by Bayesian denoising techniques.
5. **Astronomy**: Inferences about celestial events using noisy data.

Bayesian inference's versatility makes it a cornerstone across various scientific and engineering disciplines.