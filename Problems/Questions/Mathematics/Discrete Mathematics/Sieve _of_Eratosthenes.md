### Sieve of Eratosthenes: Introduction

The Sieve of Eratosthenes is an efficient algorithm for finding all prime numbers up to a given integer $ n $. It works by iteratively marking the multiples of each prime number starting from 2.

### Algorithm Steps

1. **Initialize**: Create a boolean array `isPrime` of size $n + 1$ with all entries set to `true`. The indices represent numbers, and the value indicates whether the number is prime.

2. **Mark Non-Primes**:
   - Start with the first prime number, 2.
   - For each prime $p$, mark all multiples of $p$ as `false` (non-prime) starting from $p^2$ up to $n$.

3. **Find Next Prime**:
   - Move to the next number still marked as `true` and repeat until $\sqrt{n} $.

4. **Collect Primes**:
   - After processing, indices of the `isPrime` array that are still `true` represent prime numbers.

### Example

Find all prime numbers up to 30:

1. **Initialize**:


2. **Mark Multiples of 2**:


3. **Mark Multiples of 3**:


4. **Mark Multiples of 5**:


5. **Result**:

The numbers that remain `true` in the `isPrime` array are primes: `[2, 3, 5, 7, 11, 13, 17, 19, 23, 29]`.

