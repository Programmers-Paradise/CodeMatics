# ELU Activation Function

The Exponential Linear Unit (ELU) is an activation function designed to improve the learning properties of deep neural networks by addressing some of the limitations of the Rectified Linear Unit (ReLU). Here's an introduction to the ELU function:

## What is ELU?
The Exponential Linear Unit (ELU) is an activation function introduced to mitigate some of the issues faced by other activation functions, such as ReLU. ELU aims to provide smoother transitions and improve gradient flow, particularly for negative input values.

Mathematical Definition
The ELU function is defined as:

$$
\text{ELU}(x) = \begin{cases} 
x & \text{if } x \geq 0 \\
\alpha (e^x - 1) & \text{if } x < 0 
\end{cases}
$$

## Challenge
Create a ELU function and plot its curve.
