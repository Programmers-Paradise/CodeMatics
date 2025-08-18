# Bayes' Theorem

Bayes' Theorem is a fundamental concept in probability theory and statistics that describes how to update probabilities of hypotheses when given evidence. It has wide-ranging applications in fields such as mathematics, statistics, machine learning, physics, engineering, and medicine.

## Definition

Bayes' Theorem provides a way to calculate the conditional probability of an event based on prior knowledge of conditions related to the event. Formally, for two events $A$ and $B$ where $P(B) \neq 0$, Bayes' Theorem is expressed as:

$$
P(A|B) = \frac{P(B|A) \cdot P(A)}{P(B)}
$$

Where:
- $P(A|B)$ is the posterior probability of event $A$ given that $B$ has occurred.
- $P(B|A)$ is the likelihood of event $B$ occurring given that $A$ has happened.
- $P(A)$ is the prior probability of event $A$.
- $P(B)$ is the marginal likelihood or evidence.

### Key Properties

1. **Inverse Probability**: Bayes' Theorem allows for updating probabilities based on new evidence, effectively inverting conditional probabilities.

2. **Bayesian Statistics Foundation**: It forms the basis of Bayesian inference, where prior beliefs are updated with data to form posterior distributions.

3. **Conditional Independence**: The theorem relies on the independence of events $A$ and $B$ when computing the joint probability $P(A \cap B) = P(B|A) \cdot P(A)$.

4. **Cromwell's Rule**: It is important not to assign a prior probability of zero unless certain, as this can make posterior probabilities impossible to update.

### Example

**Problem**: A medical test has a 99% accuracy rate (probability of testing positive given disease, $P(Positive|Disease) = 0.99$) and a 1% prevalence rate ($P(Disease) = 0.01$). The probability of testing positive without the disease is 2% ($P(Positive|\neg Disease) = 0.02$). What is the probability that someone has the disease given they tested positive?

**Solution**:

Using Bayes' Theorem:

$$
P(Disease|Positive) = \frac{P(Positive|Disease) \cdot P(Disease)}{P(Positive)}
$$

First, calculate $P(Positive)$:

$$
P(Positive) = P(Positive|Disease) \cdot P(Disease) + P(Positive|\neg Disease) \cdot P(\neg Disease)
$$

$$
= (0.99 \times 0.01) + (0.02 \times 0.99)
$$

$$
= 0.0099 + 0.0198 = 0.0297
$$

Now, compute \( P(Disease|Positive) \):

$$
P(Disease|Positive) = \frac{0.99 \times 0.01}{0.0297} ≈ 0.3333 \text{ or } 33.33\%
$$

### Applications

1. **Machine Learning**: Bayes' Theorem is used in classification algorithms like Naive Bayes, which relies on conditional probabilities to predict class labels.

2. **Medical Diagnostics**: It helps in determining the probability of a disease given test results, aiding in accurate diagnosis.

3. **Spam Filtering**: Bayesian methods are employed to assess the likelihood that an email is spam based on its content.

4. **Genetics**: In linkage analysis, it helps determine the probability of genetic traits being passed on.

5. **Everyday Decision-Making**: It can be applied to everyday scenarios like weather prediction or assessing risks based on available information.

Bayes' Theorem is a powerful tool for updating beliefs with evidence and has transformed various fields through its ability to handle uncertainty probabilistically.