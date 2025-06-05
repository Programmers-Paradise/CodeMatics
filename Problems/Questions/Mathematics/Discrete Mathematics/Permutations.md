### Permutations: Introduction

Permutations refer to the arrangement of a set of items in a specific order. Unlike combinations, permutations take into account the order of the items.

### Permutation Formula

The number of permutations of $n$ distinct items is given by:

$$
P(n) = n!
$$

where $n!$ (n factorial) is the product of all positive integers up to $n$:

$$
n! = n \times (n - 1) \times (n - 2) \times \ldots \times 1
$$

### Permutations of a Subset

When arranging $r$ items out of $n$ distinct items, use:

$$
P(n, r) = \frac{n!}{(n - r)!}
$$

where:
- $n$ is the total number of items.
- $r$ is the number of items to arrange.

### Example

1. **Permutations of 3 distinct items (A, B, C)**:

   To find the number of permutations of 3 items:

      $$3! = 3 \times 2 \times 1 = 6
      $$

   The permutations are: ABC, ACB, BAC, BCA, CAB, CBA.

2. **Permutations of 2 items from a set of 4 (A, B, C, D)**:

   To find the number of permutations of 2 items from 4:

      $$P(4, 2) = \frac{4!}{(4 - 2)!} = \frac{24}{2} = 12
      $$

   The permutations are: AB, AC, AD, BA, BC, BD, CA, CB, CD, DA, DB, DC.

## Challenge

Create a program to find the number of permutations of $n$ items from $m$ elements.
