# Mann-Whitney U Test

## Introduction

The Mann-Whitney U test is a non-parametric statistical hypothesis test used to determine whether two independent samples were drawn from the same distribution. It is particularly useful when comparing two groups where the data may not meet the assumptions required for parametric tests, such as normality. This test is widely applied in various fields, including statistics, machine learning, and engineering, to compare performance metrics or analyze experimental results.

## Definition

The Mann-Whitney U test calculates a statistic $U$ that assesses whether one group tends to have larger values than the other. Given two independent samples with sizes $n_1$ and $n_2$, all observations are combined and ranked from 1 to $N = n_1 + n_2$. The sum of ranks for each sample, $R_1$ and $R_2$, is computed. The U statistic for each group is calculated as:

$$U_1 = n_1n_2 + \frac{n_1(n_1+1)}{2} - R_1$$
$$U_2 = n_1n_2 + \frac{n_2(n_2+1)}{2} - R_2$$

The test statistic $U$ is the smaller of $U_1$ and $U_2$. For large samples (typically when $n_1, n_2 > 10$), a z-score approximation can be applied to determine significance:

$$z = \frac{U - \mu_U}{\sigma_U}$$

where:
-   $\mu_U = \frac{n_1n_2}{2}$
-   $\sigma_U = \sqrt{\frac{n_1n_2(n_1 + n_2 + 1)}{12}}$

## Example

Consider two groups of students with the following test scores:
-   **Group A Scores:** 65, 70, 75 ($n_1 = 3$)
-   **Group B Scores:** 68, 72, 73 ($n_2 = 3$)

We want to determine if there's a significant difference in their scores.

1.  **Combine and Rank**:
    -   Combined Data: 65, 68, 70, 72, 73, 75
    -   Ranks: 1, 2, 3, 4, 5, 6

2.  **Sum of Ranks**:
    -   Sum of ranks for Group A: $R_1 = 1 + 3 + 6 = 10$
    -   Sum of ranks for Group B: $R_2 = 2 + 4 + 5 = 11$

3.  **Calculate U**:
    $$U_1 = (3)(3) + \frac{3(3+1)}{2} - R_1 = 9 + 6 - 10 = 5$$   $$U_2 = (3)(3) + \frac{3(3+1)}{2} - R_2 = 9 + 6 - 11 = 4$$

The test statistic is $U = \min(U_1, U_2) = 4$. By consulting a critical value table for the Mann-Whitney U test with $n_1=3$ and $n_2=3$, we would find that a U value of 4 is not statistically significant at the $\alpha = 0.05$ level.

## Properties

-   **Non-parametric**: It does not assume the data follows a specific distribution, such as the normal distribution.
-   **Distribution-free**: The test is based on ranks, making it independent of the original distribution's shape.
-   **Robust to Outliers**: It is less affected by extreme values or outliers compared to parametric tests like the t-test.
-   **Null Hypothesis**: The null hypothesis is that the two samples are drawn from populations with the same distribution.
-   **Sensitivity**: It is sensitive to differences in the medians of the distributions and is often considered a test for the equality of medians under the assumption of similar distribution shapes.

## Applications

1.  **Statistics**: Comparing two independent groups when the data is ordinal or when the assumption of normality for a t-test is not met.
2.  **Machine Learning**: Evaluating and comparing the performance of different models on a specific metric, especially when the metric's distribution is unknown.
3.  **Psychology**: Assessing behavioral differences between a treatment group and a control group without assuming normally distributed outcomes.
4.  **Biology**: Comparing measurements between two different species or two experimental conditions where the data may be skewed.
5.  **Quality Control**: Monitoring production processes by comparing samples from two different time periods or production lines to detect shifts in output characteristics.

The Mann-Whitney U test is a versatile tool, offering robust analysis across diverse fields and scenarios.