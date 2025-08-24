# Wilcoxon Signed-Rank Test

## Introduction

The Wilcoxon Signed-Rank Test is a non-parametric statistical test used to compare two related samples or repeated measurements on a single sample. It assesses whether the median difference between pairs is zero, making it suitable for scenarios where data does not meet normality assumptions but are at least ordinal.

This test is widely applied in fields such as psychology, medicine, and education to evaluate changes before and after interventions, treatment effects, or performance comparisons.

## Definition

The Wilcoxon Signed-Rank Test evaluates paired differences by ranking their absolute values while preserving the sign. The test statistic $W$ is calculated based on the sum of ranks for positive ($R^+$) and negative ($R^-$) differences. The test statistic is the smaller of these two sums:

$$W = \min(R^+, R^-)$$

Where:
-   $R^+$: Sum of ranks corresponding to positive differences.
-   $R^-$: Sum of ranks corresponding to negative differences.

The procedure involves the following steps:
1.  Calculate the difference $d_i = x_i - y_i$ for each pair of observations.
2.  Discard any pairs with a difference of zero.
3.  Rank the absolute values of the non-zero differences, $|d_i|$. Tied ranks are assigned the average of the positions they occupy.
4.  Assign a sign (+ or -) to each rank based on the sign of the original difference $d_i$.
5.  Sum the ranks of the positive differences to get $R^+$ and the ranks of the negative differences to get $R^-$.
6.  The test statistic $W$ is the minimum of $R^+$ and $R^-$.

## Example

Consider comparing student scores before and after a treatment.

**Dataset:**
-   **Before treatment scores:** [50, 60, 70, 80, 90]
-   **After treatment scores:** [55, 65, 72, 81, 92]

**Steps:**
1.  **Compute differences ($d_i$):** [5, 5, 2, 1, 2]. All differences are positive.
2.  **Rank absolute differences:** The absolute differences are [5, 5, 2, 1, 2].
    -   Sorted absolute differences: [1, 2, 2, 5, 5]
    -   Ranks: 1, 2.5, 2.5, 4.5, 4.5 (using average for ties)
3.  **Assign signs to ranks:** Since all original differences are positive, all ranks are positive.
4.  **Sum ranks:**
    -   Sum of positive ranks: $R^+ = 1 + 2.5 + 2.5 + 4.5 + 4.5 = 15$
    -   Sum of negative ranks: $R^- = 0$
5.  **Compute test statistic:**
    -   $W = \min(R^+, R^-) = \min(15, 0) = 0$

The calculated $W$ value (0) is then compared with a critical value from a Wilcoxon Signed-Rank Test table for a given significance level (e.g., $\alpha=0.05$) and sample size ($n=5$) to determine if the result is statistically significant.

## Properties

-   **Non-parametric**: The test does not assume that the data follows a specific distribution, such as the normal distribution.
-   **Dependent Samples**: It is designed specifically for paired or matched observations, such as pre-test/post-test studies.
-   **Robustness**: As a rank-based test, it is more resistant to the effects of outliers than parametric counterparts like the paired t-test.
-   **Distribution under H₀**: For large samples (typically n > 20), the distribution of the $W$ statistic can be approximated by a normal distribution.
-   **Effect Size**: While the test determines significance, an effect size (like the matched-pairs rank biserial correlation) is often reported to quantify the magnitude of the difference.

## Applications

1.  **Psychology**: Assessing changes in behavior, anxiety levels, or cognitive performance after a therapeutic intervention.
2.  **Medicine**: Evaluating the efficacy of a treatment by comparing physiological measurements (e.g., blood pressure) in patients before and after administration.
3.  **Education**: Comparing student test scores before and after a new teaching method is implemented.
4.  **Engineering**: Testing whether a modification to a product results in a significant improvement in quality or performance by comparing paired samples.
5.  **Machine Learning**: Comparing the performance of two algorithms on the same set of datasets when the distribution of performance differences is uncertain.

This structured approach ensures clarity and comprehensiveness, highlighting the Wilcoxon Signed-Rank Test's utility across various domains.