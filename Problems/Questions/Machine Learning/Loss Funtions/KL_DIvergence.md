## Kullback-Leibler Divergence (KL Divergence)  

Kullback-Leibler Divergence is a measure of the difference between two probability distributions, often used in **information theory** and **generative models like GANs**. It quantifies how much information is lost when approximating one distribution with another.

---

### KL Divergence Formula  

For discrete probability distributions $p $ (true) and $q$ (predicted), the Kullback-Leibler Divergence $D_{\text{KL}}(p \parallel q)$ is:  

$$
D_{\text{KL}}(p \parallel q) = \sum_{i=1}^{n} p_i \log\left(\frac{p_i}{q_i}\right)
$$

Where:  
- $p_i$ is the probability of the $i$-th event in the true distribution.  
- $q_i$ is the probability of the $i$-th event in the predicted distribution.  

---

### Explanation  

- **Asymmetry**: KL Divergence is not symmetric; $D_{\text{KL}}(p \parallel q) \neq D_{\text{KL}}(q \parallel p)$.  
- **Penalizing Mismatches**: It heavily penalizes regions where the true distribution has high probability but the predicted one does not.  

---

### Example  

True distribution $p = [0.5, 0.3, 0.2]$, Predicted distribution $q = [0.4, 0.4, 0.2]$.  

1. Compute individual terms:  
   - First term: $0.5 \cdot \log\left(\frac{0.5}{0.4}\right) \approx 0.5 \cdot 0.223 = 0.1115 $ 
   - Second term: $0.3 \cdot \log\left(\frac{0.3}{0.4}\right) \approx 0.3 \cdot (-0.2877) = -0.0863 $ 
   - Third term: $0.2 \cdot \log\left(\frac{0.2}{0.2}\right) = 0.2 \cdot \log(1) = 0 $ 

2. Compute total KL Divergence:  
$$
D_{\text{KL}} = 0.1115 - 0.0863 + 0 = 0.0252
$$