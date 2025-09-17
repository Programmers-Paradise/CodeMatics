
# Weighted Support Vector Machines (and GLS)

## Introduction
The **Weighted Support Vector Machine** is an important extension of the standard SVM algorithm. While the classic SVM assumes that all training examples are equally important, the Weighted SVM allows for the incorporation of different weights for different data points. This is crucial for handling two common real-world data problems: **class imbalance** and **heteroscedasticity** (non-constant variance of errors).

This approach draws inspiration from **Generalized Least Squares (GLS)** in statistics, which adapts regression models for data with specific error structures. By giving more importance to certain data points, Weighted SVMs can build more robust and accurate classifiers, particularly in fields like finance, biostatistics, and fraud detection.

## The Problem with Standard SVMs
A standard SVM solves an optimization problem that treats every classification error as equally costly. This implicitly assumes that:
1.  All data points are equally reliable and informative.
2.  The cost of misclassifying an example from one class is the same as misclassifying one from another class.

This can be problematic. For example, in a dataset with 99% non-fraudulent and 1% fraudulent transactions, a standard SVM might achieve high accuracy by simply classifying everything as non-fraudulent, completely ignoring the critical minority class.

## The Weighted SVM Formulation
The Weighted SVM addresses this by introducing a weight for each data point into the objective function. The weight determines how severely the model is penalized for misclassifying that specific point.

The standard soft-margin SVM primal problem is:

$$
\min_{\mathbf{w},b,\boldsymbol{\xi}} \frac{1}{2} \|\mathbf{w}\|^2 + C \sum_{i=1}^{n} \xi_i
$$

The **Weighted SVM** modifies this by assigning a specific cost $C_i$ to each data point:

$$\min_{\mathbf{w},b,\boldsymbol{\xi}} \frac{1}{2} \|\mathbf{w}\|^2 + \sum_{i=1}^{n} C_i \xi_i$$subject to:$$y_i (\mathbf{w}^T \phi(\mathbf{x}_i) + b) \geq 1 - \xi_i, \quad \xi_i \geq 0$$

-   $C_i$ is the regularization parameter for the $i$-th data point.
-   By setting a **high $C_i$**, we tell the model that misclassifying point $i$ is very costly, forcing the decision boundary to pay more attention to it.
-   By setting a **low $C_i$**, we tell the model that misclassifying point $i$ is less important.

## How are the Weights Determined?
The strategy for setting the weights $C_i$ depends on the problem being solved.

### 1. Handling Class Imbalance
This is the most common use case. To rebalance the classes, the weights are set inversely proportional to the class frequencies.
-   If a "positive" class has $n_p$ samples and a "negative" class has $n_n$ samples, the weights can be set as:
    -   $C_i = C \times \frac{n}{2 \cdot n_p}$ for all positive samples.
    -   $C_i = C \times \frac{n}{2 \cdot n_n}$ for all negative samples.
-   This gives the minority class a much higher total penalty, forcing the SVM to learn a decision boundary that correctly identifies them.

### 2. Handling Heteroscedasticity (like GLS)
In some problems, particularly in econometrics or signal processing, the data points have different levels of noise or reliability. This is known as **heteroscedasticity**.
-   The logic of **Generalized Least Squares (GLS)** is to give less weight to noisy, high-variance observations and more weight to stable, low-variance observations.
-   In a Weighted SVM, we can do the same. If we have an estimate of the error variance $\sigma_i^2$ for each data point $i$, we can set the weights to be inversely proportional to this variance:

$$C_i \propto \frac{1}{\sigma_i^2}$$

-   This forces the SVM to rely more on the high-quality, reliable data points when determining the optimal margin.

## Conceptual Example: Financial Time Series
**Scenario**: We want to build an SVM to classify whether a stock market will go "Up" or "Down" based on a set of economic indicators.
-   **The Problem**: Financial data is famously heteroscedastic. There are quiet, stable periods (low volatility) and chaotic, noisy periods (high volatility). A standard SVM would treat a data point from a market crash in 2008 the same as a point from a calm day in 2005.
-   **The Weighted SVM Solution**:
    1.  **Estimate Volatility**: First, we use a model like GARCH to estimate the time-varying volatility, $\sigma_t^2$, for each day in our dataset.
    2.  **Assign Weights**: We assign a weight to each day that is inversely proportional to its estimated volatility ($C_t \propto 1/\sigma_t^2$). Data points from high-volatility days get low weights, and points from low-volatility days get high weights.
    3.  **Train**: We train the SVM with these individual costs.
-   **Result**: The resulting SVM decision boundary will be more influenced by the patterns observed during stable, predictable market periods and less distracted by the noise from chaotic periods, likely leading to a more robust model.

## Applications
-   **Fraud Detection and Anomaly Detection**: For handling the severe class imbalance between fraudulent and non-fraudulent transactions.
-   **Medical Diagnosis**: For dealing with imbalanced datasets where the number of healthy patients is much larger than the number of patients with a rare disease.
-   **Econometrics**: For modeling financial or economic time series that exhibit periods of changing volatility (heteroscedasticity).
-   **Biostatistics**: For analyzing experimental data where different measurements might have different levels of known precision or reliability.