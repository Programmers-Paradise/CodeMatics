

# SGD + Momentum

## Introduction

Stochastic Gradient Descent (SGD) is a fundamental optimization algorithm used in machine learning to minimize the cost function of a model. While effective, vanilla SGD can be slow to converge, especially in complex landscapes with numerous local minima or noisy gradients. This is where SGD with Momentum comes into play. By incorporating past gradient information, momentum accelerates convergence by smoothing out the update steps, leading to faster and more stable training.

Momentum is particularly beneficial in scenarios involving large datasets or deep learning models where the optimization landscape can be highly non-convex. It helps in escaping shallow local minima and navigating through plateaus more efficiently.

## Definition

Stochastic Gradient Descent with Momentum (SGD + Momentum) is an enhanced version of the vanilla SGD algorithm that incorporates a "momentum" term to accelerate convergence by leveraging past gradients. The update rule for the weights $\theta$ at each iteration is given by:

$$
v_{t} = \gamma v_{t-1} + \eta \nabla_\theta J(\theta_{t-1})
$$

$$
\theta_{t} = \theta_{t-1} - v_{t}
$$

Where:
- $v_t$ is the velocity at time step $t$.
- $\gamma$ (gamma) is the momentum coefficient, typically set between 0.8 and 0.99.
- $\eta$ (eta) is the learning rate.
- $\nabla_\theta J(\theta_{t-1})$ is the gradient of the cost function with respect to the parameters at time step $t-1$.

This formulation introduces a "momentum" term that accumulates past gradients, effectively adding inertia to the optimization process.

## Example

Consider minimizing the quadratic function:

$$
f(w) = w^2 + \epsilon
$$

Where $\epsilon$ is Gaussian noise. We aim to find the minimum using SGD with Momentum.

**Step 1:** Initialize parameters:
- Initial weight $w_0 = 5$
- Learning rate $\eta = 0.1$
- Momentum coefficient $\gamma = 0.9$
- Momentum term $v_0 = 0$

**Step 2:** Compute the gradient at each step:

$$
\nabla f(w) = 2w + \epsilon
$$

Assuming $\epsilon \sim N(0, 1)$.

**Step 3:** Update using the momentum rule.

At iteration $t=1$:
- Compute gradient: $g_1 = 2*5 + \epsilon_1$
- Update velocity: $v_1 = 0.9*0 + 0.1*g_1$
- Update weight: $w_1 = 5 - v_1$

This process continues, with each step incorporating momentum to guide the update towards the minimum.

## Properties

- **Acceleration Along Gradient Direction**: The momentum term accumulates gradients in the direction of the minimum, accelerating convergence. This leads to faster movement along the gradient path.

- **Dampening Oscillations**: Momentum reduces oscillations by smoothing out noisy gradients.
This stability helps in navigating complex landscapes.

- **Parameter Tuning (Gamma)**:The momentum coefficient $\gamma$ balances between:
    - Smaller values: More responsive to recent gradients but slower convergence.
    - Larger values: Faster convergence but risk of overshooting the minimum.

- **Handling Local Minima**: Momentum helps escape shallow local minima by providing directional inertia, aiding in finding deeper optima:

## Applications

- **Machine Learning Models**: Commonly used in training deep neural networks for tasks like classification and regression.

- **Reinforcement Learning**: Optimizes policies by efficiently navigating the action space, especially with high-dimensional state spaces.

- **Robotics Control**: Real-time parameter tuning for control systems, ensuring stability and responsiveness.

- **Physics Simulations**: Optimizes parameters in simulations with noisy data or complex dynamics.

- **Time Series Analysis**: Tunes forecasting models, improving predictions through efficient optimization.

## Conclusion

SGD + Momentum is a powerful optimization technique that enhances vanilla SGD by incorporating momentum, leading to faster convergence and better performance in various applications. By carefully tuning the momentum coefficient, it effectively navigates the optimization landscape, making it indispensable in modern machine learning and beyond.