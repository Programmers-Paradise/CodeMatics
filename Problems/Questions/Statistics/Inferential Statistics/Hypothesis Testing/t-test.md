# T-Test

## Introduction

The t-test is a statistical hypothesis test used to determine whether there is a significant difference between the means of two groups. It is particularly useful when the sample sizes are small and the population variances are unknown but assumed to be equal. The t-test plays a crucial role in various fields, including science, engineering, and machine learning, where it helps validate hypotheses and compare experimental results.

## Definition

The t-test compares the means of two datasets by calculating a t-statistic, which is then compared against a critical value from the t-distribution to determine statistical significance. The formula for the t-statistic in an independent two-sample t-test (assuming equal variances) is:

$$
t = \frac{(\bar{X}_1 - \bar{X}_2)}{\sqrt{\left( \frac{s_1^2}{n_1} + \frac{s_2^2}{n_2} \right)}}
$$

Where:
- $\bar{X}_1$ and $\bar{X}_2$ are the sample means.
- $s_1$ and $s_2$ are the sample standard deviations.
- $n_1$ and $n_2$ are the sample sizes.

The degrees of freedom ($df$) for this test is calculated as:

$$
df = \frac{\left( \frac{s_1^2}{n_1} + \frac{s_2^2}{n_2} \right)^2}{\frac{\left( \frac{s_1^2}{n_1} \right)^2}{n_1 - 1} + \frac{\left( \frac{s_2^2}{n_2} \right)^2}{n_2 - 1}}
$$

The t-statistic follows a Student's t-distribution with $df$ degrees of freedom.

## Example

**Problem:** A company tests two different manufacturing processes to compare their efficiency. Process A yields an average of 50 units per hour with a standard deviation of 5 from a sample of 25 trials, while Process B yields an average of 48 units per hour with a standard deviation of 6 from a sample of 30 trials. Determine if there is a significant difference in efficiency at a 95% confidence level.

**Solution:**

1. **Calculate the t-statistic:**

$$
t = \frac{(50 - 48)}{\sqrt{\left( \frac{5^2}{25} + \frac{6^2}{30} \right)}} = \frac{2}{\sqrt{1 + 1.2}} = \frac{2}{\sqrt{2.2}} \approx 1.47
$$

2. **Determine the degrees of freedom:**

$$
df = \frac{\left( \frac{5^2}{25} + \frac{6^2}{30} \right)^2}{\frac{\left( \frac{5^2}{25} \right)^2}{24} + \frac{\left( \frac{6^2}{30} \right)^2}{29}} = \frac{(1 + 1.2)^2}{\frac{1}{24} + \frac{1.44}{29}} \approx 53
$$

3. **Compare with the critical t-value:**
   For a two-tailed test at α=0.05, the critical t-value for $df = 53$ is approximately ±2.006.

Since $|t| < 2.006$, we fail to reject the null hypothesis; there's no significant difference in efficiency between the two processes.

## Properties

1. **Degrees of Freedom:** The number of independent pieces of information used to estimate a parameter, calculated as above.
   
2. **Assumptions:**
   - Data from each group is normally distributed.
   - Variances are equal (homogeneity of variance).
   - Observations are independent.

3. **Power of the Test:** The probability of correctly rejecting the null hypothesis when it's false, influenced by sample size, effect size, and significance level.

4. **One-Sample vs Two-Sample t-Tests:**
   - One-sample compares a sample mean to a known population mean.
   - Two-sample compares means from two independent samples (as in the example).

5. **Paired t-Test:** Used when comparing dependent samples, such as before-and-after measurements.

## Applications

1. **Science and Engineering:** Testing hypotheses about experimental results, such as comparing material properties or process efficiencies.

2. **Machine Learning:** Evaluating model performance differences between algorithms or hyperparameter tuning comparisons.

3. **Business and Marketing:** Assessing the impact of marketing strategies on sales data or comparing product performance.

4. **Healthcare:** Comparing treatment effects in clinical trials or evaluating diagnostic test accuracy across populations.

The t-test is a versatile tool for analyzing datasets where sample sizes are small, making it indispensable in many research and analytical contexts.