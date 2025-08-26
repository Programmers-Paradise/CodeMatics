# Quadratic Discriminant Analysis (QDA) in Machine Learning

## Introduction
Quadratic Discriminant Analysis (QDA) is a probabilistic classification technique used in machine learning and statistics. It serves as a powerful extension of Linear Discriminant Analysis (LDA) by offering greater flexibility. While LDA assumes that all classes share a common covariance matrix, QDA allows each class to have its own unique covariance matrix. This enables QDA to model more complex, non-linear decision boundaries, making it a valuable tool for a wide range of classification problems.

## The QDA Model
QDA is a generative model, meaning it models the distribution of the data for each class. Specifically, it assumes that the data points for each class $k$ are drawn from a multivariate Gaussian (normal) distribution with a class-specific mean vector $\boldsymbol{\mu}_k$ and covariance matrix $\Sigma_k$.

To classify a new data point $\mathbf{x}$, QDA uses Bayes' theorem to calculate the posterior probability of the point belonging to each class. The classification rule is to assign the point to the class with the highest posterior probability. In practice, this is equivalent to finding the class $k$ that maximizes the **quadratic discriminant function**:

$$\delta_k(\mathbf{x}) = -\frac{1}{2} \log(|\Sigma_k|) - \frac{1}{2} (\mathbf{x} - \boldsymbol{\mu}_k)^T \Sigma_k^{-1} (\mathbf{x} - \boldsymbol{\mu}_k) + \log(\pi_k)$$

Where:
-   $\boldsymbol{\mu}_k$ is the mean vector of class $k$.
-   $\Sigma_k$ is the unique covariance matrix for class $k$.
-   $\pi_k$ is the prior probability of class $k$.
-   $|\Sigma_k|$ is the determinant of the covariance matrix.

The presence of the quadratic term $(\mathbf{x} - \boldsymbol{\mu}_k)^T \Sigma_k^{-1} (\mathbf{x} - \boldsymbol{\mu}_k)$ is what gives the model its name and allows it to create non-linear (quadratic) decision boundaries.

## Example
Consider a dataset with two classes, A and B, each with two features.
-   **Class A**: Has mean $`\boldsymbol{\mu}_A = \begin{bmatrix} 2 \\ 3 \end{bmatrix}`$ and covariance $`\Sigma_A = \begin{bmatrix} 1 & 0 \\ 0 & 1 \end{bmatrix}`$. (Data forms a circular cloud).

-   **Class B**: Has mean $`\boldsymbol{\mu}_B = \begin{bmatrix} 4 \\ 5 \end{bmatrix}`$ and covariance $`\Sigma_B = \begin{bmatrix} 2 & 1 \\ 1 & 2 \end{bmatrix}`$. (Data forms a tilted, elliptical cloud).

To classify a new point, say $`\mathbf{x}_{new} = \begin{bmatrix} 3 \\ 3.5 \end{bmatrix}`$, we would:
1.  **Estimate Parameters**: Estimate the means, covariances, and prior probabilities ($\pi_k$) from the training data.
2.  **Calculate Discriminant Scores**: Plug $\mathbf{x}_{new}$ and the estimated parameters into the discriminant functions $\delta_A(\mathbf{x})$ and $\delta_B(\mathbf{x})$.
3.  **Classify**: Assign $\mathbf{x}_{new}$ to the class that yields the higher score.

The **decision boundary** between the two classes is the set of all points $\mathbf{x}$ where the scores are equal: $\delta_A(\mathbf{x}) = \delta_B(\mathbf{x})$. Because the covariance matrices $\Sigma_A$ and $\Sigma_B$ are different, this equation will be a quadratic function of $\mathbf{x}$, resulting in a curved boundary (a parabola, hyperbola, or ellipse) that separates the two classes.

## QDA vs. LDA: The Bias-Variance Trade-off
The choice between QDA and LDA depends on the balance between bias and variance.

| Feature                | **Linear Discriminant Analysis (LDA)** | **Quadratic Discriminant Analysis (QDA)** |
| ---------------------- | --------------------------------------------- | ---------------------------------------------- |
| **Covariance** | Assumes a **common** covariance matrix ($\Sigma$) | Allows **class-specific** covariance matrices ($\Sigma_k$) |
| **Decision Boundary** | **Linear** (Hyperplanes)                       | **Quadratic** (Conic sections, etc.)           |
| **# of Parameters** | Fewer (estimates one covariance matrix)       | More (estimates K covariance matrices)         |
| **Bias-Variance** | Higher Bias, Lower Variance                   | Lower Bias, Higher Variance                    |
| **Data Requirement** | Performs well on small datasets               | Requires a larger dataset to avoid overfitting |

**Rule of Thumb**:
-   Use **LDA** if the training set is small, or if you believe the classes have a similar covariance structure.
-   Use **QDA** if the training set is large and the assumption of a common covariance matrix is clearly violated.

## Properties and Assumptions
-   **Assumption**: QDA assumes that the data within each class follows a multivariate normal distribution.
-   **Flexibility**: It is more flexible than LDA and can capture a wider range of data distributions.
-   **Overfitting Risk**: Due to its flexibility and the large number of parameters it needs to estimate (one covariance matrix per class), QDA is more prone to overfitting than LDA, especially with limited data.

## Applications
QDA is a powerful tool for classification tasks where the decision boundary is non-linear and the dataset is large enough to support its data requirements.
-   **Bioinformatics**: Classifying different types of tissues or tumors based on gene expression data, where the variability (covariance) of gene expression may differ significantly between healthy and cancerous cells.
-   **Financial Analysis**: Differentiating between low-risk and high-risk customers for credit scoring, where the patterns of financial behavior might have different correlations for each group.
-   **Computer Vision**: In object recognition tasks, where the pixel variations of different object classes might follow distinct distributions.
-   **Geology**: Classifying different types of geological formations based on sensor data, where each formation type might exhibit a unique pattern of variance in its features.