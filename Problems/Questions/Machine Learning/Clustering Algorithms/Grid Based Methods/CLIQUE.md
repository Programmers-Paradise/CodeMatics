
# CLIQUE (Clustering in Quest)

## Introduction
**CLIQUE (Clustering In Quest)** is a pioneering **grid-based, density-based, subspace clustering** algorithm. It is designed to overcome the challenges of clustering in high-dimensional data, a problem known as the "curse of dimensionality." While traditional algorithms often fail in high-dimensional spaces because data becomes too sparse, CLIQUE's key innovation is its ability to automatically identify clusters within lower-dimensional **subspaces** of the data. This makes it a valuable tool for exploratory data analysis, pattern recognition, and other data mining tasks where relevant patterns may only exist across a subset of features.

## The Core Idea: Subspace Clustering
The central insight behind CLIQUE is that dense clusters may exist in lower-dimensional projections of the data, even if they are not visible in the full, high-dimensional space.
-   **Example**: In a 10-dimensional dataset about customers, a dense cluster might exist in the 2D subspace of `(Age, Income)`, but this cluster would be invisible and sparse in the full 10D space if the other 8 dimensions are just noise.
CLIQUE's goal is to automatically find these significant subspace clusters.

## The CLIQUE Algorithm
CLIQUE uses a bottom-up approach that leverages the principles of the Apriori algorithm to efficiently find dense regions.

**Step 1: Partition the Data Space (Grid Creation)**
-   For each of the $d$ dimensions in the dataset, the data range is partitioned into $\xi$ equal-sized intervals. The user specifies the number of intervals, $\xi$.
-   This partitioning imposes a $d$-dimensional grid structure on the data space. Each hyper-rectangular cell in this grid is called a **unit**.

**Step 2: Find Dense Units (The Apriori Approach)**
-   A unit is defined as **dense** if the number of data points it contains exceeds a user-defined density threshold, $\tau$.
-   CLIQUE finds all dense units by iterating through the dimensions, using a key property known as the **monotonicity of density** (or the Apriori principle for CLIQUE):
    **If a k-dimensional unit is dense, then all of its (k-1)-dimensional projections must also be dense.**
-   The search proceeds level-by-level:
    1.  **1D Subspaces**: The algorithm first scans the database to find all dense 1-dimensional units (intervals).
    2.  **2D Subspaces**: It then "self-joins" the dense 1D units to generate a set of *candidate* dense 2D units. Thanks to the Apriori principle, it only needs to consider 2D units whose 1D projections were already found to be dense. It then scans the database to find which of these candidates are truly dense.
    3.  **Higher Dimensions**: This process is repeated to find dense 3D units from the dense 2D ones, and so on, until no more dense units can be found.

**Step 3: Generate Clusters**
-   Once all dense units in all subspaces have been identified, the algorithm defines a **cluster** as a **maximal set of connected dense units** within the same subspace.
-   The algorithm uses a graph-based search (like BFS or DFS) to find all the connected components of dense units, where two units are connected if they share a face. Each connected component is a cluster.

## Conceptual Example: Customer Segmentation
**Scenario**: We have a 3D dataset of customers with features `Age`, `Income`, and `Number of Visits`.
**Goal**: Find clusters using CLIQUE.

1.  **Partitioning**: The algorithm divides `Age` into 4 intervals (e.g., 20-30, 31-40, ...), `Income` into 5 intervals, and `Number of Visits` into 3 intervals. This creates a 3D grid.
2.  **Finding Dense Units**:
    -   It first scans to find dense 1D intervals. It might find that the `Age` interval "20-30" is dense, and the `Income` interval "$80k-$100k" is dense. The `Number of Visits` dimension might have no dense intervals.
    -   It then generates a candidate 2D unit: the rectangle representing customers with `Age` between 20-30 AND `Income` between $80k-$100k.
    -   It scans the database and finds that this 2D unit is indeed dense.
3.  **Forming the Cluster**: The algorithm would then find all adjacent dense rectangles in the `(Age, Income)` 2D subspace to form the complete cluster. The final result would be a cluster described as, for example, "a group of customers aged 20-40 with an income of $80k-$120k," while the `Number of Visits` dimension is ignored for this specific cluster as it was not relevant.

## Strengths and Weaknesses

| Strengths | Weaknesses |
|---|---|
| **Finds Subspace Clusters**: Its defining feature and primary advantage. It is one of the first algorithms to effectively solve the subspace clustering problem for high-dimensional data. | **Sensitivity to Parameters**: The quality of the results is highly sensitive to the grid size ($\xi$) and density threshold ($\tau$), which can be difficult to set correctly. |
| **Scalability**: It is fast and scales well with the number of data points (typically linear). The Apriori pruning makes the search for dense units efficient. | **Axis-Parallel Boundaries**: The grid structure means all cluster boundaries are rectangular and aligned with the feature axes. It cannot discover clusters with diagonal or curved shapes. |
| **Interpretability**: The output, a set of dense hyper-rectangles in specific subspaces, provides an easy-to-understand description of the clusters. | **Accuracy vs. Simplicity**: The grid-based approach trades off the accuracy and precision of the cluster shapes for simplicity and speed. |

## Applications
-   **Customer Segmentation**: As in the example, for identifying market segments that are defined by only a subset of the available demographic and behavioral features.
-   **Bioinformatics**: In analyzing high-dimensional gene expression data, CLIQUE can identify groups of genes that are co-regulated under certain conditions (a subspace of conditions), even if they are not correlated across all conditions.
-   **Data Mining**: As an exploratory tool to discover hidden patterns and structures in large, high-dimensional databases.
-   **Image Recognition**: For identifying objects or patterns that are defined by a subset of features (e.g., color and texture, but not location).