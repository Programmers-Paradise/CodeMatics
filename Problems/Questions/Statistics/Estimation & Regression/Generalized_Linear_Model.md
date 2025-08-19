# Generalized Linear Models (GLMs)

Generalized Linear Models (GLMs) are a powerful extension of traditional linear regression models, allowing for the analysis of response variables that follow distributions other than the normal distribution. They are essential in various fields, including statistics, machine learning, and data science, as they provide a flexible framework for modeling different types of data.

## Definition

A Generalized Linear Model is defined by three components:

1. **Random Component**: The response variable $Y$ follows a distribution from the exponential family, which includes distributions such as normal, binomial, Poisson, etc.
   
2. **Systematic Component**: The mean $\mu4 of $Y$ is related to a linear combination of predictors (features) through:

$$
g(\mu) = X\beta
$$

   where $g$ is the link function, $X$ is the design matrix, and $\beta$ are the coefficients.

3. **Link Function**: Connects the linear predictor to the mean of the response variable:

$$
g(\mu_i) = \eta_i = \beta_0 + \beta_1 x_{i1} + \dots + \beta_p x_{ip}
$$
   
The exponential family distribution for $Y$ is given by:

$$
f(y; \theta, \phi) = \exp\left(\frac{y\theta - b(\theta)}{\phi} + c(y, \phi)\right)
$$

where $\theta$ is the natural parameter, $b(\theta)$ is the cumulant function, and $\phi$ is the dispersion parameter.

## Example

Consider a binary classification problem using logistic regression. Let’s model the probability of an event occurring ($Y = 1$) given a single predictor variable $X$.

**Step 1: Random Component**
- Response variable $Y$ follows a Bernoulli distribution with probability $p$:
- 
$$
P(Y=1) = p, \quad P(Y=0) = 1 - p
$$

**Step 2: Systematic Component**
- Linear predictor:
  
$$
\eta = \beta_0 + \beta_1 X
$$

**Step 3: Link Function**
- Use the logit link function to relate $\eta$ to the probability $p$:
- 
$$
g(p) = \ln\left(\frac{p}{1 - p}\right)
$$

Thus,

$$
\ln\left(\frac{p}{1 - p}\right) = \beta_0 + \beta_1 X
$$

**Step 4: Solving for $p$**

$$
p = \frac{e^{\eta}}{1 + e^{\eta}} = \sigma(\eta)
$$

where $\sigma$ is the logistic function.

**Step 5: Estimation**
- Coefficients \( \beta_0, \beta_1 \) are estimated using maximum likelihood estimation (MLE), solving:
- 
$$
\frac{\partial \ell}{\partial \beta} = 0
$$

where \( \ell \) is the log-likelihood function.

## Properties

### 1. Flexibility in Response Distributions
GLMs accommodate various response types by choosing appropriate distributions from the exponential family and link functions.

**Formula:**

$$
Y \sim \text{ExponentialFamily}(\theta)
$$

### 2. Role of Link Functions
Link functions connect the linear predictor to the mean, allowing modeling of non-linear relationships.

**Example:**
Logit link for binary outcomes:

$$
g(p) = \ln\left(\frac{p}{1 - p}\right)
$$

### 3. Extensions and Variants
GLMs can be extended with Generalized Additive Models (GAMs) or Generalized Linear Mixed Models (GLMMs) to handle non-linear relationships and random effects.

## Applications

Generalized Linear Models find applications in:

- **Machine Learning**: Binary classification, multinomial logistic regression.
- **Biology/Bioinformatics**: Poisson regression for count data analysis.
- **Economics**: Modeling count outcomes like number of purchases.
- **Social Sciences**: Probit models for binary choices.

GLMs are versatile tools for analyzing diverse datasets across various domains.