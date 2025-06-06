## Huber Loss  

Huber Loss is a **robust loss function** used for regression tasks, combining the best properties of Mean Squared Error (MSE) and Mean Absolute Error (MAE). It is less sensitive to outliers than MSE but remains differentiable at zero.

---

### Huber Loss Formula  

For $n$ observations, where $y_i$ is the actual value and $\hat{y}_i$ is the predicted value, and $\delta > 0$ is a hyperparameter defining the threshold for quadratic vs linear behavior:  

$$
L = \frac{1}{n} \sum_{i=1}^{n}
\begin{cases}
\frac{1}{2}(y_i - \hat{y}_i)^2, & \text{if } |y_i - \hat{y}_i| \leq \delta \\
\delta |y_i - \hat{y}_i| - \frac{1}{2} \delta^2, & \text{otherwise}
\end{cases}
$$

Where:  
- $y_i$ is the actual value.  
- $\hat{y}_i$ is the predicted value.  
- $\delta$ controls the transition point between quadratic and linear behavior.  

---

### Explanation  

- **Quadratic Behavior**: For small errors (within $\delta$), Huber Loss behaves like MSE, ensuring smooth gradients.  
- **Linear Behavior**: For large errors, it behaves like MAE, reducing sensitivity to outliers.  

---

### Example  

Predicted values $\hat{y} = [2.0, 3.5, 1.0]$, actual values $y = [3.0, 4.0, 2.0]$, and $\delta = 1$.  

1. Compute individual losses:  
   - First term: $|3.0 - 2.0| = 1.0 \leq \delta$ → $\frac{1}{2}(1)^2 = 0.5$  
   - Second term: $|4.0 - 3.5| = 0.5 \leq \delta$ → $\frac{1}{2}(0.5)^2 = 0.125$  
   - Third term: $|2.0 - 1.0| = 1.0 \leq \delta$ → $\frac{1}{2}(1)^2 = 0.5$  

2. Compute the mean loss:  
$$
L = \frac{1}{3} (0.5 + 0.125 + 0.5) = \frac{1.125}{3} = 0.375
$$


## Challenge 
Write a function `huber_loss(y_true, y_pred, delta=1.0)` that computes the Huber loss for regression tasks. Use `delta` to control the transition between quadratic and linear behavior.  

### Parameters  
- `y_true`: A list or numpy array of actual values (`float`).  
- `y_pred`: A list or numpy array of predicted values (`float`).  
- `delta`: Threshold value (e.g., 1.0).  

### Example Input/Output  
```python
# Predicted and true values:
y_true = [3.0, 5.0]
y_pred = [2.5, 6.0]

loss = huber_loss(y_true, y_pred, delta=1.0)
print(f"Huber Loss: {loss:.4f}")  # Expected output: ~ (0.375 + 0.5)/2 = 0.4375
```

### Edge Cases to Handle  
- Ensure `delta` is a positive float.  
