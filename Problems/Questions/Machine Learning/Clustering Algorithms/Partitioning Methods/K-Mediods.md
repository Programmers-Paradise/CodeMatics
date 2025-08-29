# K-Medoids (PAM) in Machine Learning

## Introduction
**K-Medoids** is a powerful and robust **unsupervised clustering** algorithm that partitions a dataset into a pre-specified number of clusters ($K$). It is a popular alternative to the more widely known K-Means algorithm. The key difference and primary advantage of K-Medoids is its choice of cluster centers. Instead of using a calculated mean (a centroid), it uses **medoids**—the most centrally located **actual data points** within each cluster. This makes the K-Medoids algorithm more robust to outliers and noise, and produces more interpretable cluster centers. The most famous implementation of this method is called **PAM (Partitioning Around Medoids)**.

## The K-Medoids Algorithm (PAM)
The goal of K-Medoids is to find a set of $K$ medoids that minimizes the sum of dissimilarities between each data point and its closest medoid. The cost function is:

$$\text{Cost} = \sum_{k=1}^{K} \sum_{\mathbf{x}_i \in C_k} d(\mathbf{x}_i, \mathbf{m}_k)$$

where $C_k$ is the $k$-th cluster, $\mathbf{m}_k$ is the medoid of that cluster, and $d$ is a chosen distance metric (e.g., Euclidean or Manhattan distance).

The classic PAM algorithm works in two phases:

**1. Phase 1: Initialization (BUILD)**
-   An initial set of $K$ medoids is chosen from the data points. This can be done randomly or using a more sophisticated greedy approach that iteratively selects points that contribute most to reducing the initial cost.

**2. Phase 2: Iteration (SWAP)**
The algorithm then iteratively refines the set of medoids until the total cost can no longer be reduced.
-   **Assignment Step**: Assign each data point to the cluster of its nearest medoid.
-   **Update Step**: For each cluster, consider swapping its medoid with every non-medoid point within that same cluster.
    -   Calculate the change in the total cost for each potential swap.
    -   If the best swap results in a decrease in the total cost, perform the swap, making the new point the medoid for that cluster.
-   **Repeat**: The assignment and update steps are repeated until no swap can reduce the overall cost, at which point the algorithm has converged.

## K-Medoids vs. K-Means: A Key Comparison
The choice between K-Medoids and K-Means depends on the dataset and the goals of the analysis.

| Feature | **K-Means** | **K-Medoids** |
|---|---|---|
| **Cluster Center** | **Centroid**: The mean of all points in the cluster. This may not be an actual data point. | **Medoid**: The most centrally located **actual data point** in the cluster. |
| **Sensitivity to Outliers**| **High**. The mean is easily skewed by extreme outliers, which can pull the centroid away from the natural center of a cluster. | **Low**. The medoid is robust to outliers because it must be one of the data points. |
| **Distance Metric** | Designed to minimize squared **Euclidean distance** (variance). Not suitable for arbitrary distance metrics. | **Flexible**. Can work with any dissimilarity measure, including Manhattan distance or Gower distance for mixed data types. |
| **Computational Cost** | Fast and computationally efficient. Scales well to large datasets. | **Slower** and does not scale well, due to the costly swap step. |
| **Interpretability** | Cluster centers can be abstract points (e.g., an "average customer" that doesn't exist). | Cluster centers are real, representative examples from the data (e.g., "this specific customer is the prototype for this segment"). |

## Strengths and Weaknesses
-   **Strengths**:
    -   **Robust to Outliers and Noise**: The primary advantage over K-Means.
    -   **Interpretability**: Provides actual data points as cluster exemplars.
    -   **Flexibility**: Works with any distance metric, making it suitable for complex data types.
-   **Weaknesses**:
    -   **High Computational Complexity**: The iterative swapping process is computationally expensive, making it unsuitable for very large datasets.
    -   **Scalability Issues**: Does not scale well as the number of data points and clusters increases.

## Scaling K-Medoids
To address the scalability limitations of the classic PAM algorithm, several variants have been developed:
-   **CLARA (Clustering Large Applications)**: Performs the PAM algorithm on multiple small samples of the data and chooses the best result.
-   **CLARANS (Clustering Large Applications based upon Randomized Search)**: Explores a randomized graph of potential swaps rather than checking every possible swap, making it more efficient than PAM while maintaining high quality.

## Applications
K-Medoids is a preferred choice in scenarios where robustness and interpretability are critical.
1.  **Customer Segmentation**: To identify representative customer profiles. The medoid of each cluster is an actual customer who can be studied as the archetype for that segment.
2.  **Bioinformatics**: Clustering gene expression data, which can be noisy. The robustness of K-Medoids helps in identifying meaningful biological clusters.
3.  **Image Analysis**: For image segmentation or finding representative images in a large collection, where the medoid is an actual image.
4.  **Geographical Data Analysis**: Clustering locations where the cluster center must be an actual location (e.g., a city or a distribution hub).