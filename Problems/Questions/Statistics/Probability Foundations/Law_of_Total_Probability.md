# Law of Total Probability

The Law of Total Probability is a fundamental principle in probability theory that allows us to calculate the probability of an event by breaking it down into simpler, conditional probabilities. It is particularly useful when dealing with complex events that can be partitioned into mutually exclusive scenarios.

## Definition

The Law of Total Probability states that for any two events $A$ and $B$, where $B$ partitions the sample space into disjoint subsets $B_1, B_2, \ldots, B_n$, the probability of event $A$ can be expressed as:

$$
P(A) = P(B_1)P(A|B_1) + P(B_2)P(A|B_2) + \cdots + P(B_n)P(A|B_n)
$$

This equation shows that the total probability of $A$ is the sum of the probabilities of each partition multiplied by the conditional probability of $A$ given that partition.

## Example

Suppose we have a bag containing 3 red balls and 2 blue balls. We draw one ball, note its color, and then draw another without replacement. What is the probability that the second ball is blue?

Let's define:
- $B_1$: First ball is red.
- $B_2$: First ball is blue.
- $A$: Second ball is blue.

Using the Law of Total Probability:

$$
P(A) = P(B_1)P(A|B_1) + P(B_2)P(A|B_2)
$$

Calculating each term:
- $P(B_1) = \frac{3}{5}$, and given $B_1$, there are 2 blue balls left out of 4: $P(A|B_1) = \frac{2}{4} = \frac{1}{2}$.
- $P(B_2) = \frac{2}{5}$, and given $B_2$, there are still 2 blue balls left out of 4: $P(A|B_2) = \frac{2}{4} = \frac{1}{2}$.

Thus,

$$
P(A) = \left(\frac{3}{5}\times\frac{1}{2}\right) + \left(\frac{2}{5}\times\frac{1}{2}\right) = \frac{3}{10} + \frac{1}{5} = \frac{1}{2}
$$

## Properties

- **Partition of the Sample Space**: The events $B_1, B_2, \ldots, B_n$ must be mutually exclusive and collectively exhaustive.
  
  - *Mutually Exclusive*: $P(B_i \cap B_j) = 0$ for all $i \neq j$.
  - *Collectively Exhaustive*: $P(B_1) + P(B_2) + \cdots + P(B_n) = 1$.

- **Conditional Probability**: The conditional probability $P(A|B_i)$ represents the likelihood of event $A$ occurring given that $B_i$ has occurred.

- **Independence**: If events within a partition are independent, their occurrence does not affect each other's probabilities. However, this is not a requirement for applying the Law of Total Probability.

## Applications

1. **Bayesian Inference**: Used in updating beliefs based on new evidence.
2. **Genetics**: Calculating probabilities of genetic traits being passed down.
3. **Machine Learning (Naive Bayes)**: Classifying data by calculating posterior probabilities.
4. **Reliability Engineering**: Assessing system reliability by considering component failures.
5. **Queueing Theory**: Analyzing waiting times and service systems.

The Law of Total Probability is a versatile tool with applications across various fields, enabling complex probability calculations through decomposition into manageable parts.