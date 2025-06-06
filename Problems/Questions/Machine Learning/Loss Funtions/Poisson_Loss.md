# Poisson Loss  

Poisson Loss is used for **regression tasks** where the target variable follows a **Poisson distribution**, such as modeling counts (e.g., number of occurrences). It measures the discrepancy between predicted and actual values by minimizing the negative log-likelihood of the Poisson distribution.

---

### Poisson Loss Formula  

For $n$ observations, where $y_i$ is the actual count and $\hat{\lambda}_i$ is the predicted mean (rate parameter), the Poisson Loss $L$ is:  

$$
L = -\frac{1}{n} \sum_{i=1}^{n} \left[ y_i \log(\hat{\lambda}_i) - \hat{\lambda}_i \right]
$$

Where:  
- $y_i$ is the actual count (non-negative integer).  
- $\hat{\lambda}_i$ is the predicted mean for the $i$-th observation.  

---

### Explanation  

- **Poisson Distribution**: Assumes that counts are non-negative and follow a Poisson distribution with rate parameter $\lambda$.  
- **Negative Log-Likelihood**: The loss penalizes predictions where $\hat{\lambda}_i$ does not match the actual count $y_i$, especially when $y_i$ is large.  

---

### Example  

Predicted means $\hat{\lambda} = [2.3, 1.5, 3.0]$ and actual counts $y = [2, 1, 4]$.  

1. Compute individual losses:  
   - First term: $2 \cdot \log(2.3) - 2.3 \approx 2(0.8329) - 2.3 = 1.6658 - 2.3 = -0.6342$  
   - Second term: $1 \cdot \log(1.5) - 1.5 \approx 1(0.4055) - 1.5 = -1.0945$  
   - Third term: $4 \cdot \log(3.0) - 3.0 \approx 4(1.0986) - 3.0 = 4.3944 - 3.0 = 1.3944$  

2. Compute the mean loss:  
$$
L = \frac{1}{3} (-0.6342 - 1.0945 + 1.3944) \approx \frac{-0.3343}{3} \approx -0.1114
$$

## Challenge  
Write a function `poisson_loss(y_true, y_pred)` that computes the Poisson loss for regression tasks where target values follow a Poisson distribution (e.g., count data).  

### Parameters  
- `y_true`: A list or numpy array of actual counts (`int >= 0`).  
- `y_pred`: A list or numpy array of predicted means (`float > 0`).  

### Example Input/Output  
```python
# Predicted means and true counts:
y_true = [2, 1, 4]
y_pred = [2.3, 1.5, 3.0]

loss = poisson_loss(y_true, y_pred)
print(f"Poisson Loss: {loss:.4f}")  # Expected output: ~ -0.1114
```

### Edge Cases to Handle  
- Ensure `y_pred` is strictly positive (use `max(0.001, y_pred[i])` if needed).  
- Avoid log of zero by using a small epsilon (e.g., `1e-8`).  
