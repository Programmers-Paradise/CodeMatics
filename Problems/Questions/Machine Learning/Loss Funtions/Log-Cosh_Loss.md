## Log-Cosh Loss  

Log-Cosh Loss is a **smooth, differentiable** loss function used for regression tasks. It combines the robustness of MAE with the smoothness of MSE and is particularly useful in optimization.

---

### Log-Cosh Loss Formula  

For $n$ observations, where $ y_i $ is the actual value and $\hat{y}_i$ is the predicted value:  

$$
L = \frac{1}{n} \sum_{i=1}^{n} \log(\cosh(y_i - \hat{y}_i))
$$

Where:  
- $y_i$ is the actual value.  
- $\hat{y}_i$ is the predicted value.  
- $\cosh(x) = \frac{e^x + e^{-x}}{2}$.  

---

### Explanation  

- **Smoothness**: The logarithm of hyperbolic cosine ensures differentiability everywhere, which helps in gradient-based optimization.  
- **Robust to Outliers**: Like MAE, it penalizes large errors linearly, but with a smooth curve.  

---

### Example  

Predicted values $\hat{y} = [2.0, 3.5, 1.0]$, actual values $y = [3.0, 4.0, 2.0]$.  

1. Compute individual losses:  
   - First term: $\log(\cosh(3.0 - 2.0)) = \log(\cosh(1.0)) \approx \log(1.543) \approx 0.436$  
   - Second term: $\log(\cosh(4.0 - 3.5)) = \log(\cosh(0.5)) \approx \log(1.1276) \approx 0.120$  
   - Third term: $\log(\cosh(2.0 - 1.0)) = \log(\cosh(1.0)) \approx 0.436$  

2. Compute the mean loss:  
$$
L = \frac{1}{3} (0.436 + 0.12) 
$$

## Challenge  
Write a function `log_cosh_loss(y_true, y_pred)` that computes the log-cosh loss for regression tasks. Use `numpy.cosh` or a custom implementation of the hyperbolic cosine function.  

### Parameters  
- `y_true`: A list or numpy array of actual values (`float`).  
- `y_pred`: A list or numpy array of predicted values (`float`).  

### Example Input/Output  
```python
# Predicted and true values:
y_true = [2, 3]
y_pred = [1.5, 4]

loss = log_cosh_loss(y_true, y_pred)
print(f"Log-Cosh Loss: {loss:.4f}")  # Expected output: ~ (log(cosh(0.5)) + log(cosh(-1))) / 2
```
