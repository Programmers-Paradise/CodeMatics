
# Group Normalization

Group normalization is a technique in deep learning that normalizes activations within each group of channels rather than across all channels. This method was introduced to address the limitations of batch normalization, which can be sensitive to batch size and may not perform well with small batches or when the data distribution varies significantly.

## Definition

Group normalization operates by grouping the input features into a set of groups and normalizing the activations within each group independently. The formula for group normalization is given by:

$$
y = \frac{x - \mu_g}{\sqrt{\sigma_g^2 + \epsilon}} \times \gamma + \beta
$$

where:
- $x$ is the input tensor of shape $(N, C, H, W)$, where $N$ is the batch size, $C$ is the number of channels, $H$ and $W$ are the height and width of the feature map.
- $y$ is the output tensor after normalization.
- $\mu_g$ and $\sigma_g^2$ are the mean and variance computed within each group.
- $\gamma$ and $\beta$ are learnable parameters for scaling and shifting, respectively.
- $\epsilon$ is a small constant to prevent division by zero.

The input tensor $x$ is divided into $G$ groups, where $G \leq C$. Each group contains $\frac{C}{G}$ channels. The normalization is then applied independently within each group:

$$
y_{g,i,j,k} = \frac{x_{g,i,j,k} - \mu_{g}^{(i)}}{\sqrt{(\sigma_{g}^{(i)})^2 + \epsilon}} \times \gamma^{(i)} + \beta^{(i)}

$$

where:
- $y_{g,i,j,k}$ is the output for the $g$-th group, $i$-th channel within that group, and pixel at position $(j, k)$.
- $\mu_g^{(i)}$ and $(\sigma_{g}^{(i)})^2$ are the mean and variance computed for the $i$-th channel in the $g$-th group.
- $\gamma^{(i)}$ and $\beta^{(i)}$ are learnable parameters specific to the $i$-th channel in the $g$-th group.

## Example

Consider an input tensor $x$ of shape $(1, 8, 4, 4)$, where $G = 2$. The tensor is divided into two groups, each containing 4 channels. Let's compute the normalization for one channel in each group.

### Step 1: Divide the Tensor into Groups

$$
x_1 = 
\begin{bmatrix}
1 & 2 & 3 & 4 \\
5 & 6 & 7 & 8 \\
9 & 10 & 11 & 12 \\
13 & 14 & 15 & 16 \\
\end{bmatrix}, \quad
x_2 = 
\begin{bmatrix}
17 & 18 & 19 & 20 \\
21 & 22 & 23 & 24 \\
25 & 26 & 27 & 28 \\
29 & 30 & 31 & 32 \\
\end{bmatrix}
$$

### Step 2: Compute Mean and Variance for Each Group
For $x_1$:

$$
\mu_{x_1} = \frac{1+2+3+4 + 5+6+7+8 + 9+10+11+12 + 13+14+15+16}{16} = 9
$$

$$
\sigma_{x_1}^2 = \frac{(1-9)^2 + (2-9)^2 + \cdots + (16-9)^2}{16} = 30.25
$$

For \( x_2 \):
$$
\mu_{x_2} = \frac{17+18+19+20 + 21+22+23+24 + 25+26+27+28 + 29+30+31+32}{16} = 25
$$

$$
\sigma_{x_2}^2 = \frac{(17-25)^2 + (18-25)^2 + \cdots + (32-25)^2}{16} = 30.25
$$

### Step 3: Normalize Each Group
For $x_1$:

$$
y_{x_1} = 
\begin{bmatrix}
\frac{1-9}{\sqrt{30.25}} & \frac{2-9}{\sqrt{30.25}} & \frac{3-9}{\sqrt{30.25}} & \frac{4-9}{\sqrt{30.25}} \\
\frac{5-9}{\sqrt{30.25}} & \frac{6-9}{\sqrt{30.25}} & \frac{7-9}{\sqrt{30.25}} & \frac{8-9}{\sqrt{30.25}} \\
\frac{9-9}{\sqrt{30.25}} & \frac{10-9}{\sqrt{30.25}} & \frac{11-9}{\sqrt{30.25}} & \frac{12-9}{\sqrt{30.25}} \\
\frac{13-9}{\sqrt{30.25}} & \frac{14-9}{\sqrt{30.25}} & \frac{15-9}{\sqrt{30.25}} & \frac{16-9}{\sqrt{30.25}} \\
\end{bmatrix}
=
\begin{bmatrix}
-2.449 & -1.732 & -1.118 & -0.500 \\
-0.883 & -0.266 & 0.266 & 0.883 \\
1.118 & 1.732 & 2.449 & 3.062 \\
3.686 & 4.270 & 4.854 & 5.438 \\
\end{bmatrix}
$$

For $x_2$:

$$
y_{x_2} = 
\begin{bmatrix}
\frac{17-25}{\sqrt{30.25}} & \frac{18-25}{\sqrt{30.25}} & \frac{19-25}{\sqrt{30.25}} & \frac{20-25}{\sqrt{30.25}} \\
\frac{21-25}{\sqrt{30.25}} & \frac{22-25}{\sqrt{30.25}} & \frac{23-25}{\sqrt{30.25}} & \frac{24-25}{\sqrt{30.25}} \\
\frac{25-25}{\sqrt{30.25}} & \frac{26-25}{\sqrt{30.25}} & \frac{27-25}{\sqrt{30.25}} & \frac{28-25}{\sqrt{30.25}} \\
\frac{29-25}{\sqrt{30.25}} & \frac{30-25}{\sqrt{30.25}} & \frac{31-25}{\sqrt{30.25}} & \frac{32-25}{\sqrt{30.25}} \\
\end{bmatrix}
=
\begin{bmatrix}
-2.449 & -1.732 & -1.118 & -0.500 \\
-0.883 & -0.266 & 0.266 & 0.883 \\
1.118 & 1.732 & 2.449 & 3.062 \\
3.686 & 4.270 & 4.854 & 5.438 \\
\end{bmatrix}
$$

### Step 4: Apply Learnable Parameters
For $y_1$ and $y_2$:

$$
y_1 = y_{x_1}, \quad y_2 = y_{x_2}
$$

## Properties

- **Batch Independence**: Group normalization is less sensitive to batch size compared to batch normalization, making it more robust for small batches.
- **Channel-wise Normalization**: It normalizes activations within each channel group independently, which can help in preserving the spatial information better than layer normalization.
- **Learnable Parameters**: The learnable parameters $\gamma$ and $\beta$ allow for fine-tuning of the normalized features.

## Applications

Group normalization has been successfully applied in various domains of machine learning, including:
- Convolutional Neural Networks (CNNs): It helps in stabilizing training by providing a more stable distribution of activations.
- Recurrent Neural Networks (RNNs): It can be used to normalize hidden states within each group, improving the stability and performance of RNNs.

Group normalization is particularly useful in scenarios where batch size is limited or when the data distribution varies significantly across different batches.
```