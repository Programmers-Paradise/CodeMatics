# Hypothesis Testing

Hypothesis testing is a statistical method used to make decisions about population parameters based on sample data. It plays a crucial role in fields such as mathematics, science, and engineering by providing a structured approach to drawing conclusions from data.

## Definition

### Formal Definition
Hypothesis testing involves making an assumption (hypothesis) about a population parameter and using statistical methods to determine whether the sample data supports or refutes this assumption. The process typically includes:

1. **Null Hypothesis (H₀):** A statement of no effect, difference, or relationship.
2. **Alternative Hypothesis (H₁):** A statement that contradicts H₀, suggesting an effect, difference, or relationship.

### Key Equations
- **Test Statistic:**
  
$$
Z = \frac{\bar{X} - \mu}{\sigma / \sqrt{n}}
$$

  where:
  - $\bar{X}$ is the sample mean,
  - $\mu$ is the hypothesized population mean,
  - $\sigma$ is the population standard deviation,
  - $n$ is the sample size.

- **P-value:** The probability of obtaining a test statistic as extreme as, or more extreme than, the observed value under H₀.
  
- **Significance Level (α):** Threshold for rejecting H₀; typically α = 0.05.

- **Critical Value:** The threshold value that separates the rejection and non-rejection regions.

### Decision Rules
- If $|Z| > Z_{\alpha/2}$, reject H₀.
- Otherwise, fail to reject H₀.

## Example

**Problem:** Test if a new drug has an effect on blood pressure. 

1. **Hypotheses:**
   - H₀: μ = 0 (no effect)
   - H₁: μ ≠ 0 (effect exists)

2. **Sample Data:**
   - Sample mean ($\bar{X}$) = 5 mmHg reduction
   - Population standard deviation (σ) = 3 mmHg
   - Sample size (n) = 100

3. **Test Statistic Calculation:**
   
$$
Z = \frac{5 - 0}{3 / \sqrt{100}} = \frac{5}{0.3} ≈ 16.67
$$

4. **P-value:** For |Z| = 16.67, the p-value is effectively 0.

5. **Decision:**
   - Since p < α (0.05), reject H₀.
   - Conclusion: The drug has a significant effect on blood pressure.

## Properties

### Type I and Type II Errors
- **Type I Error:** Rejecting H₀ when it's true; probability α.

$$
P(\text{Reject } H₀ | H₀ \text{ is true}) = \alpha
$$
  
- **Type II Error:** Failing to reject H₀ when it's false; probability β.

$$
P(\text{Fail to Reject } H₀ | H₁ \text{ is true}) = \beta
$$

### Power of the Test (1 - β)
The probability of correctly rejecting H₀ when H₁ is true.

### Significance Level (α)
The maximum acceptable Type I error rate, typically α = 0.05.

### Confidence Intervals
A range estimating the population parameter with a certain confidence level.

### Effect Size
Measures the magnitude of an effect; e.g., Cohen's d:

$$
d = \frac{\bar{X}_1 - \bar{X}_2}{s}
$$

where $s$ is the pooled standard deviation.

### Assumptions
- Data are random samples.
- Variables approximately normally distributed (for parametric tests).

## Applications

### Quality Control
Monitoring production processes to detect shifts in quality characteristics.

### Medical Research
Evaluating treatment efficacy, as seen in Example above.

### A/B Testing
Comparing two versions of a product or service to determine effectiveness.

### Financial Forecasting
Assessing the impact of economic policies on market trends.

### Machine Learning
Evaluating model performance through cross-validation and feature significance testing.

### Environmental Studies
Assessing the impact of environmental interventions on ecosystems.