# Euler's Phi Function

Euler's Phi Function, or the Euler Totient Function, denoted as $\phi(n)$, counts the number of positive integers up to $n$ that are relatively prime to $n$. Two numbers are relatively prime if their greatest common divisor (GCD) is 1.

### Euler's Phi Function Formula

For a positive integer $n$ with the prime factorization:

$$
n = p_1^{e_1} \cdot p_2^{e_2} \cdot \ldots \cdot p_k^{e_k}
$$

where $(p_1, p_2, \ldots, p_k )$ are distinct prime numbers, the Euler's Phi Function $\phi(n)$ is:

$$
\phi(n) = n \left(1 - \frac{1}{p_1}\right) \left(1 - \frac{1}{p_2}\right) \cdots \left(1 - \frac{1}{p_k}\right)
$$

### Explanation

- **Prime Factorization**: Express $n$ as a product of primes raised to their respective powers.
  
- **Calculation**: Multiply $n$ by $\left(1 - \frac{1}{p_i}\right)$ for each distinct prime $p_i$ dividing $n$.

### Example

To find $\phi(12) $:

1. Factorize 12: $12 = 2^2 \cdot 3^1$.

2. Apply the formula:

$$\phi(12) = 12 \left(1 - \frac{1}{2}\right) \left(1 - \frac{1}{3}\right)
$$

$$\phi(12) = 12 \cdot \frac{1}{2} \cdot \frac{2}{3} = 4
$$

So, there are 4 positive integers up to 12 that are relatively prime to 12.
