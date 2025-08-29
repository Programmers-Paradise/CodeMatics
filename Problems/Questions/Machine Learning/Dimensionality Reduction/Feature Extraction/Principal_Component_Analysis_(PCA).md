# Principal Component Analysis (PCA) in Machine Learning

## Introduction
Principal Component Analysis (PCA) is a foundational **unsupervised dimensionality reduction** technique in statistics and machine learning. Its primary goal is to transform a high-dimensional dataset into a new, lower-dimensional dataset while retaining as much of the original data's "information" as possible. This "information" is defined as variance. By identifying the most significant patterns in the data, PCA helps to mitigate the "curse of dimensionality," reduce model complexity, prevent overfitting, and visualize high-dimensional data.

## The PCA Algorithm
PCA finds a new set of orthogonal axes, called **principal components**, that are ordered by the amount of variance they capture in the data. The first principal component is the direction of maximum variance, the second is the direction of maximum remaining variance orthogonal to the first, and so on.

The process involves five key steps:

1.  **Standardize the Data**: This is a critical prerequisite. Because PCA is based on variance, it is highly sensitive to the scale of the features. Each feature must be scaled to have a mean of 0 and a standard deviation of 1.

2.  **Compute the Covariance Matrix**: Calculate the covariance matrix of the standardized data. This $p \times p$ matrix (where $p$ is the number of features) summarizes the variance of each feature and the covariance between each pair of features.

3.  **Perform Eigendecomposition**: Compute the **eigenvalues** and **eigenvectors** of the covariance matrix.
    -   The **eigenvectors** of the covariance matrix are the **principal components**. They represent the directions of the new feature axes.
    -   The **eigenvalues** represent the magnitude of the variance captured by each corresponding eigenvector.

4.  **Select Principal Components**: Sort the eigenvectors in descending order based on their corresponding eigenvalues. The eigenvector with the largest eigenvalue is the first principal component (PC1), and so on. A new feature subspace is created by selecting the top $k$ eigenvectors, where $k$ is the desired number of dimensions.

5.  **Project the Data**: Transform the original standardized data onto the new $k$-dimensional subspace. This is done by taking the dot product of the data with the matrix of the selected eigenvectors. The result is a new, lower-dimensional representation of the original data.

## Choosing the Number of Components (k)
The number of principal components to keep, $k$, is a key choice. It's determined by the **explained variance ratio**, which is the proportion of the total dataset variance captured by each component ($\text{ratio}_i = \frac{\lambda_i}{\sum_{j=1}^{p} \lambda_j}$). Common methods for choosing $k$ include:
-   **Cumulative Explained Variance**: Choose enough components to capture a desired percentage of the total variance (e.g., 95% or 99%).
-   **Scree Plot**: Plot the explained variance of each component and look for an "elbow" point where the explained variance begins to level off.

## Example: Conceptual
Consider a dataset of cars with two highly correlated features: `horsepower` and `engine_size`.

**1. Standardization**: First, both features are standardized to have a mean of 0 and a standard deviation of 1.

**2. Covariance Matrix & Eigendecomposition**: The covariance matrix will show a strong positive covariance. Its eigendecomposition will likely yield:
   -   A large eigenvalue ($\lambda_1$) with an eigenvector ($v_1$) pointing diagonally through the data cloud, along the direction of correlation. This is **PC1**. It captures the overall "engine power" concept.
   -   A much smaller eigenvalue ($\lambda_2$) with an eigenvector ($v_2$) orthogonal to the first. This is **PC2**, capturing the much smaller variance away from the main trend line.

**3. Dimensionality Reduction**:
   -   Since $\lambda_1$ is much larger than $\lambda_2$, PC1 explains most of the variance.
   -   We can reduce the data from 2D to 1D by projecting all the data points onto the PC1 axis. The new, single feature represents the "engine power" of each car, a composite of the original two features.

## Properties and Limitations
-   **Variance Maximization**: PCA finds the orthogonal directions that maximize the variance in the data.
-   **Linearity**: PCA is a linear transformation. It cannot capture non-linear relationships in the data (for which techniques like Kernel PCA are used).
-   **Orthogonality**: Principal components are orthogonal to each other, meaning they are statistically uncorrelated.
-   **Interpretability**: A significant drawback is that the principal components, being linear combinations of all original features, are often difficult to interpret.
-   **Sensitivity to Scaling**: The results of PCA are highly dependent on data scaling. It is crucial to standardize features before applying PCA.

## Applications
1.  **Data Visualization**: The most common application. PCA is used to project high-dimensional data down to 2 or 3 dimensions so that it can be plotted and visually explored for patterns, clusters, or outliers.
2.  **Feature Extraction**: As a preprocessing step in a machine learning pipeline, PCA can be used to reduce the number of features fed into a supervised learning algorithm, which can reduce training time and combat overfitting.
3.  **Image Compression**: PCA can be used to compress images by representing them in a lower-dimensional space. The "Eigenfaces" method for face recognition is a classic example of this.
4.  **Noise Reduction**: By discarding the components with low variance, which are often assumed to represent noise, PCA can be used to clean and denoise signals.
5.  **Finance**: Used to analyze financial data to identify the main factors driving market movements or to model risk in a portfolio.