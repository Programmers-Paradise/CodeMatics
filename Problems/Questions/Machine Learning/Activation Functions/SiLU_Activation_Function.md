# SiLU Activation Function

The SiLU (Sigmoid Linear Unit), also known as the Swish function, is an activation function that has been found effective in deep learning architectures. It combines properties of both linear and non-linear activations.

## What is SiLU?
SiLU stands for Sigmoid Linear Unit. It is a smooth, non-monotonic function that outputs the input scaled by its sigmoid. It retains small negative values and introduces non-linearity while maintaining differentiability.

## Mathematical Representation

### SiLU (Sigmoid Linear Unit)

The SiLU function is defined as:

$$
\text{SiLU}(x) = x \cdot \sigma(x)
$$

Where the sigmoid function $\sigma(x)$ is:

$$
\sigma(x) = \frac{1}{1 + e^{-x}}
$$

### Key Applications:
**Computer Vision:**

- Used in EfficientNet (by Google) to improve accuracy while keeping models lightweight.

- Helps in object detection tasks (e.g., YOLOv5).

**Tabular Data Models:**
- Found in TabNet and some LightGBM-enhanced neural hybrid models.

**Mobile & Edge Devices:**
- Its smooth and bounded nature improves training stability and inference performance in resource-constrained environments.

## Why Use SiLU?
Smooth and non-monotonic (better gradient flow).

Empirically shown to outperform ReLU in deep models.
## Challenge
Create a SiLU function and plot its curve.
