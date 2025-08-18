# Lion (EvoLved Sign Momentum)

## Introduction
Lion is an advanced optimization algorithm designed for machine learning models, particularly in deep learning contexts. It combines elements from Nesterov's accelerated gradient method and Adam to adaptively adjust learning rates, enhancing the efficiency of training by accelerating convergence.

## Definition
The Lion optimizer is defined with the following parameters:

- $\beta_{1}$: Exponential decay rate for first moment estimates (typically $0.9$)  
- $\beta_{2}$: Exponential decay rate for second moment estimates (typically $0.997$)  
- $\gamma$: Sign momentum parameter (typically $0.1$)  

**Initialization:**

$$
\theta_{0} = \text{initial parameters}, \quad m_{0} = 0, \quad n_{0} = 0
$$

For each time step $t$:

1. **Compute the gradient:**

$$
g_{t} = \nabla f(\theta_{t-1})
$$

2. **Update first moment estimate:**

$$
m_{t} = \beta_{1} m_{t-1} + (1 - \beta_{1}) g_{t}
$$

3. **Update sign-based second moment estimate:**

$$
n_{t} = \gamma \cdot \text{sign}(g_{t}) \cdot \sqrt{|g_{t}|^{2}} + (1 - \beta_{2}) \cdot \text{sign}(g_{t})
$$

4. **Bias-corrected estimates:**
   
$$ 
\hat{m}_ {t} = \frac{m_{t}}{1 - \beta_{1}^{t}}, \quad \hat{n}_ {t} = \frac{n_{t}}{1 - \beta_{2}^{t}} 
$$

5. **Update parameters:**

$$
\theta_{t} = \theta_{t-1} - \eta \cdot \frac{\hat{m}_ {t}}{\sqrt{\hat{n}_{t}} + \varepsilon}
$$

---

## Example
Consider a simple quadratic loss function:

$$
f(\theta) = (\theta - 5)^{2}, \quad \theta_{0} = 0
$$

**Step-by-Step Computation:**

1. Initialization: $m_{0} = 0, \; n_{0} = 0$

2. Gradient at $t=1$: 

$$
g_{1} = \nabla f(\theta_{0}) = -10 \cdot (0 - 5) = 50
$$

3. First moment:  

$$
m_{1} = 0.9 \cdot 0 + 0.1 \cdot 50 = 5
$$

4. Sign-based second moment:  

$$
n_{1} = 0.1 \cdot 50 + 0.003 \cdot 1 = 5.003
$$

5. Bias-corrected estimates:  

$$
\hat{m}_ {1} = \frac{5}{1 - 0.9} = 50, 
\quad
\hat{n}_{1} = \frac{5.003}{0.003} \approx 1667.67
$$

6. Parameter update (with $\eta=0.001$, $\varepsilon=10^{-8}$):  

$$
\theta_{1} = 0 - 0.001 \cdot \frac{50}{1667.67} \approx -0.00003
$$

---

## Properties
- **Combines Nesterov Acceleration:** Uses $\beta_{1}$ for faster convergence by looking ahead at future gradients.  
- **Sign Momentum:** Employs $\gamma$ to track the sign of past gradients, enhancing stability in sparse data scenarios.  
- **Adam-like Adaptation:** Utilizes $\beta_{2}$ for adaptive learning rates similar to Adam.  
- **Sparse Gradient Handling:** Effective with sparse gradients while reducing computational overhead.  

---

## Applications
Lion is widely applied in:
- **Deep Learning Models:** Enhancing training efficiency for neural networks.  
- **Computer Vision (CV):** Optimizing CNNs for classification and detection.  
- **Natural Language Processing (NLP):** Accelerating the training of RNNs, LSTMs, and Transformers.  
- **Research and Industry:** Used beyond ML, including physics simulations and engineering problems.  


## Code

```python
import torch
from torch.optim.optimizer import Optimizer

class Lion(Optimizer):
    r"""
    Implements Lion optimizer (EvoLved Sign Momentum).
    Reference: https://arxiv.org/abs/2302.06675

    Update rule:
        m_t = beta1 * m_{t-1} + (1 - beta1) * grad
        update = sign(beta2 * m_t + (1 - beta2) * grad)
        param = param - lr * update
    """

    def __init__(self, params, lr=1e-4, betas=(0.9, 0.99), weight_decay=0.0):
        if lr <= 0.0:
            raise ValueError(f"Invalid learning rate: {lr}")
        if not 0.0 <= betas[0] < 1.0:
            raise ValueError(f"Invalid beta1: {betas[0]}")
        if not 0.0 <= betas[1] < 1.0:
            raise ValueError(f"Invalid beta2: {betas[1]}")
        
        defaults = dict(lr=lr, betas=betas, weight_decay=weight_decay)
        super(Lion, self).__init__(params, defaults)

    @torch.no_grad()
    def step(self, closure=None):
        loss = None
        if closure is not None:
            with torch.enable_grad():
                loss = closure()

        for group in self.param_groups:
            lr = group["lr"]
            beta1, beta2 = group["betas"]
            wd = group["weight_decay"]

            for p in group["params"]:
                if p.grad is None:
                    continue
                grad = p.grad

                if grad.is_sparse:
                    raise RuntimeError("Lion does not support sparse gradients")

                # weight decay
                if wd != 0:
                    grad = grad.add(p, alpha=wd)

                # get state
                state = self.state[p]
                if len(state) == 0:
                    state["exp_avg"] = torch.zeros_like(p)

                exp_avg = state["exp_avg"]

                # momentum update
                exp_avg.mul_(beta1).add_(grad, alpha=1 - beta1)

                # sign update
                update = exp_avg.mul(beta2).add(grad, alpha=1 - beta2)
                p.add_(update.sign(), alpha=-lr)

        return loss
```
