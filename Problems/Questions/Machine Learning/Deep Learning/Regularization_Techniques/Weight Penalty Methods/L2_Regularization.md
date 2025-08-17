
# L2 Regularization

L2 Regularization is a technique used in machine learning to prevent overfitting by adding a penalty term to the loss function. This penalty is based on the **squared values** of the model coefficients, encouraging small but nonzero weights. Unlike L1, it does not usually enforce sparsity, but rather spreads influence across many features.

---

##  Definition

L2 Regularization modifies the original loss function $L$ by adding a penalty term that penalizes large coefficients. The modified loss function is:

$$
L_{\text{regularized}} = L + \lambda \sum_{i=1}^{n} \theta_i^2
$$

where:

* $\theta_i$ are the model parameters (coefficients),
* $\lambda$ is the regularization strength,
* $n$ is the number of features.

This squared penalty prevents coefficients from growing too large, improving **stability** and **generalization**.

---

##  Example

Consider a simple linear regression model:

$$
y = \theta_0 + \theta_1 x_1 + \theta_2 x_2
$$

Without regularization, we minimize the **Mean Squared Error (MSE):**

$$
L = \frac{1}{m} \sum_{i=1}^{m} \left( y_i - (\theta_0 + \theta_1 x_{i1} + \theta_2 x_{i2}) \right)^2
$$

With L2 regularization, the loss function becomes:

$$
L_{\text{regularized}} = \frac{1}{m} \sum_{i=1}^{m} \left( y_i - (\theta_0 + \theta_1 x_{i1} + \theta_2 x_{i2}) \right)^2 + \lambda \left( \theta_0^2 + \theta_1^2 + \theta_2^2 \right)
$$

During optimization, the coefficients $\theta_0, \theta_1, \theta_2$ are adjusted to minimize this new loss. Unlike L1, the coefficients are usually **shrunk towards zero** but rarely become exactly zero.

---

##  Properties

* **No Sparsity**:
  L2 regularization tends to shrink coefficients but keeps most of them nonzero.

* **Convexity**:
  The squared penalty is convex, ensuring efficient optimization with a unique solution.

* **Weight Decay**:
  L2 acts as a “weight decay,” preventing coefficients from becoming too large and improving generalization.

---

##  Applications

* **Ridge Regression**: A linear regression variant that uses L2 regularization.
* **Neural Networks**: Commonly used as a penalty to reduce overfitting.
* **Computer Vision**: Helps stabilize models that rely on many correlated features.
* **Finance & Economics**: Used in predictive models where stability is more important than sparsity.

---

L2 regularization is highly effective when features are correlated and sparsity is not essential. It reduces **variance**, prevents **overfitting**, and improves **generalization**. In practice, it is often combined with L1 (Elastic Net) to balance **sparsity** and **stability**.

