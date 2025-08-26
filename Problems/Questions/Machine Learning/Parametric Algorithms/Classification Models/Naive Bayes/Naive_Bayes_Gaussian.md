# Naive Bayes (Gaussian) in Machine Learning

## Introduction
Gaussian Naive Bayes (GNB) is a variant of the Naive Bayes classification algorithm used for **continuous data**. It is a probabilistic classifier based on Bayes' theorem and shares the core "naive" assumption of conditional independence between features. While the Naive Bayes family is famous for text classification (using other variants like Multinomial Naive Bayes), the Gaussian variant is specifically designed for features that can be modeled by a normal (Gaussian) distribution, such as physical measurements or sensor readings.

## The Gaussian Naive Bayes Model
The GNB classifier works by assuming that the data for each feature within a given class follows a Gaussian distribution. The core steps are:

1.  **Model Training**: During the training phase, the algorithm estimates the parameters of the Gaussian distribution for each feature $i$ within each class $k$:
    -   The mean ($\mu_{ki}$)
    -   The variance ($\sigma_{ki}^2$)
    
    It also calculates the prior probability of each class, $P(C_k)$, from the frequency of classes in the training data.

2.  **Likelihood Calculation**: When making a prediction on a new data point with features $X = (x_1, \dots, x_n)$, the algorithm calculates the likelihood of observing each feature $x_i$ given a class $C_k$ using the Gaussian Probability Density Function (PDF):

$$P(x_i|C_k) = \frac{1}{\sqrt{2\pi\sigma_{ki}^2}} e^{-\frac{(x_i - \mu_{ki})^2}{2\sigma_{ki}^2}}$$

3.  **Prediction (MAP Rule)**: Due to the naive independence assumption, the total likelihood for a class is the product of the individual feature likelihoods. The final prediction is the class that maximizes the posterior probability, which is proportional to the prior multiplied by the total likelihood:

$$\text{Prediction} = \arg\max_{C_k} \left( P(C_k) \prod_{i=1}^{n} P(x_i|C_k) \right)$$

## Example
Consider a classifier to detect spam emails based on two continuous features: word count ($x_1$) and number of exclamation marks ($x_2$).
From our training data, we have estimated the following parameters:
-   **For Spam ($C_1$)**:
    -   Word Count ($x_1$): $\mu_{11}=100, \sigma_{11}^2=225$
    -   Exclamation Marks ($x_2$): $\mu_{12}=5, \sigma_{12}^2=4$
-   **For Not Spam ($C_0$)**:
    -   Word Count ($x_1$): $\mu_{01}=50, \sigma_{01}^2=100$
    -   Exclamation Marks ($x_2$): $\mu_{02}=1, \sigma_{02}^2=1$

Assume equal prior probabilities: $P(C_1) = P(C_0) = 0.5$.
A new email arrives with **word count = 80** and **exclamation marks = 6**.

**Step 1: Calculate Likelihoods for the Spam Class ($C_1$)**
-   $P(x_1=80|C_1) = \frac{1}{\sqrt{2\pi \cdot 225}} e^{-\frac{(80 - 100)^2}{2 \cdot 225}} = \frac{1}{15\sqrt{2\pi}} e^{-400/450} \approx 0.0266 \times 0.4111 \approx 0.0109$
-   $P(x_2=6|C_1) = \frac{1}{\sqrt{2\pi \cdot 4}} e^{-\frac{(6 - 5)^2}{2 \cdot 4}} = \frac{1}{2\sqrt{2\pi}} e^{-1/8} \approx 0.1995 \times 0.8825 \approx 0.1760$

**Step 2: Calculate Likelihoods for the Not Spam Class ($C_0$)**
-   $P(x_1=80|C_0) = \frac{1}{\sqrt{2\pi \cdot 100}} e^{-\frac{(80 - 50)^2}{2 \cdot 100}} = \frac{1}{10\sqrt{2\pi}} e^{-900/200} \approx 0.0399 \times 0.0111 \approx 0.00044$
-   $P(x_2=6|C_0) = \frac{1}{\sqrt{2\pi \cdot 1}} e^{-\frac{(6 - 1)^2}{2 \cdot 1}} = \frac{1}{\sqrt{2\pi}} e^{-25/2} \approx 0.3989 \times 0.0000037 \approx 1.48 \times 10^{-6}$

**Step 3: Calculate Proportional Posteriors and Classify**
-   **Score(Spam)**: $P(C_1) \times P(x_1=80|C_1) \times P(x_2=6|C_1) = 0.5 \times 0.0109 \times 0.1760 \approx \mathbf{0.00096}$
-   **Score(Not Spam)**: $P(C_0) \times P(x_1=80|C_0) \times P(x_2=6|C_0) = 0.5 \times 0.00044 \times (1.48 \times 10^{-6}) \approx \mathbf{3.2 \times 10^{-10}}$

Since the score for Spam is vastly higher, the email is classified as **Spam**.

## Properties and Limitations
-   **Probabilistic Nature**: Provides a clear probabilistic framework for classification.
-   **Efficiency**: Training is very fast as it only requires computing the mean and variance for each feature per class. Predictions are also extremely fast.
-   **Suitability for Continuous Data**: It is the go-to Naive Bayes variant for real-valued features.
-   **Strong Assumption**: Its performance is dependent on the features being approximately Gaussian and conditionally independent. If these assumptions are strongly violated, the model's accuracy may suffer.

## Applications
Gaussian Naive Bayes is effective in various domains where features are continuous measurements:
-   **Medical Diagnosis**: Classifying patients into diagnostic groups (e.g., 'healthy', 'at-risk') based on continuous data like blood pressure, cholesterol levels, and BMI.
-   **Biometrics**: Identifying individuals or classifying species based on continuous physical measurements (e.g., classifying iris flowers based on petal and sepal length/width).
-   **Financial Modeling**: Predicting whether a loan will default based on continuous financial metrics like income, debt-to-income ratio, and credit score.
-   **Process Control**: Classifying the state of an industrial process (e.g., 'normal', 'faulty') based on sensor readings like temperature and pressure.