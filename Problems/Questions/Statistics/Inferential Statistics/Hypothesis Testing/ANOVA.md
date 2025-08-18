# Analysis of Variance (ANOVA)

## Introduction

Analysis of Variance, or ANOVA, is a statistical method used to compare the means of three or more groups. It helps determine if there are significant differences between group means by analyzing variance. ANOVA is widely used in fields such as biology, psychology, and engineering to test hypotheses about group effects.

## Definition

The purpose of ANOVA is to test the null hypothesis that all group means are equal against the alternative hypothesis that at least one mean differs. The key equation for a one-way ANOVA involves calculating the F-statistic:

$$
F = \frac{MSM}{MSE}
$$

Where:
- $MSM = \frac{SSM}{df_M}$ (Mean Square Model)
- $MSE = \frac{SSE}{df_E}$ (Mean Square Error)

The total sum of squares is partitioned into the model sum of squares and error sum of squares:

$$
SST = SSM + SSE
$$

With:

$$
SSM = \sum_{i=1}^{k} n_i (\bar{Y}_i - \bar{Y})^2
$$

$$
SSE = \sum_{i=1}^{k} \sum_{j=1}^{n_i} (Y_{ij} - \bar{Y}_i)^2
$$

Where:
- $k$ is the number of groups
- $n_i$ is the sample size for group $i$
- $\bar{Y}_i$ is the mean of group $i$
- $\bar{Y}$ is the overall mean

## Example

Consider three groups with the following data:

| Group | Data  |
|-------|-------|
| A     | 1,2,3 |
| B     | 4,5,6 |
| C     | 7,8,9 |

Calculating:

$$
\bar{Y}_A = 2, \quad \bar{Y}_B = 5, \quad \bar{Y}_C = 8
$$

$$
\bar{Y} = \frac{2 + 5 + 8}{3} = 5
$$

Then:

$$
SSM = 3(2-5)^2 + 3(5-5)^2 + 3(8-5)^2 = 27
$$

$$
SSE = (1-2)^2 + (2-2)^2 + \ldots + (9-8)^2 = 6
$$

$$
F = \frac{27/2}{6/8} = 18
$$

With a p-value <0.05, we reject the null hypothesis.

## Properties

### Null Hypothesis:
All group means are equal: \( H_0: \mu_A = \mu_B = \mu_C \)

### F-Test:
Compares variance between groups to variance within groups.

### Degrees of Freedom:
$$
df_M = k - 1, \quad df_E = N - k
$$

### Post-Hoc Tests:
Used if ANOVA is significant (e.g., Tukey's HSD).

## Applications

- **Machine Learning**: Feature selection by comparing model performance across features.
- **Psychology**: Testing treatment effects on patient outcomes.
- **Engineering**: Comparing material strengths or process efficiencies.

This structured approach ensures a clear understanding of ANOVA, its application, and significance in various fields.