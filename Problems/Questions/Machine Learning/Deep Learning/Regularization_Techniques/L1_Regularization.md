
# L1 Regularization

L1 Regularization is a technique used in machine learning to prevent overfitting by adding a penalty term to the loss function. This penalty is based on the absolute values of the model coefficients, encouraging **sparsity** in the feature space.

---

## Definition

L1 Regularization modifies the original loss function $L$ by adding a regularization term that penalizes large coefficients. The modified loss function is:

$$
L_{\text{regularized}} = L + \lambda \sum_{i=1}^{n} |\theta_i|
$$

where:

* $\theta_i$ are the model parameters (coefficients),
* $\lambda$ is the regularization strength,
* $n$ is the number of features.

The absolute value term encourages many coefficients to become zero, effectively performing **feature selection**.

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

With L1 regularization, the loss function becomes:

$$
L_{\text{regularized}} = \frac{1}{m} \sum_{i=1}^{m} \left( y_i - (\theta_0 + \theta_1 x_{i1} + \theta_2 x_{i2}) \right)^2 + \lambda \left( |\theta_0| + |\theta_1| + |\theta_2| \right)
$$

During optimization, the coefficients $\theta_0, \theta_1, \theta_2$ are adjusted to minimize this new loss. Some coefficients may shrink to **zero**, effectively removing those features from the model.

---

##  Properties

* **Sparsity**:
  L1 regularization tends to produce sparse models by setting some coefficients exactly to zero.

* **Convexity**:
  The regularized loss function remains convex since both MSE and absolute value terms are convex.

* **Feature Selection**:
  Encourages sparsity and helps identify the most relevant features, improving interpretability.

---

##  Applications

* **Bioinformatics**: Gene selection in microarray data.
* **Finance**: Portfolio optimization (selecting a small number of assets).
* **Image Processing**: Feature extraction and denoising.

---


L1 regularization is highly effective in **high-dimensional data** problems, where feature selection and interpretability are critical. It also forms the basis of **Lasso Regression** and is often combined with L2 (Elastic Net) for a balance between **sparsity** and **stability**.

