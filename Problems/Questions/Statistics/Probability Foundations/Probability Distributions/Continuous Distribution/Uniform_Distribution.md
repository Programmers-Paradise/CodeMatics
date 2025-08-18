# Uniform Distribution

The uniform distribution is a fundamental probability distribution in statistics and probability theory. It is characterized by its simplicity and equal likelihood of all outcomes within a given range. This distribution is crucial in various fields including math, science, and engineering due to its straightforward nature and wide applicability.

## Definition

A continuous random variable $X$ follows a uniform distribution over the interval $[a, b]$ if its probability density function (PDF) is constant over this interval and zero elsewhere. The PDF of a uniform distribution is given by:

$$
f(x; a, b) = 
\begin{cases} 
\frac{1}{b-a} & \text{for } a \leq x \leq b \\
0 & \text{otherwise}
\end{cases}
$$

The cumulative distribution function (CDF) of the uniform distribution is:

$$
F(x; a, b) = 
\begin{cases} 
0 & \text{for } x < a \\
\frac{x-a}{b-a} & \text{for } a \leq x \leq b \\
1 & \text{for } x > b
\end{cases}
$$

The mean (\(\mu\)) and variance (\(\sigma^2\)) of the uniform distribution are:

$$
\mu = \frac{a + b}{2}
$$

$$
\sigma^2 = \frac{(b-a)^2}{12}
$$

## Example

Consider a scenario where you roll a fair six-sided die. Each face has an equal probability of landing face up, which is $\frac{1}{6}$. This can be modeled using a uniform distribution over the interval $[1, 6]$.

### Step-by-Step Solution:

1. **Define the Interval**: The possible outcomes are $x = 1, 2, 3, 4, 5, 6$.
   
2. **Calculate the PDF**:

$$
f(x; 1, 6) = 
\begin{cases} 
\frac{1}{6-1} = \frac{1}{5} & \text{for } x = 1, 2, 3, 4, 5, 6 \\
0 & \text{otherwise}
\end{cases}
$$

3. **Calculate the CDF**:

$$
F(x; 1, 6) = 
\begin{cases} 
0 & \text{for } x < 1 \\
\frac{x-1}{5} & \text{for } 1 \leq x \leq 6 \\
1 & \text{for } x > 6
\end{cases}
$$

4. **Calculate the Mean**:

$$
\mu = \frac{1 + 2 + 3 + 4 + 5 + 6}{6} = \frac{21}{6} = 3.5
$$

5. **Calculate the Variance**:

$$
\sigma^2 = \frac{(6-1)^2}{12} = \frac{25}{12} \approx 2.083
$$

## Properties

- **Constant PDF**: The probability density function is constant over the interval $[a, b]$, indicating equal likelihood of all outcomes within this range.
  
- **Symmetry**: If $a = -b$, the distribution is symmetric about zero.

- **Mean and Median**: For a uniform distribution over $[a, b]$, the mean ($\mu$) and median are both equal to $\frac{a + b}{2}$.

- **Variance**: The variance measures the spread of the distribution. It increases as the interval $[a, b]$ becomes larger.

## Applications

The uniform distribution has numerous applications in various fields:

- **Physics**: In quantum mechanics, the energy levels of a particle in a box are often modeled using a uniform distribution.
  
- **Machine Learning**: Uniform distributions can be used as prior distributions in Bayesian statistics and for initializing weights in neural networks.

- **Engineering**: In reliability analysis, the time to failure of a component might follow a uniform distribution if there is no reason to believe that failures occur more frequently at any particular time within an interval.
  
- **Statistics**: The uniform distribution is often used as a baseline model when making assumptions about data distributions.