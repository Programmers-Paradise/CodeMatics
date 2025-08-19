# Type I and Type II Errors

## Introduction

Type I and Type II errors are fundamental concepts in statistical hypothesis testing. They help us understand the potential for incorrect conclusions when deciding whether to reject or fail to reject a null hypothesis. These errors are crucial in fields like machine learning, where they influence model reliability and decision-making processes.

### Key Concepts
- **Type I Error (α)**: Rejecting a true null hypothesis.
- **Type II Error (β)**: Failing to reject a false null hypothesis.
Understanding these errors is vital for ensuring the validity of statistical conclusions and informed decision-making in various applications.

## Definition

**Formal Definitions:**

1. **Type I Error**: Occurs when we reject \( H_0 \) despite it being true. The probability is denoted by $\alpha$.

$$
P(\text{Reject } H_0 | H_0 \text{ is true}) = \alpha
$$
   
2. **Type II Error**: Occurs when we fail to reject $H_0$ despite it being false. The probability is denoted by $\beta$.

$$
P(\text{Fail to Reject } H_0 | H_0 \text{ is false}) = \beta
$$

**Table of Possible Outcomes:**

| Actual State  | Decision          | Probability       |
|---------------|-------------------|-------------------|
| $H_0$ True | Reject $H_0$  | Type I Error (α) | Fail to Reject $H_0$ | Correct Decision |
| $H_0$ False| Reject $H_0$  | Correct Decision  | Fail to Reject $H_0$ | Type II Error (β) |

**Power of the Test**: The probability of correctly rejecting a false null hypothesis.

$$
\text{Power} = 1 - \beta
$$

## Example

### Problem Statement:
A pharmaceutical company tests a new drug with a significance level ($\alpha$) of 0.05 and a power (1 - $\beta$) of 0.8.

**Step-by-Step Solution:**

1. **Determine α**: Given as 0.05.
2. **Calculate β**: Using the power formula:

$$
\beta = 1 - \text{Power} = 1 - 0.8 = 0.2
$$
   
3. **Interpretation**:
   - Probability of Type I Error: 5%
   - Probability of Type II Error: 20%

## Properties

### Relationship Between α and β
- Decreasing $\alpha$ increases $\beta$, and vice versa.
- 
$$
\text{Power} = 1 - \beta = 1 - P(\text{Reject } H_0 | H_0 \text{ is false})
$$

### Impact on Test Power
Higher power reduces the likelihood of Type II errors, enhancing test reliability.

### Formula Connecting α and β
In a Z-test scenario:

$$
Z_{1-\alpha/2} = \frac{\theta - \theta_0}{\sigma/\sqrt{n}}
$$

Where $Z_{1-\beta}$ is determined based on desired power.

## Applications

### Machine Learning
- **Type I Error**: False positives, e.g., spam detection incorrectly flagging a non-spam email.
- **Type II Error**: False negatives, e.g., spam detection missing a spam email.

### Quality Control
- **Type I Error**: Rejecting good products as defective.
- **Type II Error**: Accepting defective products as good.

These errors are integral to balancing test reliability and decision-making in diverse applications.