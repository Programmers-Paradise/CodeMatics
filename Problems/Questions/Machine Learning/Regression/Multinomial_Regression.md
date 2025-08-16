

# Multinomial Regression

## Introduction
Multinomial regression is a statistical technique used to model the relationship between a categorical dependent variable with more than two categories and one or more independent variables. It extends binary logistic regression, which handles two outcomes, to scenarios where the dependent variable has three or more nominal categories. This method is widely used in various fields such as machine learning, natural language processing, healthcare, and market research for classification tasks.

## Definition
Multinomial regression models the probability of each category of a multinomial response variable given a set of predictor variables. The model estimates the probability that an observation belongs to each category using the softmax function. For an observation $x_i$ with $p$ features, the probability that it belongs to class $j$ (where $j = 1, 2, ..., K $ ) is given by:

$$
P(y_i = j | x_i) = \frac{e^{\beta_{j0} + \beta_{j1}x_{i1} + ... + \beta_{jp}x_{ip}}}{\sum_{k=1}^{K} e^{\beta_{k0} + \beta_{k1}x_{i1} + ... + \beta_{kp}x_{ip}}}
$$

Here, $\beta_{jk}$ represents the regression coefficients for class $j$ and feature $k$. The denominator is the sum of exponentials ensuring that the probabilities sum to 1.

The model parameters are typically estimated using Maximum Likelihood Estimation (MLE), where the likelihood function is based on the predicted probabilities, and optimization techniques like gradient descent are used to find the parameter values that maximize this likelihood.




## Example

### 🌸 Multinomial Logistic Regression Training on Iris Dataset (Cross-Entropy Loss)

We use two standardized features:

* $x_{i1}$ = Sepal length
* $x_{i2}$ = Sepal width

Classes: 1 = Setosa, 2 = Versicolor, 3 = Virginica

---

### 📊 Step 1 — Model

For class $k$:

$$
P(y_i = k \mid x_i) =
\frac{\exp(\beta_{k0} + \beta_{k1} x_{i1} + \beta_{k2} x_{i2})}
{\sum_{m=1}^3 \exp(\beta_{m0} + \beta_{m1} x_{i1} + \beta_{m2} x_{i2})}
$$

---

### 📌 Step 2 — Cross-Entropy Loss

Let $y_{ik} = 1$ if sample $i$ belongs to class $k$, else $0$.
The **cross-entropy loss** over $n$ samples is:

$$
J(\beta) = -\frac{1}{n} \sum_{i=1}^n \sum_{k=1}^3 y_{ik} \log P(y_i = k \mid x_i)
$$

This is the **negative log-likelihood** divided by $n$.

---

### 📌 Step 3 — Gradient of the Loss

The gradient for each coefficient $\beta_{kj}$ is:

$$
\frac{\partial J}{\partial \beta_{kj}} =
-\frac{1}{n} \sum_{i=1}^n \left[ y_{ik} - P(y_i = k \mid x_i) \right] x_{ij}
$$

where $x_{i0} = 1$ for the intercept term.

---

### 📌 Step 4 — Training via Gradient Descent

Initialize all $\beta_{kj} = 0$ (or small random values).
Repeat until convergence:

1. Compute $P(y_i = k \mid x_i)$ for all $i,k$ using current $\beta$.
2. Compute gradient $\nabla_\beta J$ using the formula above.
3. Update:

   $$
   \beta \leftarrow \beta - \eta \cdot \nabla_\beta J
   $$

   where $\eta$ is the learning rate.

---

### 🧮 Step 5 — Example with Iris (First Iteration)

Let’s take just **3 samples** (standardized):

| Sample | $x_1$  | $x_2$  | Class |
| ------ | ------ | ------ | ----- |
| 1      | -0.897 | 1.032  | 1     |
| 2      | -1.140 | -0.124 | 1     |
| 3      | -1.383 | 0.438  | 1     |

**Iteration 0** ($\beta = 0$):

* All $z_k = 0 $ ⇒ $P(y=1) = P(y=2) = P(y=3) = \frac13$
* For class 1, $y_{i1} - P_1 = 1 - \frac13 = \frac23$
* Gradient for $\beta_{10}$ (intercept for class 1):

  $$
  \frac{\partial J}{\partial \beta_{10}} = -\frac13 \sum_{i=1}^3 \left( \frac23 \right)(1) = -\frac23
  $$
* Similarly compute for all $\beta_{kj}$ for $k=1,2,3$ and $j=0,1,2$.

---

### 📌 Step 6 — Continue Iterations

Repeat steps until $J(\beta)$ stops decreasing significantly.

After convergence (using all Iris data, 2 features), we get something like:

$$
\beta =
\begin{bmatrix}
3.53 & -4.93 & 7.03 \\
-1.78 & 1.02 & -2.45 \\
-1.75 & 3.91 & -4.58
\end{bmatrix}
$$

(Each row here is $\beta_{k0}, \beta_{k1}, \beta_{k2}$ for class $k$).

---

### ✅ Step 7 — Prediction

Given a new $x$:

1. Compute $z_k = \beta_{k0} + \beta_{k1} x_1 + \beta_{k2} x_2$
2. Apply softmax to get $P(y=k)$
3. Pick class with highest probability

---

#### Properties
1. **Dependent Variable**: The dependent variable is nominal with more than two categories.
2. **Probability Estimation**: Models probabilities for each category, ensuring they sum to 1.
3. **Softmax Activation**: Uses the softmax function to convert logits into probability distributions.
4. **Parameter Estimation**: Parameters are estimated using Maximum Likelihood Estimation (MLE).
5. **Linearity Assumption**: Assumes a linear relationship between log odds and features.

#### Applications
- **Machine Learning**: Used for classification tasks with multiple classes, such as image recognition or text categorization.
- **Healthcare**: Predicts disease diagnoses with multiple categories based on patient data.
- **Marketing**: Models customer preferences among several products using survey data.
- **Natural Language Processing**: Classifies text into different categories like sentiment analysis.

Multinomial regression is a versatile tool for analyzing categorical outcomes, providing insights into how various predictors influence the probabilities of each category.
