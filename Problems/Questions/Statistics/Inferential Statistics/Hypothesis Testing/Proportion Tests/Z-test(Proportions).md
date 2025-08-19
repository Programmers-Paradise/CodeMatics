# Z-Test for Proportions

## Introduction

The Z-test for proportions is a statistical hypothesis test used to determine whether there is a significant difference between the proportions of two independent groups. It is particularly useful in fields such as biology, social sciences, and machine learning where comparing categorical data (e.g., success/failure rates) is common.

### Importance
This test helps researchers make informed decisions by quantifying differences in proportions, enabling them to draw conclusions about population parameters based on sample data.

## Definition

The Z-test for proportions compares two sample proportions ($\hat{p}_1$ and $\hat{p}_2$) to determine if they come from populations with the same proportion. The test statistic follows a standard normal distribution under the null hypothesis.

### Formula
The Z-test statistic is calculated as:

$$
Z = \frac{\hat{p}_ 1 - \hat{p}_ 2}{\sqrt{\hat{p}_ {\text{pooled}}(1 - \hat{p}_{\text{pooled}})\left(\frac{1}{n_1} + \frac{1}{n_2}\right)}}
$$

where:
- $\hat{p}_1 = \frac{x_1}{n_1}$ and $\hat{p}_2 = \frac{x_2}{n_2}$
- $\hat{p}_{\text{pooled}} = \frac{x_1 + x_2}{n_1 + n_2}$

### Assumptions
1. **Large Sample Size**: Both samples should be large enough for the normal approximation to hold (i.e., $n_1 p_1, n_1(1 - p_1), n_2 p_2, n_2(1 - p_2) \geq 10$).
2. **Independence**: Samples must be independent.

## Example

**Problem**: A company wants to compare the proportion of defective items from two production lines. Line A had 25 defects out of 300 items, and Line B had 18 defects out of 400 items. Test at α = 0.05 if there is a significant difference.

**Solution**:

1. **Calculate Sample Proportions**:
   - $\hat{p}_A = \frac{25}{300} ≈ 0.0833$
   - $\hat{p}_B = \frac{18}{400} = 0.045$

2. **Check Conditions**:
   - $n_A p_A = 300 * 0.0833 ≈ 25 ≥ 10$
   - $n_A (1 - p_A) = 300 * 0.9167 ≈ 275 ≥ 10$
   - Similarly for Line B, conditions are met.

3. **Compute Pooled Proportion**:
   - $\hat{p}_{\text{pooled}} = \frac{25 + 18}{300 + 400} = \frac{43}{700} ≈ 0.0614$

4. **Calculate Z-Score**:
   - $Z = \frac{0.0833 - 0.045}{\sqrt{0.0614 * (1 - 0.0614) * (\frac{1}{300} + \frac{1}{400})}} ≈ 2.17$

5. **Determine Significance**:
   - For a two-tailed test at α = 0.05, critical Z-values are ±1.96.
   - Since |Z| > 1.96, reject the null hypothesis.

## Properties

- **Assumptions**: Requires large samples and independent groups.
- **Distribution**: Approximates standard normal distribution under H₀.
- **Hypotheses**:
  - $H_0: p_A = p_B$
  - $H_a: p_A ≠ p_B$ (two-tailed), or one-sided alternatives.

## Applications

1. **Quality Control**: Monitoring product defect rates across production lines.
2. **A/B Testing**: Comparing conversion rates in digital marketing campaigns.
3. **Genetics**: Assessing allele frequency differences between populations.
4. **Public Health**: Evaluating disease prevalence in different demographics.
5. **Marketing**: Comparing customer satisfaction levels post-intervention.
6. **Political Science**: Analyzing voting patterns across regions.

This test is a fundamental tool for analyzing categorical data, aiding in evidence-based decision-making across various domains.