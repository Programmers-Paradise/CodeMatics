### Euler's Tau Function: Introduction

Euler's Tau Function, denoted as $\tau(n) $, counts the number of positive divisors of a positive integer $n $. It is a generalization of the concept of counting divisors and is used in various areas of number theory.

### Euler's Tau Function Formula

For a positive integer $n$ with the prime factorization:

$$
n = p_1^{e_1} \cdot p_2^{e_2} \cdot \ldots \cdot p_k^{e_k}
$$

where $( p_1, p_2, \ldots, p_k)$ are distinct primes, the Euler's Tau Function $\tau(n)$ is:

$$
\tau(n) = (e_1 + 1) \cdot (e_2 + 1) \cdot \ldots \cdot (e_k + 1)
$$

### Explanation

- **Prime Factorization**: Express $n$ as a product of primes raised to their respective powers.
- **Count of Divisors**: Increment each exponent by 1, and multiply the results to get the total number of positive divisors.

### Example

To find $\tau(60)$:

1. **Prime Factorization**:

$$
60 = 2^2 \cdot 3^1 \cdot 5^1
$$

2. **Apply the Formula**:

$$
\tau(60) = (2 + 1) \cdot (1 + 1) \cdot (1 + 1) = 3 \cdot 2 \cdot 2 = 12
$$

So, 60 has 12 positive divisors.
