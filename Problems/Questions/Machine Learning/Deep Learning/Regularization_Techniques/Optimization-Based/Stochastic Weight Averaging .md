# Stochastic Weight Averaging (SWA)

## Introduction

Stochastic Weight Averaging (SWA) is a technique used in machine learning to improve the generalization of models by averaging weights obtained during training. It helps prevent overfitting, ensuring that models perform well on unseen data.

## Definition

Given a model trained using stochastic gradient descent with weight vectors $\theta_t$ at each step $t$, SWA computes an exponential moving average of these weights and then averages them to produce the final weights:

$$
\bar{\theta} = \frac{1}{T}\sum_{t=1}^{T} \gamma^{T-t} \theta_t
$$

where $\gamma$ is a decay rate between 0 and 1, and $T$ is the total number of training steps.

## Example

Consider a model with two weights, $\theta_1$ and $\theta_2$, which evolve as follows:

- Step 1: $\theta_1 = 5$, $\theta_2 = 3$
- Step 2: $\theta_1 = 4$, $\theta_2 = 4$
- Step 3: $\theta_1 = 6$, $\theta_2 = 2$

Using a decay rate of $\gamma=0.9$:

$$
\bar{\theta}_1 = \frac{1}{3}(0.9^{2} \times 5 + 0.9^{1} \times 4 + 0.9^{0} \times 6) = 5.07 \\
\bar{\theta}_2 = \frac{1}{3}(0.9^{2} \times 3 + 0.9^{1} \times 4 + 0.9^{0} \times 2) = 3.17
$$

## Properties

- **Efficiency**: Uses the training process itself, requiring no extra data or models.
- **Weight Averaging**: The final weights are a weighted average of all trained weights, with recent ones having more influence.

## Applications

SWA is applied in machine learning to enhance model generalization. It's used during training for neural networks and SVMs, aiding in scenarios where computational resources are limited by providing an efficient ensemble method.