# Categorical Cross-Entropy Loss  

Categorical Cross-Entropy is used for **multi-class classification problems** where each observation belongs to exactly one class (e.g., image classification with multiple labels).

---

### Categorical Cross-Entropy Formula  

For $ n $ observations, where $y_{i,k} \in \{0, 1\}$ is the actual label (one-hot encoded), and $\hat{y}_{i,k}$ is the predicted probability for class $k$:  

$$
L = -\frac{1}{n} \sum_{i=1}^{n} \sum_{k=1}^{K} y_{i,k} \cdot \log(\hat{y}_{i,k})
$$

Where:  
- $K$ is the number of classes.  
- $y_{i,k} = 1$ if the actual class of observation $i$ is $k$.  

---

### Explanation  

- **Softmax Activation**: Often used with softmax to produce probabilities across classes.  
- **Penalizing Incorrect Predictions**: The loss heavily penalizes predictions that are far from the true label (e.g., predicting a probability close to 0 for the actual class).  

---

### Example  

Predicted probabilities $\hat{y} = [[0.2, 0.7, 0.1], [0.6, 0.3, 0.1], [0.1, 0.8, 0.1]]$, actual labels (one-hot encoded) $y = [[0, 1, 0], [0, 0, 1], [0, 1, 0]]$.  

1. Compute individual losses:  
   - First observation: $-\log(0.7) \approx 0.3567$  
   - Second observation: $-\log(0.1) = 2.3026$  
   - Third observation: $-\log(0.8) \approx 0.2231$  

2. Compute the mean loss:  
$$
L = \frac{1}{3} (0.3567 + 2.3026 + 0.2231) \approx \frac{2.8824}{3} \approx 0.9608
$$

## Challenge  
Write a function `categorical_crossentropy(y_true, y_pred)` that computes the categorical cross-entropy loss for multi-class classification problems (e.g., one-hot encoded labels).  

### Parameters  
- `y_true`: A list or numpy array of one-hot encoded true labels (`0` or `1`).  
- `y_pred`: A list or numpy array of predicted probabilities (`float between 0 and 1`).  

### Example Input/Output  
```python
# One-hot encoded y_true and predicted probabilities:
y_true = [[0, 1, 0], [0, 0, 1], [0, 1, 0]]
y_pred = [[0.2, 0.7, 0.1], [0.6, 0.3, 0.1], [0.1, 0.8, 0.1]]

loss = categorical_crossentropy(y_true, y_pred)
print(f"Categorical Cross-Entropy Loss: {loss:.4f}")  # Expected output: ~ 0.9608
```

### Edge Cases to Handle  
- Avoid log(0) by using a small epsilon (e.g., `1e-8`).  
