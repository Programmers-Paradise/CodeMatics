

# Elastic Net Regularization

Elastic Net Regularization is a technique that combines both **L1** (absolute value penalty) and **L2** (squared penalty) regularization. It balances the sparsity of L1 with the stability of L2, making it especially useful when dealing with high-dimensional data and correlated features.

---

##  Definition

The Elastic Net loss function is:

$$
L_{\text{regularized}} = L + \lambda_1 \sum_{i=1}^{n} |\theta_i| + \lambda_2 \sum_{i=1}^{n} \theta_i^2
$$

where:

* $L$ is the original loss function (e.g., MSE),
* $\theta_i$ are the model coefficients,
* $\lambda_1$ controls the **L1 penalty** (sparsity),
* $\lambda_2$ controls the **L2 penalty** (shrinkage),
* $n$ is the number of features.

Elastic Net interpolates between **Lasso (L1)** and **Ridge (L2)** depending on the values of $\lambda_1$ and $\lambda_2$.

---

##  Example

Consider a linear regression model:

$$
y = \theta_0 + \theta_1 x_1 + \theta_2 x_2
$$

Without regularization, the **MSE loss** is:

$$
L = \frac{1}{m} \sum_{i=1}^{m} \left( y_i - (\theta_0 + \theta_1 x_{i1} + \theta_2 x_{i2}) \right)^2
$$

With Elastic Net, the regularized loss becomes:

$$
L_{\text{regularized}} = \frac{1}{m} \sum_{i=1}^{m} \left( y_i - (\theta_0 + \theta_1 x_{i1} + \theta_2 x_{i2}) \right)^2 + \lambda_1 \left( |\theta_0| + |\theta_1| + |\theta_2| \right) + \lambda_2 \left( \theta_0^2 + \theta_1^2 + \theta_2^2 \right)
$$

This ensures that some coefficients may shrink to **zero** (like L1), while others are only reduced in magnitude (like L2).

---

##  Properties

* **Sparsity + Stability**:
  Combines the feature selection power of L1 with the weight shrinkage stability of L2.

* **Correlation Handling**:
  Works better than Lasso when features are highly correlated, since L2 distributes weights more evenly.

* **Convexity**:
  The loss function remains convex, ensuring reliable optimization.

* **Flexible Control**:
  By tuning $\lambda_1$ and $\lambda_2$, one can smoothly move between Lasso (L1) and Ridge (L2).

---

##  Applications

* **High-Dimensional Data**: Especially when $p \gg n$ (more features than samples).
* **Genomics & Bioinformatics**: Selecting genes while stabilizing correlated groups.
* **Finance**: Feature selection + stability in predictive models with many correlated assets.
* **Computer Vision & NLP**: Helps handle correlated embeddings and pixel/word features.

---

Elastic Net is a **hybrid regularization method** that solves the limitations of both L1 and L2:

* L1 (sparsity) + L2 (stability).
* Effective for high-dimensional and correlated data.
* Forms the basis of **Elastic Net Regression**, widely used in statistics and machine learning.

