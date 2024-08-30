
# Bayes' Theorem

Bayes' Theorem is a way to find the probability of an event given the probability of another related event. It is mathematically expressed as:

$$
P(A|B) = \frac{P(B|A) \cdot P(A)}{P(B)}
$$

Where:

- $( P(A|B))$ is the probability of $( A )$ given $( B )$ (posterior probability).
- $( P(B|A) )$ is the probability of $( B )$ given $( A)$ (likelihood).
- $( P(A))$ is the probability of $( A )$ (prior probability).
- $( P(B) )$ is the probability of $( B )$ (marginal likelihood).

### Example

Suppose a disease affects 1% of the population. A test for the disease is 
Given:

- $( P(A) = 0.01 )$ (1% prior probability)
- $( P(B|A) = 0.9 )$ (90% test accuracy)

Using Bayes' Theorem:

$$
P(A|B) = \frac{0.9 \times 0.01}{P(B)}
$$

This gives the updated probability that the person has the disease given the positive test result.

## Challenge

Create a Code for Bayes Theorem. Test it on any values.