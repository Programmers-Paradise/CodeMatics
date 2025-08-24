# Experimental Units

## Introduction

Experimental units are the fundamental entities on which measurements are made or treatments are applied in experiments. They serve as the basis for collecting data and analyzing results, ensuring that conclusions drawn from an experiment are valid and reliable. Understanding what constitutes an experimental unit is a critical first step in designing a sound study.

## Definition

An **experimental unit** is the smallest individual entity (e.g., a person, an animal, a plot of land, an object) to which a treatment can be independently assigned. It is the unit on which the experiment is performed and from which a response or measurement is obtained.

If multiple characteristics or variables are measured on a single unit, they can be represented as a set of observations for that unit. For an experimental unit $U_i$, the measured variables can be denoted as:

$$X_i = \{x_{i1}, x_{i2}, \dots, x_{ip}\}$$

where $p$ is the number of variables measured on each unit.

## Example

**Problem:** A botanist wants to study the effect of three different fertilizers on plant growth. She has 60 identical plant seedlings to use in the experiment.

**Experimental Design and Analysis:**
1.  **Define Experimental Units**: The 60 individual plant seedlings are the experimental units. Each plant is a separate unit because a treatment can be independently applied to it.

2.  **Assign Treatments**: The botanist randomly assigns 20 plants to each of the three groups:
    -   Group A (Treatment 1): Receives Fertilizer 1.
    -   Group B (Treatment 2): Receives Fertilizer 2.
    -   Group C (Control): Receives no fertilizer.

3.  **Collect Data**: After a set period (e.g., four weeks), she measures the height (in cm) of each of the 60 plants. The height is the dependent variable.

4.  **Analyze Results**: To determine if there is a significant difference in growth among the three groups, she would compare the mean heights.
    -   Calculate the mean height for each group:
      
$$
\bar{x}_ A = \frac{1}{20}\sum_{i=1}^{20} x_{A,i}, \quad \bar{x}_ B = \frac{1}{20}\sum_{i=1}^{20} x_{B,i}, \quad \bar{x}_ C = \frac{1}{20}\sum_{i=1}^{20} x_{C,i}
$$

  An Analysis of Variance (ANOVA) test would then be used to determine if the observed differences between these means are statistically significant.

## Properties

-   **Independence**: Experimental units should be independent of one another. The treatment applied to one unit should not affect the response of other units.
-   **Unit of Randomization**: The experimental unit is the level at which randomization of treatments occurs. Proper randomization ensures that the assignment is unbiased.
-   **Unit of Replication**: The number of experimental units per treatment group constitutes the number of replicates. Having multiple units (replicates) allows the researcher to estimate experimental error.
-   **Basis for Analysis**: Statistical analyses, such as t-tests or ANOVA, are based on the variation among experimental units to determine the significance of treatment effects.

## Applications

1.  **Agriculture**: A plot of land is often an experimental unit when testing different fertilizers, pesticides, or crop varieties on yield.
2.  **Medicine**: In clinical trials, an individual patient is the experimental unit who receives a specific drug, therapy, or a placebo.
3.  **Engineering**: A specific product coming off an assembly line (e.g., a light bulb) can be an experimental unit for testing durability or performance under different manufacturing processes.
4.  **Machine Learning**: When validating a model, a single data instance (e.g., an image in a classification task) can be considered an experimental unit, though often the unit of analysis is a batch or a cross-validation fold.
5.  **Psychology**: An individual person participating in a study is the experimental unit when testing the effects of a psychological intervention or stimulus.

This structured approach ensures clarity and comprehensiveness, highlighting the critical role of experimental units in statistical analysis across diverse fields.