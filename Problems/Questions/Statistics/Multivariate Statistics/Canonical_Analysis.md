# Canonical Correlation Analysis (CCA)

Canonical Correlation Analysis (CCA) is a statistical method used to find the linear relationship between two sets of variables. It is particularly useful in fields such as machine learning, bioinformatics, and psychology where datasets often contain multiple variables, and understanding their interrelationships is crucial.

## Definition

Given two random vectors **X** ∈ ℝ^p and **Y** ∈ ℝ^q, CCA seeks to find the linear combinations:

$$
U = \mathbf{a}^\top \mathbf{X}, \quad V = \mathbf{b}^\top \mathbf{Y}
$$

where **a** ∈ ℝ^p and **b** ∈ ℝ^q are vectors of coefficients, such that the correlation between U and V is maximized. This is achieved by solving the optimization problem:

$$
\max_{\mathbf{a}, \mathbf{b}} \text{Corr}(U, V) = \frac{\mathbf{a}^\top \Sigma_{XY} \mathbf{b}}{\sqrt{\mathbf{a}^\top \Sigma_{XX} \mathbf{a}} \sqrt{\mathbf{b}^\top \Sigma_{YY} \mathbf{b}}}
$$

where $Σ_{XX}$, $Σ_{YY}$, and $Σ_{XY}$ are the covariance matrices of **X**, **Y**, and their cross-covariance, respectively.

The solution involves finding the eigenvectors corresponding to the largest eigenvalues of the matrix pencil $(Σ_{XX}^{-1} Σ_{XY} Σ_{YY}^{-1} Σ_{YX}, I)$. These eigenvectors define the canonical variables U and V with maximum correlation.

## Example

Consider two datasets:

**X** = [x₁, x₂] and **Y** = [y₁, y₂]

with covariance matrices:

$$
\Sigma_{XX} = \begin{bmatrix} 4 & 1 \\ 1 & 5 \end{bmatrix}, \quad
\Sigma_{YY} = \begin{bmatrix} 6 & 2 \\ 2 & 7 \end{bmatrix}, \quad
\Sigma_{XY} = \begin{bmatrix} 3 & 0.5 \\ 0.5 & 1 \end{bmatrix}
$$

To find the canonical variables, compute:

$$
\Sigma_{XX}^{-1} \Sigma_{XY} \Sigma_{YY}^{-1} \Sigma_{YX}
$$

First, calculate Σ_{XX}^{-1} and Σ_{YY}^{-1}:

$$
\Sigma_{XX}^{-1} = \frac{1}{(4)(5) - (1)^2} \begin{bmatrix} 5 & -1 \\ -1 & 4 \end{bmatrix} = \frac{1}{19} \begin{bmatrix} 5 & -1 \\ -1 & 4 \end{bmatrix}
$$

$$
\Sigma_{YY}^{-1} = \frac{1}{(6)(7) - (2)^2} \begin{bmatrix} 7 & -2 \\ -2 & 6 \end{bmatrix} = \frac{1}{38} \begin{bmatrix} 7 & -2 \\ -2 & 6 \end{bmatrix}
$$

Then, compute:

$$
\Sigma_{XX}^{-1} \Sigma_{XY} = \frac{1}{19} \begin{bmatrix} 5 & -1 \\ -1 & 4 \end{bmatrix} \begin{bmatrix} 3 & 0.5 \\ 0.5 & 1 \end{bmatrix} = \frac{1}{19} \begin{bmatrix} 15 - 0.5 & 2.5 - 1 \\ -3 + 2 & -0.5 + 4 \end{bmatrix} = \frac{1}{19} \begin{bmatrix} 14.5 & 1.5 \\ -1 & 3.5 \end{bmatrix}
$$

Next, multiply by $Σ_{YY}^{-1}$:

$$
\Sigma_{XX}^{-1} \Sigma_{XY} \Sigma_{YY}^{-1} = \frac{1}{19 \times 38} \begin{bmatrix} 14.5 & 1.5 \\ -1 & 3.5 \end{bmatrix} \begin{bmatrix} 7 & -2 \\ -2 & 6 \end{bmatrix}
$$

After performing the matrix multiplication, find the eigenvalues and eigenvectors of this product to determine the canonical coefficients **a** and **b**, which define U and V.

## Properties

1. **Orthogonality**: The canonical vectors obtained from CCA are orthogonal in both datasets.
2. **Number of Components**: Typically, there are min(p, q) significant components, where p and q are the dimensions of **X** and **Y**.
3. **Invariance to Linear Transformations**: CCA is invariant under linear transformations of the original variables.
4. **Regularization**: Techniques like ridge CCA can be applied when dealing with multicollinearity or high-dimensional data.

## Applications

1. **Bioinformatics**: Analyzing gene expression data to identify co-regulated genes.
2. **Machine Learning**: Feature extraction for dimensionality reduction in classification tasks.
3. **Psychology**: Investigating relationships between test scores and behavioral measures.
4. **Environmental Science**: Studying ecological data to understand species-environment interactions.
5. **Image Processing**: Using kernel CCA for tasks like face recognition.

CCA is a powerful tool for uncovering hidden patterns and relationships in multivariate datasets across various domains.
