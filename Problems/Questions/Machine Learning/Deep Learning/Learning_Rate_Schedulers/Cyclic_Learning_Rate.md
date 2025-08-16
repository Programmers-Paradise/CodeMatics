
---

# Cyclical Learning Rates (CLR)

Cyclical Learning Rates are a training technique where the learning rate varies cyclically between a minimum and maximum value instead of staying fixed or monotonically decreasing. This oscillation helps escape local minima, improves generalization, and often accelerates convergence compared to traditional schedules.

---

## Definition

The **Cyclical Learning Rate (CLR) policy** is defined as:

$$
\eta(t) = \begin{cases}
\eta_{\text{base}} + (\eta_{\max} - \eta_{\text{base}})\cdot \tfrac{t}{T}, & 0 \leq t < \tfrac{T}{2}, \\\\
\eta_{\text{base}} + (\eta_{\max} - \eta_{\text{base}})\cdot \left(1 - \tfrac{t}{T}\right), & \tfrac{T}{2} \leq t < T
\end{cases}
$$

where:

* \$\eta(t)\$ = learning rate at iteration \$t\$
* \$\eta\_{\text{base}}\$ = minimum learning rate (base LR)
* \$\eta\_{\max}\$ = maximum learning rate
* \$T\$ = period of one full cycle

This results in a **triangular wave pattern** of the learning rate, alternating between increasing and decreasing phases.

---

## Example

Suppose we train a neural network on MNIST using a two-cycle CLR schedule with:

* \$\eta\_{\text{base}} = 0.001\$
* \$\eta\_{\max} = 0.02\$
* Cycle length \$T = 10\$ epochs

Then:

* **Epochs 0–5**: learning rate increases linearly from 0.001 to 0.02
* **Epochs 5–10**: learning rate decreases back to 0.001

Repeating this cycle encourages faster convergence and better exploration of the loss surface.

*(Imagine a graph showing the triangular learning rate oscillation alongside a smoother, faster decline in training loss.)*

---

## Key Properties

1. **Faster Convergence** → oscillations accelerate training compared to a fixed LR.
2. **Escaping Local Minima** → periodic rises help avoid shallow minima and saddle points.
3. **Improved Generalization** → oscillatory behavior prevents overfitting by encouraging parameter diversity.
4. **Efficiency** → requires only two key hyperparameters (\$\eta\_{\text{base}}\$, \$\eta\_{\max}\$) and minimal tuning.

---

## Variants of CLR

Several CLR policies exist, including:

* **Triangular** → simple up-and-down linear cycle.
* **Triangular2** → same as triangular but reduces the amplitude by half each cycle.
* **Exp Range** → scales the learning rate boundaries exponentially over cycles.
* **One-Cycle Policy** → increases LR rapidly to a peak, then gradually decays for the remainder of training (often most effective in practice).

---

## Applications

Cyclical Learning Rates are widely adopted in:

* **Computer Vision** → boosting performance in image classification and segmentation.
* **Natural Language Processing** → stabilizing training in text generation and language models.
* **Reinforcement Learning** → enabling agents to explore parameter space efficiently.

---


