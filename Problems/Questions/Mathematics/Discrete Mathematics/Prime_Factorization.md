# Prime Factorization

Prime Factorization is the process of expressing a positive integer as a product of its prime numbers. Each integer greater than 1 can be uniquely represented as a product of primes raised to specific powers. This is fundamental in number theory and has applications in areas like cryptography and algorithm design.

### Prime Factorization Process

To find the prime factorization of a positive integer $n$:

1. **Divide by the Smallest Prime**: Start with the smallest prime number (2) and divide $n$. If $n$ is divisible, record the prime and divide $n$ by it. Repeat until $n$ is no longer divisible by this prime.

2. **Move to the Next Prime**: Move to the next smallest prime and repeat the process until $n$ is reduced to 1.

3. **Combine the Factors**: The final expression of $n$ will be a product of primes raised to their respective powers.

### Example

Find the prime factorization of 60:

1. **Divide by 2**:

$$
60 \div 2 = 30
$$

$$
30 \div 2 = 15
$$

$$\qquad$$ 15 is not divisible by 2, so move to the next prime.

2. **Divide by 3**:

$$
15 \div 3 = 5
$$

$$\qquad$$ 5 is a prime number itself.

3. **Combine the Factors**:

$$\qquad$$ The prime factorization of 60 is:

$$
60 = 2^2 \cdot 3^1 \cdot 5^1
$$

## Challenge

Create a program to represent a number with its prime factors
