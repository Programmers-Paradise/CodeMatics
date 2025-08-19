# Bayesian Inference: MAP Estimation

## Introduction

Bayesian inference is a statistical framework that allows us to update our beliefs about parameters based on observed data. Maximum A Posteriori (MAP) estimation is a key technique within this framework, used to estimate the most probable value of a parameter given prior knowledge and observed data. It plays a crucial role in fields such as machine learning, where incorporating prior information can improve model accuracy.

## Definition

The MAP estimator finds the mode of the posterior distribution:

$$
\hat{\theta}_ {MAP} = \arg \max_{\theta} p(\theta|y) 
$$

Using Bayes' theorem:

$$
p(\theta|y) = \frac{p(y|\theta)p(\theta)}{p(y)}
$$

Since $p(y)$ is constant with respect to $\theta$, we maximize the numerator:

$$
\hat{\theta}_ {MAP} = \arg \max_{\theta} p(y|\theta)p(\theta)
$$

For computational efficiency, optimization of the log-posterior is often preferred:

$$
\hat{\theta}_ {MAP} = \arg \max_{\theta} [\log p(y|\theta) + \log p(\theta)]
$$

## Example

**Problem**: Estimate bias $\theta$ of a coin given 10 heads out of 20 flips, with a Beta(α=2, β=2) prior.

**Likelihood**: Binomial distribution:

$$
p(y|\theta) = \binom{20}{10} \theta^{10}(1-\theta)^{10}
$$

**Prior**: Beta distribution:

$$
p(\theta) = \frac{\theta^{2-1}(1-\theta)^{2-1}}{B(2,2)} 
$$

**Posterior**: Beta(α=12, β=12):

$$
p(\theta|y) \propto p(y|\theta)p(\theta)
$$

Taking derivative with respect to $\theta$:

$$
\frac{d}{d\theta} [\log p(\theta|y)] = \frac{10}{\theta} - \frac{10}{1-\theta} + \frac{1}{\theta} - \frac{1}{1-\theta}
$$

Setting derivative to zero:

$$
\hat{\theta}_{MAP} = \frac{12-1}{(12)+(12)-2} = 0.5
$$

## Properties

- **Point Estimator**: MAP provides a single best estimate, contrasting with full posterior distributions.
  
- **Computational Efficiency**: Often easier than Bayesian integration due to optimization techniques.

- **Sensitivity**: Results can be influenced by prior choice and may ignore uncertainty quantification.

## Applications

- **Machine Learning**: Used in parameter estimation for models like logistic regression.
  
- **Signal Processing**: Incorporates prior knowledge for tasks like denoising.
  
- **Deep Learning**: Regularizes neural networks via priors on weights, enhancing generalization.