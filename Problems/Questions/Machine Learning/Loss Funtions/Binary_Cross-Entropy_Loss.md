# Binary Cross-Entropy Loss

Binary Cross-Entropy Loss, also known as Log Loss, is used for binary classification problems. It measures the performance of a classification model whose output is a probability value between 0 and 1, quantifying the difference between the predicted probability and the actual binary label.

### Binary Cross-Entropy Loss Formula

For a set of $ n $ observations, where $ \hat{y}_i $ is the predicted probability and $ y_i $ is the actual binary label (0 or 1), the Binary Cross-Entropy Loss $L$ is:

$$
L = -\frac{1}{n} \sum_{i=1}^{n} \left[ y_i \cdot \log(\hat{y}_i) + (1 - y_i) \cdot \log(1 - \hat{y}_i) \right]
$$

Where:

- $\hat{y}_i$ is the predicted probability for the $i$-th observation.
- $y_i$ is the actual binary label (0 or 1) for the $i$-th observation.
- $\log$ denotes the natural logarithm.

### Explanation

- **Cross-Entropy**: Measures how well the predicted probabilities match the true binary labels.
- **Logarithm**: Penalizes incorrect predictions more heavily. The loss is smaller if the predicted probability is close to the actual label.

### Example

For predicted probabilities a $\hat{y} = {0.9, 0.4, 0.2}$ and actual labels $y = {1, 0, 1}$:

1. Compute the individual losses:

$$ - [1 \cdot \log(0.9) + (1 - 1) \cdot \log(1 - 0.9)] = -\log(0.9)
$$

$$- [0 \cdot \log(0.4) + (1 - 0) \cdot \log(1 - 0.4)] = -\log(0.6)
$$

$$- [1 \cdot \log(0.2) + (1 - 1) \cdot \log(1 - 0.2)] = -\log(0.2)
$$

2. Compute the mean loss:

$$L = \frac{1}{3} \left[ -\log(0.9) - \log(0.6) - \log(0.2) \right]
$$

$$\log(0.9) \approx -0.105360516
$$

$$\log(0.6) \approx -0.510825624
$$

$$\log(0.2) \approx -1.609437912
$$

$$L = \frac{1}{3} \left[ -(-0.105360516) - (-0.510825624) - (-1.609437912) \right] = \frac{1}{3} \left[ 0.105360516 + 0.510825624 + 1.609437912 \right]
$$

$$0.105360516 + 0.510825624 + 1.609437912 = 2.225624052
$$

$$L = \frac{2.225624052}{3} \approx 0.741874684
$$

$$\boxed{L \approx 0.7419}
$$


## Challenge

Create a program to demonstrate Binary Cross Entropy Loss.
