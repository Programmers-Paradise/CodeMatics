# Sparse Categorical Cross-Entropy Loss  

Sparse Categorical Cross-Entropy is a variant of **Categorical Cross-Entropy** used when actual labels are **integers (not one-hot encoded)**, making it more memory-efficient for problems with many classes.

---

### Sparse Categorical Cross-Entropy Formula  

For $ n $ observations, where $y_i \in \{0, 1, ..., K-1\}$ is the integer class label and $\hat{y}_{i,k}$ is the predicted probability for class $ k $:  

$$
L = -\frac{1}{n} \sum_{i=1}^{n} \log(\hat{y}_{i, y_i})
$$

Where:  
- $y_i$ is the actual integer label (e.g., 0, 1, ..., K-1).  
- $\hat{y}_{i,k}$ is the predicted probability for class $ k $.  

---

### Explanation  

- **Efficiency**: Avoids one-hot encoding by directly using integer labels.  
- **Use Case**: Ideal when the number of classes is large (e.g., 1000+), as storing one-hot vectors becomes impractical.  

---

### Example  

Predicted probabilities $\hat{y} = [[0.2, 0.7, 0.1], [0.6, 0.3, 0.1], [0.1, 0.8, 0.1]] $, actual labels (integers) $ y = [1, 2, 1]$.  

1. Compute individual losses:  
   - First observation: $-\log(0.7) \approx 0.3567$  
   - Second observation: $-\log(0.1) = 2.3026$  
   - Third observation: $-\log(0.8) \approx 0.2231$  

2. Compute the mean loss:  
$$
L = \frac{1}{3} (0.3567 + 2.3026 + 0.2231) \approx \frac{2.8824}{3} \approx 0.9608