# Layer-Wise Adaptive Moments (LAM)

Layer-Wise Adaptive Moments (LAM) is a technique used in training deep learning models to adaptively adjust the learning rate for each layer based on the historical gradients of its weights. This method enhances the efficiency and effectiveness of the training process by addressing the varying dynamics across different layers.

## Definition

### Equations:
For each weight parameter $w_{l,i}$ in layer $l$, LAM maintains a moving average of squared gradients, denoted as $v_{l,i}$. The update rule for $v_{l,i}$ is given by:

$$
v_{l,i}^{(t)} = (1 - \beta) \cdot g_{l,i}^2 + \beta \cdot v_{l,i}^{(t-1)}
$$

where:
- $g_{l,i}$ is the gradient of the loss with respect to $w_{l,i}$.
- $\beta$ (typically 0.9) is the decay rate for the moving average.

The learning rate update rule for each weight parameter is:

$$
w_{l,i}^{(t+1)} = w_{l,i}^{(t)} - \frac{\eta}{\sqrt{v_{l,i}^{(t)}} + \epsilon} \cdot g_{l,i}
$$

where:
- $\eta$ is the base learning rate.
- $\epsilon$ (a small constant, typically 1e-8) prevents division by zero.

### Explanation:
LAM adapts the learning rate for each weight based on its historical gradient magnitude. Weights with consistently large gradients receive smaller updates to prevent overshooting minima, while those with small gradients can have larger updates.

---

## Example

Consider a simple neural network with one hidden layer and two weights in each layer:  $w_{1}$ and $w_{2}$. Suppose the initial gradients are $g_1 = 0.5$ and $g_2 = 1.5$, with $v_1^{(0)} = v_2^{(0)} = 0$.

**Step-by-Step Update:**

1. **Compute Moving Averages:**
   - For $w_{1}$:
 
 $$
 v_{1}^{(1)} = (1 - 0.9) \cdot (0.5)^2 + 0.9 \cdot 0 = 0.025
 $$
 
   - For $w_{2}$:
 
 $$
 v_{2}^{(1)} = (1 - 0.9) \cdot (1.5)^2 + 0.9 \cdot 0 = 0.2025
 $$

2. **Update Weights:**
   
   Assuming $\eta = 0.1$ and $\epsilon = 1e-8$:
   - For $w_{1}$:
 
 $$
 w_{1}^{(1)} = w_{1}^{(0)} - \frac{0.1}{\sqrt{0.025} + 1e-8} \cdot 0.5 \approx w_{1}^{(0)} - 0.0997
 $$
 
   - For $w_{2}$:
 
 $$
 w_{2}^{(1)} = w_{2}^{(0)} - \frac{0.1}{\sqrt{0.2025} + 1e-8} \cdot 1.5 \approx w_{2}^{(0)} - 0.1
 $$

This example demonstrates how LAM adjusts the learning rates per weight, leading to more efficient parameter updates.

---

## Properties

### Property 1: Adaptive Learning Rate
Each weight's learning rate is dynamically adjusted based on its gradient history, allowing for faster convergence and better generalization.

**Mathematical Support:**
The adaptive learning rate is given by:

$$
\eta_{w} = \frac{\eta}{\sqrt{v_l + \epsilon}}
$$

where $v_l$ accumulates squared gradients of layer $l$.

### Property 2: Efficient Training
LAM eliminates the need for manual hyperparameter tuning, making training more efficient and less reliant on human expertise.

**Mathematical Support:**
The moving average computation:
$$
v_{l,i}^{(t)} = (1 - \beta) g_{l,i}^2 + \beta v_{l,i}^{(t-1)}
$$
ensures stable gradient estimates, reducing variance in updates.

### Property 3: Robust to Noisy Gradients

LAM mitigates the impact of noisy gradients by averaging over past observations, stabilizing training dynamics.

**Mathematical Support:**
The use of moving averages smooths out gradient noise:

$$
v_{l,i}^{(t)} = \beta v_{l,i}^{(t-1)} + (1 - \beta) g_{l,i}^2
$$

where $0 < \beta < 1$.

### Property 4: Layer-wise Adaptation
Each layer's parameters are updated with distinct learning rates, enhancing the model's ability to propagate errors effectively.

**Mathematical Support:**
Layer-specific learning rates ensure that deeper layers (with smaller gradients) can adapt without overshooting, while shallower layers adjust more aggressively:

$$
w_{l,i}^{(t+1)} = w_{l,i}^{(t)} - \frac{\eta}{\sqrt{v_{l,i}^{(t)}} + \epsilon} g_{l,i}
$$

---

## Applications

- **Deep Learning Optimization:** Widely used in training deep neural networks, particularly in computer vision and natural language processing.
- **Reinforcement Learning:** Enhances policy gradient methods by adapting learning rates per parameter.
- **Physics-Informed Neural Networks (PINNs):** Improves stability and convergence when solving partial differential equations.

---

LAM is a powerful technique that enhances the training of deep learning models by providing layer-specific, adaptive learning rates, making it indispensable in modern machine learning applications.
