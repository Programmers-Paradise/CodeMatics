# Principal Component Analysis (PCA)

Principal Component Analysis (PCA) is a statistical technique used for dimensionality reduction in machine learning. It transforms data into fewer dimensions while retaining most of the information, making it more manageable and efficient.

## Definition

PCA aims to identify the directions (principal components) in the data that explain the maximum variance. Given a data matrix $X \in \mathbb{R}^{n \times p}$, where $n$ is the number of samples and $p$ is the number of features, PCA finds an orthogonal basis transformation to project the data onto a lower-dimensional space.

The key steps in PCA are:
1. **Standardization**: Subtract the mean from each feature.

$$
X_{\text{std}} = X - \mu
$$

2. **Covariance Matrix Calculation**: Compute $\Sigma = \frac{1}{n-1} X^T X$.
3. **Eigenvalue Decomposition**: Find eigenvectors $v_i$ and eigenvalues $\lambda_i$ of $\Sigma$.
4. **Projection**: Project data onto the top $k$ eigenvectors to reduce dimensionality.

The transformation is represented as:

$$
Y = X V_k
$$

where $V_k$ contains the top $k$ eigenvectors.

## Example

Consider a dataset with two features, $x_1$ and $x_2$, standardized. The covariance matrix is:

$$
\Sigma = \begin{bmatrix}
\sigma_{11} & \sigma_{12} \\
\sigma_{12} & \sigma_{22}
\end{bmatrix}
$$

Eigenvalues $\lambda_1$ and $\lambda_2$ correspond to eigenvectors $v_1$ and $v_2$. Projecting data onto the first principal component:

$$
Y = X [v_1]
$$

This reduces the 2D data to 1D, capturing most variance.

## Properties

- **Orthogonality**: Eigenvectors are orthogonal.

$$
v_i^T v_j = \delta_{ij}
$$

- **Variance Maximization**: Each PC maximizes remaining variance.

$$
\text{Var}(Y_i) = \lambda_i
$$

- **Dimension Reduction Impact**: Reduces complexity while retaining information.

$$
p' < p
$$

- **Computational Efficiency**: Reduces training time for ML models.

$$
O(np^2)
$$

- **Sensitivity to Scaling**: Features should be scaled before applying PCA.

## Applications

PCA is used in:
- **Machine Learning**: Feature extraction and dimensionality reduction.
- **Image Processing**: Known as KLT, it compresses images by retaining key features.
- **Bioinformatics**: Analyzes gene expression data for patterns.
- **Computer Vision**: Reduces feature space before algorithms like SVM.
- **Finance**: Helps in portfolio optimization by reducing variables.

This structured approach ensures clarity and comprehensiveness, leveraging LaTeX for mathematical expressions within a GitHub markdown context.