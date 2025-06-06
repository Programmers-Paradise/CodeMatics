# Mean Squared Log Error (MSLE)  

Mean Squared Log Error is used for **regression tasks** where the target variable has **large values or skewed distributions**. It penalizes underestimates more than overestimates and reduces the impact of large errors.

---

### MSLE Formula  

For $n$ observations, where $ y_i $ is the actual value and $\hat{y}_i$ is the predicted value:  

$$
L = \frac{1}{n} \sum_{i=1}^{n} (\log(1 + y_i) - \log(1 + \hat{y}_i))^2
$$

Where:  
- $y_i$ is the actual value.  
- $\hat{y}_i$ is the predicted value.  

---

### Explanation  

- **Log Transformation**: By taking logarithms of both actual and predicted values, MSLE reduces the sensitivity to large errors in magnitude compared to MSE.  
- **Use Case**: Ideal for scenarios like predicting sales or prices where small relative differences are more important than absolute ones.  

---

### Example  

Predicted values $\hat{y} = [10, 2, 5]$, actual values $y = [5, 3, 4]$.  

1. Compute log transformations:  
   - $\log(1 + 5) = \log(6) \approx 1.7918$, $\log(1 + 10) = \log(11) \approx 2.3979$ → Difference: $2.3979 - 1.7918 = 0.6061$  
   - $\log(1 + 3) = \log(4) \approx 1.3863$, $\log(1 + 2) = \log(3) \approx 1.0986$ → Difference: $1.3863 - 1.0986 = 0.2877$  
   - $\log(1 + 4) = \log(5) \approx 1.6094$, $\log(1 + 5) = \log(6) \approx 1.7918$ → Difference: $1.6094 - 1.7918 = -0.1824$  

2. Compute the mean loss:  
$$
L = \frac{1}{3} (0.6061^2 + 0.2877^2 + (-0.1824)^2) \approx \frac{(0.367 + 0.083 + 0.033)}{3} \approx 0.164
$$

## Challenge  
Write a function `msle(y_true, y_pred)` that computes the MSLE for regression tasks with skewed or large values. Use `log(1 + x)` to avoid negative logs.  

### Parameters  
- `y_true`: A list or numpy array of actual values (`float >= 0`).  
- `y_pred`: A list or numpy array of predicted values (`float >= 0`).  

### Example Input/Output  
```python
# Predicted and true values:
y_true = [5, 3, 4]
y_pred = [10, 2, 5]

loss = msle(y_true, y_pred)
print(f"MSLE: {loss:.4f}")  # Expected output: ~ 0.164
```

### Edge Cases to Handle  
- Ensure `y_true` and `y_pred` are non-negative (use `max(0, x)` if needed).  
