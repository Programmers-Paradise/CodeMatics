# p-values and Significance Levels

## Introduction

The concepts of **p-values** and **significance levels** are fundamental in statistical hypothesis testing. They play a crucial role in determining whether observed effects or differences in data are statistically significant, meaning they are unlikely to have occurred by chance. These concepts are essential in various fields, including science, engineering, medicine, and machine learning, where data-driven decisions are critical.

## Definition

### p-value
The **p-value** is a measure of the probability of obtaining results as extreme as the observed results, assuming that the **null hypothesis (H₀)** is true. It quantifies the strength of evidence against H₀. A small p-value suggests strong evidence against H₀, making it likely to be rejected in favor of the **alternative hypothesis (H₁)**.

Mathematically, for a test statistic $T$, the p-value is defined as:

$$
p = P(T \geq t \mid H_0)
$$

where $t$ is the observed value of the test statistic.

### Significance Level (α)
The **significance level** is a threshold probability set by researchers to decide whether to reject the null hypothesis. Commonly used values are 0.05 or 0.01, representing a 5% or 1% chance, respectively, of rejecting H₀ when it is actually true.

## Example

Suppose we conduct a one-sample z-test with the following parameters:
- Sample mean ($\bar{x}$) = 72
- Population mean under H₀ (μ) = 70
- Population standard deviation (σ) = 15
- Sample size (n) = 36

**Step 1: Calculate the z-score**

$$
z = \frac{\bar{x} - \mu}{\sigma / \sqrt{n}} = \frac{72 - 70}{15 / \sqrt{36}} = \frac{2}{2.5} = 0.8
$$

**Step 2: Find the p-value**
Using a standard normal distribution table or software, find the probability that Z is greater than or equal to 0.8:

$$
p = P(Z \geq 0.8) \approx 0.2119
$$

**Step 3: Compare p-value with α**
If we set $\alpha = 0.05$, since $0.2119 > 0.05$, we fail to reject H₀.

## Properties

### Property 1: Range of p-values
The p-value ranges from 0 to 1:

$$
0 < p \leq 1
$$

A smaller p-value indicates stronger evidence against H₀.

### Property 2: Significance Threshold (α)
The significance level $\alpha$ determines the threshold for rejecting H₀. Commonly used values are 0.05 or 0.01:
- If $p < \alpha$, reject H₀.
- If $p \geq \alpha$, fail to reject H₀.

### Property 3: Type I Error
The probability of incorrectly rejecting H₀ when it is true (Type I error) is equal to $\alpha$:

$$
P(\text{Reject } H_0 \mid H_0 \text{ is true}) = \alpha
$$

### Property 4: Power of the Test
The power of a test is the probability of correctly rejecting H₀ when it is false. It is related to $1 - \beta$, where $\beta$ is the Type II error rate.

## Applications

- **Medicine**: Used in clinical trials to determine if a treatment's effect is statistically significant.
- **Technology**: In A/B testing, p-values help decide if changes in algorithms or features lead to significant performance improvements.
- **Manufacturing**: Applied in quality control to assess whether process changes have led to significant improvements in product consistency.
- **Machine Learning**: Used to evaluate feature importance and model performance, ensuring that observed improvements are not due to chance.

Understanding these concepts is crucial for making informed decisions based on data across various disciplines.