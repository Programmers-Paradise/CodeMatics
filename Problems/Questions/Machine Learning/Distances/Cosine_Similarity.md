# Cosine Similarity

Cosine similarity is a metric used to measure how similar two vectors are, regardless of their magnitude. It is widely used in various applications, including text analysis, information retrieval, and recommendation systems. The similarity is calculated based on the cosine of the angle between the two vectors, which effectively measures how much they point in the same direction.

## Definition
Cosine similarity between two vectors 
$A$
and 
$B$ is defined as:

$$
\text{cosine}\text{ }\text{similarity}({A},{B}) = \frac{\sum_{i=1}^{n} a_i \cdot b_i}{\sqrt{\sum_{i=1}^{n} a_i^2} \cdot \sqrt{\sum_{i=1}^{n} b_i^2}}
$$

$A⋅B$ is the dot product of vectors 
$A$ and $B$. 

$∥A∥$ and $∥B∥$ are the magnitudes (or norms) of vectors 
$A$ and $B$, respectively.

## Calculation

The dot product of vectors $f{(A)}$ and $f{(B)}$ is:

$$
\mathbf{A} \cdot \mathbf{B} = \sum_{i=1}^{n} a_i \cdot b_i
$$

The magnitude (or norm) of vector $\mathbf{A}$ is:

$$
\|\mathbf{A}\| = \sqrt{\sum_{i=1}^{n} a_i^2}
$$

The magnitude (or norm) of vector $(\mathbf{A})$ is:

$$
\|\mathbf{B}\| = \sqrt{\sum_{i=1}^{n} b_i^2}
$$

Combining all components, the cosine similarity is:

$$
\text{cosine}\text{ }\text{similarity}({A},{B}) = \frac{\sum_{i=1}^{n} a_i \cdot b_i}{\sqrt{\sum_{i=1}^{n} a_i^2} \cdot \sqrt{\sum_{i=1}^{n} b_i^2}}
$$

## Challenge 

Create a Cosine Similarity Function for vectors. Test for any vectors.

