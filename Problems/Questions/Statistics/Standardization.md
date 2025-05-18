## Standardization in Statistics

Standardization, also known as Z-score normalization, is a technique used in statistics to scale the features of data so that they have a mean of 0 and a standard deviation of 1. This process is important in preparing data for various statistical analyses and machine learning algorithms.

### Definition

For a given dataset with a feature $x$, the standardized value (also known as the Z-score) $z$ is computed as:

$$
z = \frac{x - \mu}{\sigma}
$$

where:
- $x$ is the original value
- $\mu$ is the mean of the dataset
- $\sigma$ is the standard deviation of the dataset

### Example

Consider a dataset:

$$
X = \{1, 2, 3, 4, 5\}
$$

To standardize this dataset:
1. Calculate the mean $\mu$):

$$
\mu = \frac{1 + 2 + 3 + 4 + 5}{5} = 3
$$

2. Calculate the standard deviation \( \sigma \):

$$
\sigma = \sqrt{\frac{(1-3)^2 + (2-3)^2 + (3-3)^2 + (4-3)^2 + (5-3)^2}{5}} = \sqrt{2} \approx 1.414
$$

3. Standardize each value $x$ using the formula $z = \frac{x - \mu}{\sigma}$ .

For example, for $x = 1$:

$$
z = \frac{1 - 3}{1.414} \approx -1.414
$$

### Importance

Standardization is crucial in scenarios where features in a dataset have different units or different ranges. It allows algorithms to converge more quickly and ensures that each feature contributes equally to the analysis.

### Applications

Standardization is commonly used in:
- **Machine Learning**: Many algorithms, such as Support Vector Machines (SVM) and K-Nearest Neighbors (KNN), perform better on standardized data.
- **Data Analysis**: Helps in comparing variables that are measured on different scales.
- **Statistical Inference**: Used in hypothesis testing and regression analysis to make data comparable.

## Problem Statement

Given a dataset, your task is to standardize the data by calculating the Z-scores for each feature. This involves subtracting the mean and dividing by the standard deviation for each value.
