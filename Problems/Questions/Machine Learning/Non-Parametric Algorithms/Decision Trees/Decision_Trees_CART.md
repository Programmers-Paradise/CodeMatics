# Decision Trees (CART) in Machine Learning

## Introduction
Decision trees are a fundamental supervised learning method used for both classification and regression. The **CART (Classification and Regression Tree)** algorithm is one of the most popular implementations. It builds a model by creating a binary tree structure, where decisions are made based on feature values. The primary strengths of CART are its high **interpretability**, which allows users to understand the decision-making process, and its versatility in handling different data types.

### Why CART is Important
-   **Interpretability**: CART models produce a clear set of "if-then" rules that are easy to visualize and explain, enhancing trust and understanding.
-   **Versatility**: It is a powerful algorithm for both classification (predicting a category) and regression (predicting a continuous value).
-   **No Feature Scaling**: The algorithm does not require feature normalization or scaling.

## The CART Algorithm
The CART algorithm builds a decision tree through a process called **recursive binary partitioning**. It repeatedly splits the data into two subsets, aiming to make the resulting groups as "pure" or homogeneous as possible with respect to the target variable.

### The Splitting Criterion (Cost Function)
At each node, CART searches for the feature and the split threshold that will produce the greatest "purity" in the child nodes. The cost function used depends on the task:

1.  **For Classification Trees**: CART uses the **Gini Impurity** to measure the impurity of a node. A Gini score of 0 represents perfect purity (all samples in the node belong to one class).

$$Gini = 1 - \sum_{i=1}^{k} p_i^2$$

   where $p_i$ is the proportion of samples belonging to class $i$ at the node. The algorithm selects the split that results in the largest **Gini Reduction**.

3.  **For Regression Trees**: CART uses a cost function that measures the variance of the target variable within a node. The goal is to minimize the **Mean Squared Error (MSE)**. The algorithm selects the split that results in the largest reduction in MSE.

## Example: Classification Tree
**Problem**: Classify if a customer will buy a product based on age and income.

**Dataset**:
| Age | Income | Buy? |
|---|---|---|
| 25 | $40k | No |
| 35 | $60k | Yes |
| 28 | $70k | Yes |

### Tree Construction using Gini Impurity

**1. Root Node Impurity**:
-   Our dataset has 3 samples: 1 "No" and 2 "Yes".
-   $p_{No} = 1/3$, $p_{Yes} = 2/3$.
-   **Gini(Root)** = $1 - \left( (1/3)^2 + (2/3)^2 \right) = 1 - (1/9 + 4/9) = 1 - 5/9 = \mathbf{0.444}$

**2. Evaluate Potential Splits**:
-   **Split on Income > $50k$**:
    -   Left Child (Income ≤ $50k$): {1 "No"}. This node is pure. **Gini(Left) = 0**.
    -   Right Child (Income > $50k$): {2 "Yes"}. This node is pure. **Gini(Right) = 0**.
    -   Weighted Gini of split = $(1/3) \cdot Gini(Left) + (2/3) \cdot Gini(Right) = (1/3) \cdot 0 + (2/3) \cdot 0 = 0$.
    -   **Gini Reduction (Income)** = Gini(Root) - Weighted Gini = $0.444 - 0 = \mathbf{0.444}$.

-   **Split on Age > 30**:
    -   Left Child (Age ≤ 30): {1 "No", 1 "Yes"}. **Gini(Left)** = $1 - ((1/2)^2 + (1/2)^2) = 0.5$.
    -   Right Child (Age > 30): {1 "Yes"}. This node is pure. **Gini(Right) = 0**.
    -   Weighted Gini of split = $(2/3) \cdot Gini(Left) + (1/3) \cdot Gini(Right) = (2/3) \cdot 0.5 + (1/3) \cdot 0 = 0.333$.
    -   **Gini Reduction (Age)** = Gini(Root) - Weighted Gini = $0.444 - 0.333 = \mathbf{0.111}$.

**3. Choose Best Split**:
The split on **Income** provides a greater Gini Reduction (0.444 > 0.111). Therefore, the algorithm chooses this as the first split. Since both child nodes are pure, the tree is complete.

### Final Tree and Predictions
-   **Root**: Is Income > $50k$?
    -   **Branch (No)** -> **Leaf**: Predict "No"
    -   **Branch (Yes)** -> **Leaf**: Predict "Yes"

## Key Features and Properties
1.  **Feature Importance**: CART can calculate the importance of each feature by summing the Gini reduction (for classification) or MSE reduction (for regression) that the feature provides across all splits in the tree.
2.  **Handling Data Types**: The algorithm naturally handles both numerical features (by finding an optimal split point) and categorical features.
3.  **Overfitting and Pruning**: Single decision trees are highly prone to overfitting (learning the noise in the training data). This is controlled by:
    -   **Pre-pruning**: Setting stopping conditions during training, such as a maximum tree depth or minimum number of samples per leaf.
    -   **Post-pruning (Cost-Complexity Pruning)**: Growing a full tree and then removing branches that provide the least additional predictive power.

## Applications
1.  **Customer Segmentation**: Identifying distinct customer groups for targeted marketing campaigns based on demographics and behavior.
2.  **Fraud Detection**: Creating rules to flag suspicious financial transactions based on their characteristics.
3.  **Healthcare**: Building simple, interpretable diagnostic models to assist doctors in making decisions based on patient symptoms and test results.
4.  **As a Building Block**: CART trees are the foundational component for highly advanced and powerful **ensemble models** like Random Forests and Gradient Boosting Machines (e.g., XGBoost).