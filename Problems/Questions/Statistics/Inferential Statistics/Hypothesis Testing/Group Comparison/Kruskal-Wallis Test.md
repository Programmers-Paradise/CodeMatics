# Kruskal-Wallis Test

The Kruskal-Wallis test is a non-parametric statistical method used to determine if there are statistically significant differences between two or more groups of an independent variable on a continuous or ordinal dependent variable. It is particularly useful when the assumptions of normality and homogeneity of variances required for one-way ANOVA are not met.

## Definition

The Kruskal-Wallis test evaluates whether multiple independently sampled groups originate from the same distribution. The null hypothesis (H₀) states that all group medians are equal, while the alternative hypothesis (H₁) suggests at least one median is different.

The test statistic $H$ is calculated as:

$$
H = \frac{12}{N(N+1)} \sum_{j=1}^{k} \frac{R_j^2}{n_j} - 3(N+1)
$$

where:
- $N$ is the total number of observations,
- $k$ is the number of groups,
- $n_j$ is the size of group $j$,
- $R_j$ is the sum of ranks for group $j$.

Under the null hypothesis, $H$ approximately follows a chi-squared distribution with $k - 1$ degrees of freedom.

## Example

**Problem:** Compare three groups (A, B, C) with the following data:

- Group A: 12, 15, 17
- Group B: 8, 10, 14
- Group C: 9, 13, 16

**Solution:**

1. **Rank all data points:**  
   Combined data: 8, 9, 10, 12, 13, 14, 15, 16, 17  
   Ranks: 1, 2, 3, 4, 5, 6, 7, 8, 9

2. **Sum of ranks for each group:**  
   - Group A (12, 15, 17): Ranks 4, 7, 9 → $R_A = 20$
   - Group B (8, 10, 14): Ranks 1, 3, 6 → $R_B = 10$ 
   - Group C (9, 13, 16): Ranks 2, 5, 8 → $R_C = 15$

3. **Calculate \( H \):**  
   $N = 9$, so:

$$
H = \frac{12}{9(10)} \left( \frac{20^2}{3} + \frac{10^2}{3} + \frac{15^2}{3} \right) - 3(10)
$$

$$
H = \frac{12}{90} \times (133.33 + 33.33 + 75) - 30
$$

$$
H = 0.1333 \times 241.66 - 30 ≈ 32.22 - 30 = 2.22
$$

Compare $H$ to the critical value from the chi-squared distribution with 2 degrees of freedom at α=0.05 (≈5.99). Since 2.22 < 5.99, fail to reject H₀.

## Properties

1. **Non-parametric:** Does not assume data normality or equal variances.
2. **Distribution under H₀:** Approximately chi-squared with $k - 1$ df for large samples.
3. **Robustness:** Less sensitive to outliers than ANOVA.
4. **Tied Ranks Correction:** Adjusts $H$ by subtracting $\sum \frac{(t^3 - t)}{n(n-1)(n+1)}$ , where $t$ is the number of tied ranks in a group.

## Applications

The Kruskal-Wallis test is widely used in:
- **Psychology/Sociology:** Comparing attitudes or behaviors across groups.
- **Biology/Biochemistry:** Analyzing non-normal data like enzyme activity.
- **Medicine:** Assessing treatment effects without normality assumptions.
- **Machine Learning:** Feature selection and comparing model performance metrics.

This test is a versatile tool for scenarios where traditional parametric tests are inapplicable.