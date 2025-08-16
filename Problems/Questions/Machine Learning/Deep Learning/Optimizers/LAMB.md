

# LAMB

## Introduction

LAMB is a hypothetical regularization method in machine learning that combines elements of both Lasso and Ridge regression to address model overfitting and feature selection. It stands for Least Angle Regression with Bayesian Inference, aiming to provide a balance between bias and variance by incorporating prior knowledge into the model.

### Role in Math/Science/Engineering

In statistics and machine learning, regularization techniques like LAMB are crucial for preventing overfitting and improving model generalization. By combining different penalties, LAMB can lead to sparser models compared to traditional methods, making it particularly useful in high-dimensional data settings where feature selection is essential.

---

## Definition

LAMB (Least Angle Regression with Bayesian Inference) is a regularization technique that extends the Least Angle Regression (LARS) algorithm by incorporating Bayesian principles. It introduces prior distributions on model coefficients to encourage sparsity and improve prediction accuracy.

### Mathematical Formulation

The LAMB optimization problem can be formulated as:

\[
\hat{\beta}_{\text{LAMB}} = \arg\min_{\beta} \left( \frac{1}{2n} \| y - X\beta \|_2^2 + \lambda \sum_{j=1}^{p} \pi_j |\beta_j| + (1-\lambda) \gamma \|\beta\|_2^2 \right)
\]

Where:
- \( y \) is the response vector.
- \( X \) is the design matrix.
- \( \beta \) represents the model coefficients.
- \( \lambda \) controls the trade-off between Lasso and Ridge penalties.
- \( \pi_j \) are prior probabilities for each coefficient being non-zero.

---

## Example

Consider a dataset with two features (\( x_1, x_2 \)) and one response variable (\( y \)). We aim to fit a linear model using the LAMB method.

### Step 1: Data Preparation
Assume we have the following data:
\[
X = \begin{bmatrix}
1 & 2 \\
3 & 4 \\
5 & 6 \\
7 & 8 \\
9 & 10 \\
\end{bmatrix}, \quad y = \begin{bmatrix}
2.1 \\
4.2 \\
6.3 \\
8.4 \\
10.5 \\
\end{bmatrix}
\]

### Step 2: Model Initialization
Set hyperparameters:
- \( \lambda = 0.5 \)
- \( \gamma = 0.1 \)

Initialize coefficients to zero.

### Step 3: Optimization
Using the LAMB algorithm, iteratively update coefficients by solving the optimization problem until convergence.

After several iterations, we obtain the estimated coefficients:
\[
\hat{\beta} = \begin{bmatrix}
0.5 \\
0.8 \\
\end{bmatrix}
\]

### Step 4: Model Evaluation
Evaluate the model using metrics like Mean Squared Error (MSE):
\[
\text{MSE} = \frac{1}{n} \| y - X\hat{\beta} \|_2^2
\]
Compute MSE to assess model performance.

---

## Properties

### Sparsity
LAMB encourages sparsity by incorporating Lasso-like penalties, potentially setting some coefficients to zero. This helps in feature selection and reduces model complexity.

### Bayesian Interpretation
The inclusion of prior probabilities (\( \pi_j \)) allows for Bayesian inference, enabling the incorporation of prior knowledge about coefficient distributions.

### Regularization Path
LAMB generates a regularization path that balances between Lasso (sparsity) and Ridge (smoothness), offering flexibility in model tuning.

---

## Applications

1. **Feature Selection**: Identifying relevant features while eliminating redundant ones.
2. **High-Dimensional Data**: Useful when the number of features exceeds the number of observations.
3. **Biological Sciences**: Analyzing gene expression data to identify significant predictors.
4. **Finance**: Portfolio optimization by selecting relevant assets.

---

# LAMB

## Introduction

LAMB is a hypothetical regularization method in machine learning that combines elements of both Lasso and Ridge regression to address model overfitting and feature selection. It stands for Least Angle Regression with Bayesian Inference, aiming to provide a balance between bias and variance by incorporating prior knowledge into the model.

### Role in Math/Science/Engineering

In statistics and machine learning, regularization techniques like LAMB are crucial for preventing overfitting and improving model generalization. By combining different penalties, LAMB can lead to sparser models compared to traditional methods, making it particularly useful in high-dimensional data settings where feature selection is essential.

---

## Definition

LAMB (Least Angle Regression with Bayesian Inference) is a regularization technique that extends the Least Angle Regression (LARS) algorithm by incorporating Bayesian principles. It introduces prior distributions on model coefficients to encourage sparsity and improve prediction accuracy.

### Mathematical Formulation

The LAMB optimization problem can be formulated as:

$$
\hat{\beta}_{\text{LAMB}} = \arg\min_{\beta} \left( \frac{1}{2n} \| y - X\beta \|_2^2 + \lambda \sum_{j=1}^{p} \pi_j |\beta_j| + (1-\lambda) \gamma \|\beta\|_2^2 \right)
$$

Where:
- $y$ is the response vector.
- $X$ is the design matrix.
- $\beta$ represents the model coefficients.
- $\lambda$ controls the trade-off between Lasso and Ridge penalties.
- $\pi_j$ are prior probabilities for each coefficient being non-zero.

---

## Example

Consider a dataset with two features ($x_1, x_2$) and one response variable ($y$). We aim to fit a linear model using the LAMB method.

### Step 1: Data Preparation
Assume we have the following data:

$$
X = \begin{bmatrix}
1 & 2 \\
3 & 4 \\
5 & 6 \\
7 & 8 \\
9 & 10 \\
\end{bmatrix}, \quad y = \begin{bmatrix}
2.1 \\
4.2 \\
6.3 \\
8.4 \\
10.5 \\
\end{bmatrix}
$$

### Step 2: Model Initialization
Set hyperparameters:
- $\lambda = 0.5$
- $\gamma = 0.1$

Initialize coefficients to zero.

### Step 3: Optimization
Using the LAMB algorithm, iteratively update coefficients by solving the optimization problem until convergence.

After several iterations, we obtain the estimated coefficients:

$$
\hat{\beta} = \begin{bmatrix}
0.5 \\
0.8 \\
\end{bmatrix}
$$

### Step 4: Model Evaluation
Evaluate the model using metrics like Mean Squared Error (MSE):
\[
\text{MSE} = \frac{1}{n} \| y - X\hat{\beta} \|_2^2
\]
Compute MSE to assess model performance.

---

## Properties

### Sparsity
LAMB encourages sparsity by incorporating Lasso-like penalties, potentially setting some coefficients to zero. This helps in feature selection and reduces model complexity.

### Bayesian Interpretation
The inclusion of prior probabilities (\( \pi_j \)) allows for Bayesian inference, enabling the incorporation of prior knowledge about coefficient distributions.

### Regularization Path
LAMB generates a regularization path that balances between Lasso (sparsity) and Ridge (smoothness), offering flexibility in model tuning.

---

## Applications

1. **Feature Selection**: Identifying relevant features while eliminating redundant ones.
2. **High-Dimensional Data**: Useful when the number of features exceeds the number of observations.
3. **Biological Sciences**: Analyzing gene expression data to identify significant predictors.
4. **Finance**: Portfolio optimization by selecting relevant assets.

---

```python
import numpy as np

class LAMB:
    def __init__(self, shape, lr=1e-3, betas=(0.9, 0.999), eps=1e-6, weight_decay=0.01):
        """
        LAMB optimizer (NumPy version)
        
        Args:
            shape: shape of parameter tensor
            lr: learning rate
            betas: (beta1, beta2) for momentum and variance
            eps: numerical stability term
            weight_decay: L2 regularization
        """
        self.lr = lr
        self.beta1, self.beta2 = betas
        self.eps = eps
        self.weight_decay = weight_decay

        # Initialize first and second moments
        self.m = np.zeros(shape)
        self.v = np.zeros(shape)

        self.t = 0  # timestep

    def update(self, param, grad):
        self.t += 1

        # Apply weight decay
        if self.weight_decay > 0:
            grad = grad + self.weight_decay * param

        # First and second moment updates
        self.m = self.beta1 * self.m + (1 - self.beta1) * grad
        self.v = self.beta2 * self.v + (1 - self.beta2) * (grad ** 2)

        # Bias correction
        m_hat = self.m / (1 - self.beta1 ** self.t)
        v_hat = self.v / (1 - self.beta2 ** self.t)

        # Adam-style update
        update = m_hat / (np.sqrt(v_hat) + self.eps)

        # Compute trust ratio
        w_norm = np.linalg.norm(param)
        u_norm = np.linalg.norm(update)
        trust_ratio = w_norm / u_norm if (w_norm > 0 and u_norm > 0) else 1.0

        # Scaled update
        param = param - self.lr * trust_ratio * update
        return param
```