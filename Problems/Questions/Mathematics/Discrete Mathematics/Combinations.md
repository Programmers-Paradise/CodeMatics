# Combinations

Combinations refer to the selection of items from a larger set where the order does not matter. They are used to determine the number of ways to choose a certain number of items from a set.

### Combinations Formula

The number of combinations of selecting $k$ items from a set of $n$ items is denoted by $\binom{n}{k}$ and is calculated using the formula:

$$
\binom{n}{k} = \frac{n!}{k! \cdot (n - k)!}
$$

Where:

- $n$ is the total number of items in the set.
- $k$ is the number of items to be chosen.
- $!$ denotes factorial.

### Explanation

- **Factorial**: The factorial of a non-negative integer  $n$, denoted $n!$, is the product of all positive integers up to $n$. For example, $5! = 120$.
- **Combinations vs. Permutations**: Combinations do not consider the order of selection, unlike permutations.

### Example

For a set of 5 items, choosing 3 items:

$$\binom{5}{3} = \frac{5!}{3! \cdot (5 - 3)!} = \frac{120}{6 \cdot 2} = 10
$$

This indicates there are 10 different ways to choose 3 items from a set of 5 items.

## Challenge

Create a program to find the combinations of any set(values).

**Note** : Choose any set and print the total number of combination.
