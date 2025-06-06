# Minkowski Distance

Minkowski distance is a generalization of both Euclidean and Manhattan distances. It provides a flexible way to measure the distance between two points in an $ n $-dimensional space by introducing a parameter $ p $. Depending on the value of $ p $, Minkowski distance can represent different types of distances.

---

### Minkowski Distance Formula

For two points $\mathbf{p} = (p_1, p_2, \ldots, p_n)$ and $\mathbf{q} = (q_1, q_2, \ldots, q_n)$ in an $ n $-dimensional space, the Minkowski distance $d$ is defined as:

$$
d(\mathbf{p}, \mathbf{q}) = \left( \sum_{i=1}^{n} |p_i - q_i|^p \right)^{\frac{1}{p}}
$$

Where:

- $p$ is a positive real number that determines the type of distance:
  - When $p =2$, Minkowski becomes **Euclidean** distance.
  - When $p =1$, it becomes **Manhattan** distance (not discussed here).
- $|p_i - q_i|$ represents the absolute difference between coordinates in the $ i $-th dimension.

---

### Explanation

- The parameter $p$ controls how differences are weighted:
  - Larger values of $p$ emphasize larger differences, while smaller values give more weight to smaller differences.
- Minkowski distance is widely used in clustering algorithms (e.g., k-means), nearest neighbor methods, and other machine learning applications where flexible distance measures are needed.

---

### Example

For points $\mathbf{p} = (3, 4)$ and $\mathbf{q} = (7, 1)$ in 2D space with $p = 3$:

$$
d(\mathbf{p}, \mathbf{q}) = \left( |3 - 7|^3 + |4 - 1|^3 \right)^{\frac{1}{3}} 
= \left( |-4|^3 + |3|^3 \right)^{\frac{1}{3}}
= \left(64 + 27\right)^{\frac{1}{3}} = \sqrt[3]{91} \approx 4.5
$$

---

## Challenge

Create a program to compute the Minkowski distance between two $n$-dimensional vectors using a given parameter $p$.