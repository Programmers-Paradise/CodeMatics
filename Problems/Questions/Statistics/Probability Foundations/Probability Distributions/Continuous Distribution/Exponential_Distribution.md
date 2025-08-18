# Exponential Distribution

## Introduction

The exponential distribution is a continuous probability distribution that models the time between events in a Poisson process, where events occur continuously and independently at a constant average rate. It is widely used in reliability theory, queuing theory, physics, engineering, and machine learning due to its simplicity and ability to model memoryless processes.

## Definition

The exponential distribution is characterized by a single parameter λ (lambda), representing the rate or frequency of events. Its probability density function (PDF) is given by:

$$ 
f(x; \lambda) = \begin{cases} 
\lambda e^{-\lambda x} & \text{for } x \geq 0, \\
0 & \text{otherwise}.
\end{cases} 
$$

The cumulative distribution function (CDF), which gives the probability that a random variable X is less than or equal to x, is:

$$
F(x; \lambda) = 1 - e^{-\lambda x} \quad \text{for } x \geq 0. 
$$

Key properties include memorylessness and constant hazard rates.

## Example

Suppose the average time between bus arrivals at a stop is 10 minutes, so λ = 1/10 per minute. What is the probability that a person arrives and has to wait more than 15 minutes?

Using the CDF:

$$
P(X > 15) = e^{-\lambda \cdot 15} = e^{-(1/10) \cdot 15} = e^{-1.5} \approx 0.2231. 
$$

Thus, there's approximately a 22.31% chance of waiting more than 15 minutes.

## Properties

- **Memorylessness**: For any \( t > 0 \),

$$ 
P(X > s + t | X > s) = P(X > t). 
$$
  
  This is proven using the CDF:

$$ 
P(X > s + t | X > s) = \frac{P(X > s + t)}{P(X > s)} = e^{-\lambda (s + t)} / e^{-\lambda s} = e^{-\lambda t} = P(X > t).
$$

- **Mean and Variance**:
  
  Mean: $\mu = \frac{1}{\lambda}$
  
  Variance: $\sigma^2 = \frac{1}{\lambda^2}$

## Applications

The exponential distribution is applied in:

- **Reliability Engineering**: Modeling time-to-failure of components.
- **Queuing Theory**: Representing service times and inter-arrival times.
- **Physics**: Radioactive decay processes.
- **Machine Learning**: In algorithms like survival analysis and recommendation systems.

This distribution's versatility makes it a cornerstone in various scientific and engineering disciplines.