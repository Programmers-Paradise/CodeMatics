# Quantile Loss  

Quantile Loss is used for **quantile regression**, where the goal is to predict a specific quantile (e.g., median or 90th percentile) of the target distribution instead of the mean. It is robust to outliers and allows modeling different parts of the distribution.

---

### Quantile Loss Formula  

For $ n $ observations, where $ y_i $ is the actual value, $\hat{y}_i$ is the predicted value, and $\tau \in [0, 1]$ defines the quantile (e.g., $\tau = 0.5$ for median):  

$$
L = \frac{1}{n} \sum_{i=1}^{n} 
\begin{cases}
\tau (y_i - \hat{y}_i), & \text{if } y_i \geq \hat{y}_i \\
(1 - \tau) (\hat{y}_i - y_i), & \text{otherwise}
\end{cases}
$$

Where:  
- $y_i$ is the actual value.  
- $\hat{y}_i$ is the predicted value.  
- $\tau$ defines which quantile to estimate (e.g., 0.9 for the 90th percentile).  

---

### Explanation  

- **Quantile Estimation**: The loss penalizes underestimates and overestimates differently depending on $\tau$. For example, if $\tau = 0.2$, it heavily penalizes underestimating the target (when actual > predicted) more than overestimating.  
- **Robustness to Outliers**: Unlike MSE, Quantile Loss is not affected by extreme values in the data.  

---

### Example  

Predicted values $\hat{y} = [3.0, 2.5, 4.0]$, actual values $y = [2.0, 3.0, 5.0]$, and $\tau = 0.2$.  

1. Compute individual losses:  
   - First term:  $y_i = 2.0 < \hat{y}_i = 3.0 $ → $ (1 - 0.2)(3.0 - 2.0) = 0.8(1) = 0.8$  
   - Second term: $y_i = 3.0 > \hat{y}_i = 2.5 $ → $ 0.2(3.0 - 2.5) = 0.2(0.5) = 0.1$  
   - Third term: $y_i = 5.0 > \hat{y}_i = 4.0 $ → $ 0.2(5.0 - 4.0) = 0.2(1) = 0.2$  

2. Compute the mean loss:  
$$
L = \frac{1}{3} (0.8 + 0.1 + 0.2) = \frac{1.1}{3} \approx 0.367
$$


## Challenge  
Write a function `quantile_loss(y_true, y_pred, tau=0.5)` that computes the quantile loss for regression tasks (e.g., forecasting). Use `tau` to specify the quantile (e.g., 0.2 or 0.8).  

### Parameters  
- `y_true`: A list or numpy array of actual values (`float`).  
- `y_pred`: A list or numpy array of predicted values (`float`).  
- `tau`: Quantile parameter (e.g., 0.5 for median regression).  

### Example Input/Output  
```python
# Predicted and true values:
y_true = [2, 3]
y_pred = [3.0, 2.5]

loss = quantile_loss(y_true, y_pred, tau=0.2)
print(f"Quantile Loss: {loss:.4f}")  # Expected output: ~ (0.8 + 0.1)/2 = 0.45
```

### Edge Cases to Handle  
- Ensure `tau` is between 0 and 1.  
