# Bayesian Neural Networks

## Introduction

Bayesian neural networks (BNNs) represent a probabilistic approach to machine learning where the weights of the network are treated as random variables with probability distributions rather than fixed values. This framework allows BNNs to capture uncertainty in predictions, making them particularly valuable in fields requiring reliable decision-making under uncertainty, such as healthcare and autonomous systems.

## Definition

A Bayesian neural network extends traditional neural networks by incorporating Bayesian inference. Given input data $\mathbf{X}$ and observed targets $\mathbf{y}$, the goal is to infer the posterior distribution over weights $\mathbf{w}$:

$$
p(\mathbf{w} \mid \mathbf{X}, \mathbf{y}) = \frac{p(\mathbf{y} \mid \mathbf{X}, \mathbf{w}) \, p(\mathbf{w})}{p(\mathbf{y} \mid \mathbf{X})}
$$

Here, $p(\mathbf{w})$ is the prior distribution over weights, often chosen as a Gaussian due to its conjugacy properties.  
The likelihood $p(\mathbf{y} \mid \mathbf{X}, \mathbf{w})$ models the data given the weights, typically assuming Gaussian noise:

$$
p(\mathbf{y} \mid \mathbf{X}, \mathbf{w}) = \prod_{i=1}^{N} \mathcal{N}\!\big(y_i \mid f_\theta(\mathbf{x}_i), \sigma^2\big)
$$

The predictive distribution for a new input $\mathbf{x}^*$ is:

$$
p(y^* \mid \mathbf{x}^* , \mathbf{X}, \mathbf{y}) 
= \int p(y^* \mid \mathbf{x}^*, \mathbf{w}) \, p(\mathbf{w} \mid \mathbf{X}, \mathbf{y}) \, d\mathbf{w}
$$

## Example

Consider predicting house prices based on features $\mathbf{x}_i = [\text{size}, \text{location}]$. Assume:

- Prior: $p(\mathbf{w}) = \mathcal{N}(0, \sigma_w^2 I)$  
- Likelihood: $p(y_i \mid \mathbf{x}_ i, \mathbf{w}) = \mathcal{N}(f_\theta(\mathbf{x}_i), \sigma_n^2)$  

The posterior $p(\mathbf{w} \mid \mathbf{X}, \mathbf{y})$ is intractable analytically. Using approximate methods like variational inference, we approximate it with a distribution $q(\mathbf{w})$. For prediction:

$$
\hat{y}^* = \mathbb{E}_ {q(\mathbf{w})}\big[f_\theta(\mathbf{x}^*)\big]
$$

or using Monte Carlo sampling to estimate the integral.

## Properties

1. **Probabilistic Nature**: BNNs provide predictive distributions, accounting for uncertainty.

  $$
  p(y^* \mid \mathbf{x}^*, \mathbf{X}, \mathbf{y}) 
  = \int p(y^* \mid \mathbf{x}^*, \mathbf{w}) \, p(\mathbf{w} \mid \mathbf{X}, \mathbf{y}) \, d\mathbf{w}
  $$

2. **Uncertainty Quantification**: Captures both aleatoric and epistemic uncertainty.

3. **Bayesian Updating**: Incorporates data into prior beliefs to form posterior distributions.

4. **Regularization**: Acts as a regularizer, preventing overfitting by averaging over weights.

5. **Handling Missing Data**: Naturally handles missing values through marginalization.

6. **Scalability**: Challenges include computational complexity; recent advances use approximations for scalability.

## Applications

1. **Machine Learning**: Model uncertainty in reinforcement learning and hyperparameter tuning.  
2. **Physics**: Modeling complex systems with inherent uncertainties.  
3. **Healthcare**: Personalized treatment models considering patient variability.  
4. **Engineering**: Reliability analysis and robust control systems.  
5. **Autonomous Systems**: Decision-making under uncertainty, such as in robotics.  

---

This structured approach highlights the theoretical underpinnings, practical examples, key properties, and diverse applications of Bayesian neural
