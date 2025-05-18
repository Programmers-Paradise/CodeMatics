# Bent Identity Activation Function
The Bent Identity is a smooth, non-linear activation function that blends the properties of identity (linear) and non-linear transformations. It allows models to learn complex patterns while keeping outputs close to the input when necessary. It is differentiable everywhere and used when slight non-linearity is desired without drastically changing the magnitude of inputs.

## What is Bent Identity?
The Bent Identity function behaves like the identity function for large inputs but adds a smooth, non-linear bend near the origin. This makes it useful for tasks where you want slightly non-linear behavior with a stable gradient flow, particularly in models that are sensitive to activation ranges.

It combines the advantages of linear activation with a gentle non-linear component that improves learning dynamics, especially in regression or low-variance feature extraction tasks.

## Mathematical Representation of the Bent Identity Function
The Bent Identity function is defined as:

$$\text{BentIdentity}(x) = \frac{\sqrt{x^2 + 1} - 1}{2} + x
$$

This can also be interpreted as a non-linear correction added to the identity function:

- When $x→0$, the non-linear term dominates

- When $∣x∣≫1, BentIdentity(x)≈x$

### Derivative:
The derivative is smooth and always positive, which helps with gradient-based optimization:


$$\frac{d}{dx} \text{BentIdentity}(x) = \frac{x}{2\sqrt{x^2 + 1}} + 1
$$

- The derivative is always greater than 0.5 and less than 1.5

- Gradient vanishing is very unlikely

## Key Applications:
**Low-variance regression models:**
Useful when identity-like behavior is preferred with some flexibility for non-linear learning.

**Shallow networks:**
Bent Identity can work well in networks with fewer layers where extreme non-linearity (like ReLU) isn’t needed.

**Autoencoders / Dimensionality Reduction:**
Gentle non-linearity helps in compression and reconstruction without adding drastic non-linear distortion.

**Neuro-symbolic tasks / structured data:**
In hybrid models combining symbolic logic and learning, smooth transformations like Bent Identity are beneficial.

## Why Use Bent Identity?
**Smooth & Differentiable:**
 No sharp transitions; good for gradient descent.

**Retains Linear Properties:**
 Does not distort inputs excessively.

**Stable Gradients:**
 Avoids both vanishing and exploding gradients.

**Balanced Output:**
 Good choice for models needing mild non-linearity.

## Challenge
Implement the Bent Identity function and compare its output and derivative to the identity and tanh functions. Visualize how it bends near the origin while aligning with the identity line for large inputs.

