# GeLU Activation Function

The **GeLU (Gaussian Error Linear Unit)** function is another widely used activation function in deep learning, especially in modern architectures like **BERT** and **Transformers**. It is known for its smooth, non-linear behavior and often provides better performance than ReLU in certain tasks.

## What is GeLU?

GeLU stands for **Gaussian Error Linear Unit**. Unlike ReLU, which simply zeroes out negative inputs, GeLU smoothly weights inputs based on their value using the Gaussian cumulative distribution. This allows it to retain small negative values with reduced amplitude rather than discarding them entirely.

## Mathematical Representations of Activation Functions


The GeLU function is commonly expressed as:

$$
\text{GeLU}(x) = x \cdot \Phi(x)
$$

Where \( \Phi(x) \) is the standard Gaussian cumulative distribution function (CDF):

$$
\Phi(x) = \frac{1}{2} \left[ 1 + \text{erf} \left( \frac{x}{\sqrt{2}} \right) \right]
$$

An approximate and widely used version is:

$$
\text{GeLU}(x) \approx 0.5x \left[ 1 + \tanh \left( \sqrt{\frac{2}{\pi}}(x + 0.044715x^3) \right) \right]
$$

## Key Applications:
**Natural Language Processing (NLP):**
- Default activation in BERT, GPT, Transformer, and RoBERTa architectures.

**Transformer-based Vision Models:**
- Used in Vision Transformers (ViT) and Swin Transformers.

**Speech Recognition & Audio:**
- Appears in wav2vec 2.0, Whisper, and other audio-transformers.

## Why Use GeLU?

- Probabilistic and smooth — ideal for attention-based architectures.

- Allows for fine-grained gating of neurons, enhancing expressiveness.



## Challenge
Create a GeLU function using the approximation formula and plot its curve.