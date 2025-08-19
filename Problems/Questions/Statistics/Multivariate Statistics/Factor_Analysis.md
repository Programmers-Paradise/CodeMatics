# Factor Analysis

Factor Analysis is a statistical method used to describe variability among observed, correlated variables in terms of a potentially lower number of unobserved latent variables called factors. It helps in reducing data complexity by identifying underlying patterns or structures in the data.

## Definition

**Definition:**  
Factor Analysis models the covariance structure of multiple observed variables through a set of common (latent) factors and unique variances. The fundamental equation is:

$$
x_i = \sum_{j=1}^{m} \lambda_{ij} f_j + \epsilon_i
$$

where:
- $x_i$ represents the $i$-th observed variable.
- $f_j$ are the $j$-th latent factors ($j = 1, 2, ..., m$).
- $\lambda_{ij}$ is the factor loading, indicating the relationship between variable $x_i$ and factor $f_j$.
- $\epsilon_i$ is the error term specific to variable $x_i$.

The goal is to estimate the factor loadings ($\lambda_{ij}$) and unique variances ($\sigma^2_\epsilon$) that explain the covariance among variables.

## Example

**Example:**  
Consider a dataset of 5 observed variables with scores on 3 tests: Math, Reading, Science, Writing, and History. We hypothesize there are two latent factors: Academic Ability and Interest in Learning.

1. **Data Collection:** Gather scores for each variable.
2. **Compute Covariance Matrix:** Calculate the covariance between all pairs of variables.
3. **Eigenvalue Decomposition:** Find eigenvalues and eigenvectors of the covariance matrix to identify significant factors.
4. **Factor Extraction:** Select top two eigenvectors (factors) with eigenvalues >1.
5. **Rotation:** Apply varimax rotation for interpretability.

After these steps, factor loadings are estimated, showing how each variable relates to the latent factors.

## Properties

### 1. Linearity
Factor Analysis assumes linear relationships between observed variables and latent factors.

$$
x_i = \sum_{j=1}^{m} \lambda_{ij} f_j + \epsilon_i
$$

### 2. Latent Variables
The number of factors ($m$) is typically less than the number of observed variables.

### 3. Factor Loadings
Factor loadings ($\lambda_{ij}$) indicate variable-factor relationships, often interpreted as correlations between variables and factors.

### 4. Unique Variances
Each variable has a unique variance not explained by common factors:

$$
\text{Variance of } x_i = \sum_{j=1}^{m} \lambda^2_{ij} + \sigma^2_\epsilon
$$

### 5. Goodness-of-Fit
Assess how well the factor model explains the data using statistics like RMSEA, CFI, and TLI.

## Applications

Factor Analysis is widely applied in:

- **Psychology:** To develop multi-item scales (e.g., IQ tests).
- **Finance:** Identifying market factors influencing asset returns.
- **Genetics:** Analyzing PCA for dimensionality reduction.
- **Marketing:** Segmenting consumers based on preferences.
- **Machine Learning:** Feature extraction and dimensionality reduction.

## Conclusion

Factor Analysis is a powerful tool for understanding latent structures in data, reducing complexity while retaining key information. Its applications span multiple domains, making it an essential technique in statistical analysis.