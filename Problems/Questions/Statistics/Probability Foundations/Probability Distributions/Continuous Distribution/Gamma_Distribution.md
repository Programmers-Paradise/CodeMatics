# Gamma Distribution

The Gamma distribution is a continuous probability distribution that is widely used in various fields such as physics, engineering, reliability analysis, machine learning, finance, hydrology, climatology, queueing theory, telecommunications traffic modeling, survival analysis, and actuarial science. It is particularly useful for modeling waiting times or the time between events, making it a versatile tool for understanding phenomena characterized by skewed distributions.

## Definition

The Gamma distribution is defined by two parameters: shape (k) and scale (θ), where θ > 0. The probability density function (PDF) of a Gamma-distributed random variable X is given by:

$$
f(x; k, \theta) = \frac{1}{\Gamma(k)\theta^k} x^{k-1} e^{-x/\theta}
$$

where $x > 0$, and Γ(k) is the gamma function defined as:

$$
\Gamma(k) = \int_0^\infty t^{k-1} e^{-t} dt
$$

The cumulative distribution function (CDF) of the Gamma distribution can be expressed using the incomplete gamma function:

$$
F(x; k, \theta) = \frac{\gamma(k, x/\theta)}{\Gamma(k)}
$$

where $\gamma(k, x/\theta)$ is the lower incomplete gamma function.

### Example

Suppose we have a Gamma-distributed random variable X with shape parameter $k = 2$ and scale parameter $\theta = 0.5$. We want to find the probability that X is less than or equal to 5, i.e., $P(X \leq 5)$.

1. **PDF Calculation**:
   The PDF of X is:

$$
f(x; 2, 0.5) = \frac{1}{\Gamma(2)(0.5)^2} x^{2-1} e^{-x/0.5}
$$

   Since $\Gamma(2) = 1! = 1$, this simplifies to:

$$
f(x; 2, 0.5) = 4x e^{-2x}
$$

2. **CDF Calculation**:
   The CDF is given by:

$$
F(5; 2, 0.5) = \frac{\gamma(2, 10)}{\Gamma(2)}
$$

Using the lower incomplete gamma function $\gamma(2, 10)$, we find that:

$$
\gamma(2, 10) = \int_0^{10} t e^{-t} dt
$$

Solving this integral using integration by parts yields:

$$
\gamma(2, 10) = - (x + 1) e^{-x} \Big|_{0}^{10} = -(11)e^{-10} + 1
$$

Therefore,

$$
F(5; 2, 0.5) = 1 - 11e^{-10} \approx 0.9999546
$$

This example demonstrates how the Gamma distribution can be used to calculate probabilities for specific values of interest.

## Properties

### Mean and Variance

The mean (expected value) and variance of a Gamma-distributed random variable X are:

$$
E(X) = k\theta
$$

$$
Var(X) = k\theta^2
$$

### Mode

The mode of the Gamma distribution is given by:

$$
\text{Mode}(X) = \frac{k-1}{\theta} \quad \text{for } k > 1
$$

### Support

The Gamma distribution is defined for all positive real numbers, i.e., $x > 0$.

### Skewness

The skewness of the Gamma distribution is:

$$
\gamma_1 = \frac{2}{\sqrt{k}}
$$

### Entropy

The entropy of a Gamma-distributed random variable X is given by:

$$
H(X) = -\left( \psi(k) + \ln(\theta) + (1 - k)\psi'(k) \right)
$$

where $\psi(k)$ is the digamma function and $\psi'(k)$ is the trigamma function.

## Applications

The Gamma distribution has a wide range of applications across various fields:

### Physics
- Modeling waiting times between events, such as radioactive decay or photon emission.

### Engineering
- Reliability analysis to model failure times or component lifetimes.

### Machine Learning
- As a conjugate prior in Bayesian inference for parameters of other distributions like the Poisson and exponential distributions.
- Used in algorithms for modeling non-negative continuous data, such as in topic models (e.g., Latent Dirichlet Allocation).

### Finance
- Modeling financial returns or loss distributions.

### Hydrology
- Analyzing streamflow and rainfall data.

### Climatology
- Modeling wind speeds and other meteorological phenomena.

### Queueing Theory
- Describing service times in queueing systems.

### Telecommunications
- Modeling network traffic intensity.

### Survival Analysis
- Used to model time-to-failure or survival times in medical studies.

### Actuarial Science
- Assessing insurance claims and risk management.

The Gamma distribution's flexibility and ability to model a variety of phenomena make it an essential tool in many scientific and engineering disciplines.