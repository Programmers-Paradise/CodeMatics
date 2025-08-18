# Confidence Interval

Confidence intervals are statistical measures that provide a range of values within which the true population parameter is expected to lie, along with a level of confidence. They are essential in inferential statistics for quantifying uncertainty around estimates derived from sample data.

## Definition

A confidence interval (CI) is calculated using the formula:

$$
\text{Confidence Interval} = \bar{x} \pm z^* \left( \frac{\sigma}{\sqrt{n}} \right)
$$

Where:
- $\bar{x}$: Sample mean
- $z^*$: Critical value from the standard normal distribution (e.g., 1.96 for a 95% CI)
- $\sigma$: Population standard deviation
- $n$: Sample size

For proportions, the formula is:

$$
\text{Confidence Interval} = \hat{p} \pm z^* \sqrt{\frac{\hat{p}(1 - \hat{p})}{n}}
$$

Where:
- $\hat{p}$: Sample proportion

## Example

**Problem:** Calculate a 95% confidence interval for the mean height of a population given a sample of 100 individuals with a mean of 68 inches and a standard deviation of 3 inches.

**Solution:**

$$
z^* = 1.96 \quad (\text{for } 95\% \text{ CI})
$$

$$
\text{Lower limit} = 68 - (1.96 \times \frac{3}{\sqrt{100}}) = 68 - 0.588 = 67.412
$$

$$
\text{Upper limit} = 68 + 0.588 = 68.588
$$

Thus, the confidence interval is (67.412, 68.588).

## Properties

- **Width:** The width depends on sample size and variability.
- **Sample Size:** Larger samples yield narrower intervals.
- **Significance Level:** A higher confidence level increases interval width.
- **Confidence Level vs. Interval:** Different from the probability that the parameter lies within the interval.
- **Assumptions:** Requires normality or large samples for accuracy.

## Applications

1. **Market Research:** Estimating average customer satisfaction scores with margins of error.
2. **Medical Studies:** Determining treatment effectiveness confidence intervals.
3. **Quality Control:** Monitoring product consistency through sample means.
4. **Polling:** Predicting election outcomes with margin of error.
5. **Environmental Science:** Assessing pollution levels' variability.

## Conclusion

Confidence intervals are vital for quantifying uncertainty in statistical estimates, aiding decision-making across various fields by providing both precision and reliability measures.