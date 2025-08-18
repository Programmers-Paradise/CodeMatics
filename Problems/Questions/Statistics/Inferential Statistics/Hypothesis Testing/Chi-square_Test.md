# Chi-squared Test

The Chi-squared test is a statistical method used to determine if there is a significant difference between the expected frequencies and observed frequencies in one or more categories. It is widely used in hypothesis testing to assess whether the null hypothesis can be rejected based on sample data.

## Definition

The Chi-squared statistic, denoted as $\chi^2$, measures the discrepancy between observed ($O$) and expected ($E$) frequencies across multiple categories. The formula for calculating the Chi-squared statistic is:

$$
\chi^2 = \sum_{i=1}^{n} \frac{(O_i - E_i)^2}{E_i}
$$

where:
- $n$ is the number of categories,
- $O_i$ is the observed frequency in category $i$,
- $E_i$ is the expected frequency in category $i$.

The calculated Chi-squared statistic follows a Chi-squared distribution with degrees of freedom ($df$) equal to:

$$
df = (r - 1)(c - 1)
$$

for an $r \times c$ contingency table.

## Example

Suppose we observe the following frequencies in a 2x2 contingency table comparing two groups:

|        | Group A | Group B |
|--------|---------|---------|
| Outcome 1 | 20      | 30      |
| Outcome 2 | 40      | 10      |

Assuming the null hypothesis that there is no association between group and outcome, we calculate expected frequencies as:

$$
E_{ij} = \frac{(row\ total_i)(column\ total_j)}{grand\ total}
$$

For cell (Outcome 1, Group A):

$$
E_{1A} = \frac{(20 + 40)(20 + 30)}{100} = 30
$$

Similarly, calculate \( E_{1B} = 20 \), \( E_{2A} = 30 \), and \( E_{2B} = 20 \).

Now, compute the Chi-squared statistic:

$$
\chi^2 = \frac{(20 - 30)^2}{30} + \frac{(40 - 30)^2}{30} + \frac{(30 - 20)^2}{20} + \frac{(10 - 20)^2}{20}
$$

$$
= \frac{100}{30} + \frac{100}{30} + \frac{100}{20} + \frac{100}{20} = 6.6667
$$

With $df = (2 - 1)(2 - 1) = 1$, the critical value at $\alpha = 0.054 is 3.841. Since $6.6667 > 3.841$, we reject the null hypothesis.

## Properties

- **Right-skewed Distribution**: The Chi-squared distribution is skewed to the right, especially for smaller degrees of freedom.
  
- **Sum of Squares**: The Chi-squared statistic is a sum of squared standardized deviations from expected frequencies.

- **Additive Property**: If two independent variables are Chi-squared distributed with $df_1$ and $df_2$, their sum is also Chi-squared with $df = df_1 + df_2$.

- **Goodness-of-Fit Test**: Used to determine if a sample follows a specified distribution.

## Applications

The Chi-squared test is applied in various fields:

- **Biology/Genetics**: Testing Mendel's laws of inheritance.
- **Marketing**: Assessing the effectiveness of campaigns through A/B testing.
- **Machine Learning**: Feature selection and evaluating model assumptions.
- **Engineering**: Quality control to check if defects are randomly distributed.

This test is a fundamental tool in statistical analysis, providing insights into categorical data relationships.