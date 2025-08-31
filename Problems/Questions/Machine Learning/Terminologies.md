

### I. Fundamental Concepts

* **Model**: The output of a machine learning algorithm run on data. It's a system (e.g., a set of weights and biases in a neural network) that makes predictions on new, unseen data.
* **Algorithm**: The process or set of rules used to learn patterns from data and create a model. Examples include Linear Regression, Decision Trees, etc.
* **Feature**: An individual measurable property or characteristic of a phenomenon being observed. Also known as an input variable or attribute (e.g., the square footage of a house).
* **Label (or Target)**: The value or category you are trying to predict. This is the "answer" in the training data (e.g., the price of the house).
* **Instance (or Sample)**: A single data point or row in a dataset, consisting of features and potentially a label.
* **Dataset**: A collection of instances.
* **Inference (or Prediction)**: The process of using a trained model to make a prediction on new data for which the label is unknown.

### II. Types of Machine Learning

* **Supervised Learning**: Training a model on a labeled dataset (data with known answers). The goal is to learn a mapping function from inputs to outputs.
    * **Classification**: A supervised task where the output label is a category (e.g., "spam" or "not spam", "cat" or "dog").
    * **Regression**: A supervised task where the output label is a continuous, numerical value (e.g., predicting a stock price or house value).
* **Unsupervised Learning**: Training a model on an unlabeled dataset to find hidden patterns or intrinsic structures.
    * **Clustering**: An unsupervised task of grouping similar data points together (e.g., customer segmentation).
    * **Dimensionality Reduction**: An unsupervised task of reducing the number of features while preserving important information (e.g., PCA).
* **Reinforcement Learning**: Training an "agent" to make a sequence of decisions in an "environment" to maximize a cumulative "reward". Common in robotics and game playing.
* **Semi-Supervised Learning**: Training on a dataset that contains a mix of labeled and unlabeled data.
* **Self-Supervised Learning**: A type of unsupervised learning where labels are automatically generated from the input data itself. It's the core idea behind large language models like GPT.

### III. Model Training & Evaluation

* **Training Set**: The subset of the dataset used to train the model.
* **Validation Set**: The subset of the dataset used to tune the model's hyperparameters and make decisions about the model's architecture.
* **Test Set**: A completely unseen subset of the dataset used to evaluate the final performance of the trained model.
* **Loss Function (or Cost Function)**: A function that measures the difference between the model's predictions and the actual labels. The goal of training is to minimize this function.
* **Gradient Descent**: An optimization algorithm used to find the minimum of the loss function by iteratively taking steps in the opposite direction of the gradient.
* **Learning Rate**: A hyperparameter that controls how large of a step the gradient descent algorithm takes during each iteration.
* **Epoch**: One complete pass of the training algorithm over the entire training dataset.
* **Batch Size**: The number of training examples utilized in one iteration of gradient descent.
* **Backpropagation**: The algorithm used to efficiently calculate the gradients in a neural network, which are then used to update the model's weights during training.
* **Evaluation Metrics**: Quantitative measures of a model's performance.
    * **For Classification**: **Accuracy**, **Precision**, **Recall**, **F1-Score**, **AUC (Area Under the Curve)**.
    * **For Regression**: **MSE (Mean Squared Error)**, **RMSE (Root Mean Squared Error)**, **MAE (Mean Absolute Error)**.

### IV. Model Tuning & Regularization

* **Overfitting**: When a model learns the training data too well, including the noise and random fluctuations. It performs excellently on the training set but poorly on the test set.
* **Underfitting**: When a model is too simple to capture the underlying patterns in the data. It performs poorly on both the training and test sets.
* **Bias-Variance Tradeoff**: A fundamental concept in ML.
    * **Bias**: The error from incorrect assumptions in the learning algorithm. High bias can cause underfitting.
    * **Variance**: The error from sensitivity to small fluctuations in the training set. High variance can cause overfitting.
* **Hyperparameter**: A configuration of the model that is set before the training process begins (e.g., learning rate, number of layers in a neural network).
* **Regularization**: A set of techniques used to prevent overfitting by adding a penalty to the loss function for model complexity.
    * **L1 Regularization (Lasso)**: Adds a penalty equal to the absolute value of the magnitude of coefficients. Can result in sparse models (some weights become zero).
    * **L2 Regularization (Ridge)**: Adds a penalty equal to the square of the magnitude of coefficients. Tends to make weights smaller.
* **Cross-Validation**: A resampling technique used to evaluate a model's performance on a limited data sample by partitioning the data into "folds" and training/testing on different combinations.

### V. Data & Feature Concepts

* **Feature Engineering**: The process of creating new features from existing ones to improve model performance.
* **Normalization**: Scaling numerical features to a range of [0, 1].
* **Standardization**: Scaling numerical features to have a mean of 0 and a standard deviation of 1.
* **One-Hot Encoding**: A process to convert categorical variables into a numerical format, where each category becomes a new binary feature.
* **Imputation**: The process of substituting missing values in a dataset with estimated or calculated values.
* **Principal Component Analysis (PCA)**: A popular technique for dimensionality reduction.

### VI. Common Algorithms & Architectures

* **Linear Regression**: A linear model for regression tasks.
* **Logistic Regression**: A linear model used for binary classification, despite its name.
* **Decision Tree**: A tree-like model that makes decisions based on a series of feature-based questions.
* **Random Forest**: An ensemble model that builds multiple decision trees and merges their predictions to get a more accurate and stable result.
* **Gradient Boosting Machines (GBM)**: An ensemble technique that builds models sequentially, where each new model corrects the errors of the previous one. (e.g., XGBoost, LightGBM).
* **Support Vector Machine (SVM)**: A classifier that finds the optimal hyperplane that separates data points of different classes.
* **K-Means Clustering**: An algorithm for partitioning data into K distinct, non-overlapping clusters.
* **Neural Network**: A model inspired by the human brain, composed of interconnected layers of "neurons" (nodes).
* **Convolutional Neural Network (CNN)**: A specialized type of neural network designed for processing grid-like data, such as images.
* **Recurrent Neural Network (RNN)**: A type of neural network designed for sequential data, such as text or time series.
* **Transformer**: A modern neural network architecture that relies on a "self-attention" mechanism, which has become the state-of-the-art for most NLP tasks.