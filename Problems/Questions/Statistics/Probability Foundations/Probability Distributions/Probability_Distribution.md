# Probability Distribution

## Introduction

A probability distribution is a mathematical function that assigns probabilities to the outcomes of an experiment. It is fundamental in statistics, machine learning, physics, and engineering for modeling uncertainty and randomness.

### Why it's important:
Probability distributions allow us to model real-world phenomena by quantifying the likelihood of different outcomes. They are essential in fields like statistics, where they help describe data characteristics, and in machine learning, where they underpin algorithms that make predictions under uncertainty.

---

## Definition

A probability distribution assigns probabilities to possible outcomes of an experiment such that:

1. **Total Probability**: The sum of probabilities for all possible outcomes is 1.
   
$$
\sum_{x} P(X = x) = 1
$$

2. **Non-Negativity**: Each probability must be non-negative.

$$
P(X = x) \geq 0 \quad \text{for all } x
$$

### Types of Probability Distributions

- **Discrete Probability Distribution**:
  
  - **Probability Mass Function (PMF)**: For discrete random variables.
    
$$
p(x) = P(X = x)
$$
    
  - Example: Coin flip outcomes.

- **Continuous Probability Distribution**:
  
  - **Probability Density Function (PDF)**: For continuous random variables.
    
$$
f(x) = \text{Density at point } x
$$
    
  - Example: Heights of individuals.

- **Cumulative Distribution Function (CDF)**:
  
  - Gives the probability that a random variable is less than or equal to a given value.
    
$$
F(x) = P(X \leq x)
$$

---

## Example

**Example Problem**: Tossing a fair coin twice.

- **Possible Outcomes**: HH, HT, TH, TT.

- **Probability Mass Function (PMF)**:

  - Each outcome has probability $\frac{1}{4}$.

  - PMF for number of heads $X$ is:
    
$$
P(X = k) = \binom{2}{k} \left(\frac{1}{2}\right)^2
$$

- **CDF**:

  - $F(k) = P(X \leq k)$.

---

## Properties

### Key Properties of Probability Distributions

1. **Normalization**:
   
   The sum or integral over all possible outcomes equals 1.
   
$$
\sum_{x} p(x) = 1 \quad \text{or} \quad \int f(x) dx = 1
$$

2. **Support and Range**:
   
   - **Discrete**: Defined on a countable set of outcomes (e.g., integers).
   - **Continuous**: Defined over an interval of real numbers.

3. **Uniqueness**:
   
   Each distribution is uniquely determined by its parameters.
   
$$
X \sim D(\theta) \quad \text{where } \theta \text{ are parameters}
$$

4. **Moments**:
   
   - **Mean (Expected Value)**:
     
$$
E[X] = \sum x p(x) \quad \text{or} \quad \int x f(x) dx
$$

   - **Variance**:

$$
Var(X) = E[(X - E[X])^2] = E[X^2] - (E[X])^2
$$

5. **Cumulative Distribution Function (CDF)**:

   - Non-decreasing function.
   
 $$
 F(x) = P(X \leq x)
 $$

---

## Applications

### Fields Where Probability Distributions Are Used

1. **Statistics**:
   
   - Modeling data distributions for inference and hypothesis testing.

2. **Machine Learning**:
   
   - Algorithms like Naive Bayes use probability distributions to classify data.
   - Generative models (e.g., GANs) rely on distribution modeling.

3. **Quantum Mechanics**:
   
   - Wave functions describe the probabilities of quantum states.

4. **Signal Processing**:
   
   - Fourier transforms relate signals to their frequency distributions.

5. **Thermodynamics and Statistical Physics**:
   
   - Boltzmann distributions model particle energies in a system.

6. **Finance**:
   
   - Log-normal distributions model stock prices.
   - Risk management uses extreme value distributions.

---

This structured approach covers the essential aspects of probability distributions, from definitions to real-world applications, providing a comprehensive understanding of their role and significance.