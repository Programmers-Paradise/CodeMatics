# Prior

The prior represents our initial beliefs or information about an uncertain parameter before incorporating observed data. It plays a crucial role in Bayesian statistics by serving as the foundation for updating beliefs through conditional probability.

## Definition

In probability theory, a prior distribution, denoted as π(θ), expresses the degree of belief about the value of an unknown parameter θ before considering evidence from observed data y. This distribution is updated using Bayes' theorem to form the posterior distribution after incorporating data:

$$
\pi(\theta|y) = \frac{p(y|\theta)\pi(\theta)}{\int p(y|\theta)\pi(\theta)d\theta}
$$

Here, π(θ) represents the prior belief about θ, p(y|θ) is the likelihood of observing the data given θ, and π(θ|y) is the posterior distribution after updating with data.

## Example

Consider a scenario where we are estimating the bias θ of a coin. We assume a Beta prior for θ, which is commonly used due to its conjugacy with the binomial likelihood:

$$
\pi(\theta) = \text{Beta}(\alpha, \beta)
$$

Suppose we have observed data y consisting of n coin flips with k successes (heads). The likelihood function is:

$$
p(y|\theta) = \theta^k(1-\theta)^{n-k}
$$

Applying Bayes' theorem, the posterior distribution becomes:

$$
\pi(\theta|y) = \text{Beta}(\alpha + k, \beta + n - k)
$$

This example demonstrates how the prior is updated with data to form a more informed posterior.

## Properties

1. **Conjugacy**: A conjugate prior simplifies computation by ensuring that the posterior distribution belongs to the same family as the prior.
   
   $$
   \text{Prior} \times \text{Likelihood} = \text{Posterior}
   $$

2. **Normalization**: The prior must integrate to 1, ensuring it is a valid probability distribution.

3. **Subjectivity**: The choice of prior reflects subjective beliefs or previous knowledge, which can significantly influence the posterior distribution.

4. **Exchangeability**: Under certain conditions, priors can be exchangeable, allowing for simplified modeling assumptions.

## Applications

Priors are integral to Bayesian statistics and machine learning, where they help in:

- **Modeling Uncertainty**: Quantifying uncertainty about model parameters.
- **Regularization**: In machine learning models like Naive Bayes, priors act as regularizers to prevent overfitting.
- **Reinforcement Learning**: Updating beliefs about action outcomes based on prior knowledge and new data.
- **Engineering and Science**: Incorporating existing knowledge into statistical models for accurate predictions.

In summary, the prior is a foundational element in Bayesian analysis, enabling the integration of prior knowledge with observed data to make informed decisions.