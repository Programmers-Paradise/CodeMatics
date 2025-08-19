# Inductive Bias

Inductive bias is a fundamental concept in machine learning that refers to the set of assumptions a learning algorithm uses to predict outputs when given insufficient input data. These assumptions guide the model's learning process, enabling it to generalize from training examples to unseen data.

## Definition

Inductive bias can be formally defined as the set of assumptions that an algorithm incorporates to enable generalization from training data. Mathematically, consider a function \( f: \mathbb{R}^n \rightarrow \mathbb{R} \) that maps inputs $\mathbf{x} = (x_1, x_2, ..., x_n)$ to outputs $y$. The inductive bias $\mathcal{B}$ is the set of assumptions about $f$, which can be expressed as:

$$
f(\mathbf{x}) = \sum_{i=1}^{m} w_i \phi_i(\mathbf{x}) + b
$$

where $\phi_i$ are basis functions, $w_i$ are weights, and $b$ is a bias term. The choice of $\phi_i$ constitutes the inductive bias.

### Example

Consider linear regression, where the model assumes a linear relationship between inputs and outputs:

$$
y = w_1x_1 + w_2x_2 + ... + w_nx_n + b
$$

This assumption (linear bias) allows the model to generalize from data but limits its ability to capture non-linear relationships.

## Properties

### Flexibility vs. Rigidity

The inductive bias determines how flexible a model is. A rigid bias may limit the model's capacity, while a flexible bias can handle complex patterns. For example, decision trees have hierarchical (rigid) biases, while neural networks are more flexible due to their layered structures.

### Role of Loss Functions and Regularization

Inductive bias often arises from loss functions or regularization terms that constrain the hypothesis space. For instance, L2 regularization adds a bias towards smaller weights:

$$
\text{Loss} = \text{MSE} + \lambda \sum_{i=1}^{m} w_i^2
$$

### Model-Specific Biases

Different models have distinct biases:
- **SVMs** use margin-based biases, preferring classifiers with larger margins.
- **Neural Networks** employ implicit biases during optimization (e.g., towards low-rank matrices).

## Applications

Inductive bias is crucial in various domains:

1. **Machine Learning**: All algorithms rely on biases for generalization. For example, SVMs balance accuracy and model complexity via their kernel choice.

2. **Statistics**: Biases influence model assumptions, such as linear regression's linearity assumption.

3. **Engineering**: In signal processing, Fourier transforms assume signals are composed of sinusoids, a form of inductive bias.

In summary, inductive bias is essential for enabling models to generalize from data by encoding prior knowledge about the problem structure.