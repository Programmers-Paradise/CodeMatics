# Z-Test

## Introduction

The Z-test is a statistical hypothesis test used to determine whether there is a significant difference between a sample mean and a population mean when the variance of the population is known. It is widely used in various fields such as mathematics, science, and engineering for making decisions based on data.

## Definition

A **Z-test** is a statistical test that assumes the test statistic follows a standard normal distribution (Z-distribution) under the null hypothesis. The Z-score, which measures how many standard deviations an element is from the mean, is calculated using:

$$
Z = \frac{\bar{X} - \mu}{\sigma / \sqrt{n}}
$$

where:
- $\bar{X}$: Sample mean
- $\mu$: Population mean under the null hypothesis
- $\sigma$: Population standard deviation
- $n$: Sample size

Under the null hypothesis ($H_0$), the Z-score follows a standard normal distribution:

$$
Z \sim N(0, 1)
$$

## Example

**Problem:**  
A company claims that its product has an average weight of 50 grams. A random sample of 64 products is taken with a mean weight of 49.8 grams and a known population standard deviation of 2 grams. Test the company's claim at a 5% significance level.

**Solution:**

1. **State the hypotheses:**
   - $H_0: \mu = 50$
   - $H_a: \mu \neq 50$ (two-tailed test)

2. **Calculate the Z-score:**
   $$
   Z = \frac{49.8 - 50}{2 / \sqrt{64}} = \frac{-0.2}{0.25} = -0.8
   $$

3. **Determine the critical value:**  
   For a two-tailed test at α=0.05, the critical Z-values are ±1.96.

4. **Compare the calculated Z-score to the critical value:**
   Since $-1.96 < -0.8 < 1.96$, we fail to reject $H_0$.

**Conclusion:**  
There is insufficient evidence to conclude that the population mean differs from 50 grams.

## Properties

- **Test Statistic Distribution:** Under $H_0$, $Z \sim N(0, 1)$.
- **Sensitivity to Sample Size:** Larger samples increase test power.
- **Dependence on Population Parameters:** Requires known population variance for accurate results.
- **Assumption of Normality:** For small samples ($n < 30$), data should be approximately normal; otherwise, use a t-test.

## Applications

1. **Quality Control:** Monitoring product dimensions to ensure they meet specifications.
2. **Medical Research:** Testing the efficacy of new drugs by comparing treatment and control groups.
3. **Educational Testing:** Evaluating test scores to assess teaching methods or curricula.
4. **Machine Learning:** Feature selection using Z-scores to identify significant predictors.

The Z-test is a versatile tool for hypothesis testing, providing insights across diverse scientific and engineering applications.