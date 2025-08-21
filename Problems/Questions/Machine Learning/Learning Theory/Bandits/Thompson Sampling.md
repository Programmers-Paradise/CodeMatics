# Thompson Sampling

Thompson sampling is a powerful method used in multi-armed bandit problems to balance exploration and exploitation, optimizing decisions under uncertainty. It is widely applied in machine learning for hyperparameter tuning, recommendation systems, and A/B testing.

## Definition

Thompson sampling involves maintaining a posterior distribution over the unknown parameters of each option (arms). The algorithm samples from these distributions to decide which arm to pull next. Formally:

1. **Prior Distribution**: Start with a prior belief about the reward distribution for each arm.
2. **Posterior Update**: After observing rewards, update the posterior using Bayesian inference:

$$
P(\theta|y) \propto P(y|\theta)P(\theta)
$$

3. **Decision Making**: Sample from each arm's posterior and select the arm with the highest sample value.

## Example

Consider a two-armed bandit problem with Bernoulli rewards:

1. **Initialization**: Assume Beta priors for both arms: $\text{Beta}(\alpha, \beta)$ .
2. **Pull Arm 1**: Observe reward $y_1$. Update posterior to $\text{Beta}(\alpha + y_1, \beta + (1 - y_1))$.
3. **Sample and Decide**: Draw samples from each updated posterior; select the arm with the highest sample.

## Properties

- **Bayesian Optimality**: Thompson sampling follows the posterior distribution of rewards, making it optimal for sequential decision-making under uncertainty.
  
- **Asymptotic Optimality**: As time increases, Thompson sampling's regret grows slower compared to Upper Confidence Bound (UCB) algorithms.

- **Computational Efficiency**: Utilizes conjugate priors like Beta-Binomial, allowing quick updates without complex computations.

- **Scalability**: Efficient for large datasets and many arms due to its computational simplicity.

## Applications

Thompson sampling is applied in:

1. **Machine Learning**: Hyperparameter tuning, feature selection.
2. **Recommendation Systems**: Personalized content suggestions based on user interactions.
3. **A/B Testing**: Optimal allocation of users across variants for experiments.
4. **Robotics and Clinical Trials**: Sequential decision-making under uncertainty.

Thompson sampling's ability to adaptively balance exploration and exploitation makes it a versatile tool in various domains requiring optimal sequential decisions.