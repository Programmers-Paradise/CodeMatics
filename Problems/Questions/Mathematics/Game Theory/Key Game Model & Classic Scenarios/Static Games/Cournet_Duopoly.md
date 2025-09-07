# Cournot Duopoly

## Introduction
The **Cournot Duopoly** model is a cornerstone of game theory and a foundational model of **oligopoly** in economics. Developed by Antoine Augustin Cournot in 1838, it describes a market where two firms compete by choosing their **output quantities** simultaneously. Each firm's decision is made rationally to maximize its own profit, based on its belief about the quantity the other firm will produce. The model provides a clear and powerful application of the **Nash Equilibrium** concept to understand strategic competition in markets that lie between the extremes of perfect competition and monopoly.

## The Cournot Model Setup
The Cournot model is a **static (simultaneous-move)**, **non-cooperative** game of **complete information**. Its key components are:

1.  **Players**: Two firms (a duopoly), Firm 1 and Firm 2.
2.  **Strategic Variable**: Each firm $i$ chooses its production **quantity**, $q_i$. The total market quantity is $Q = q_1 + q_2$.
3.  **Market Price**: The price that both firms receive is determined by the total quantity supplied, according to a shared **inverse demand function**. A standard linear form is:
    $$P(Q) = a - bQ = a - b(q_1 + q_2)$$
    where $a$ and $b$ are positive constants.
4.  **Costs**: It is often assumed that each firm has a constant marginal cost of production, $c$.
5.  **Profit (Payoff)**: Each firm aims to maximize its own profit, which is its total revenue minus its total cost.

$$\pi_i(q_1, q_2) = (\text{Price} - \text{Cost per unit}) \times \text{Quantity} = (P(Q) - c) \cdot q_i$$

## Finding the Nash Equilibrium: Reaction Functions
The solution to the Cournot model is the **Nash Equilibrium**, where each firm's chosen quantity is a **best response** to the other firm's quantity. We find this equilibrium by deriving each firm's **reaction function**.

**Step 1: Find Firm 1's Reaction Function**
Firm 1 chooses its quantity $q_1$ to maximize its profit, treating Firm 2's quantity $q_2$ as given.
-   Profit function: $\pi_1(q_1, q_2) = (a - b(q_1+q_2) - c)q_1 = (a-c)q_1 - bq_1^2 - bq_1q_2$.
-   To find the maximum, we take the partial derivative with respect to $q_1$ and set it to zero:

$$\frac{\partial \pi_1}{\partial q_1} = (a-c) - 2bq_1 - bq_2 = 0$$

-   Solving for $q_1$ gives Firm 1's reaction function, $R_1(q_2)$, which specifies its optimal quantity for any quantity produced by Firm 2:

$$q_1 = \frac{a - c - bq_2}{2b}$$

**Step 2: Find the Equilibrium**
-   Since the firms are identical (symmetric), Firm 2's reaction function is symmetric to Firm 1's:

$$q_2 = \frac{a - c - bq_1}{2b}$$

-   The Nash Equilibrium is the point $(q_1^*, q_2^*)$ where these two reaction functions intersect. We find this by solving the system of two linear equations. Substituting the expression for $q_2$ into the equation for $q_1$ yields the symmetric equilibrium quantities:

$$q_1^* = q_2^* = \frac{a-c}{3b}$$

## Example
**Problem:** A market is served by two firms. The inverse demand is $P(Q) = 100 - Q$ (so $a=100, b=1$), and both firms have a marginal cost of $c=10$.

**1. Find the Reaction Functions:**
-   Firm 1's profit: $\pi_1 = (100 - q_1 - q_2 - 10)q_1 = (90 - q_1 - q_2)q_1 = 90q_1 - q_1^2 - q_1q_2$.
-   Maximize with respect to $q_1$: $\frac{\partial \pi_1}{\partial q_1} = 90 - 2q_1 - q_2 = 0$.
-   Firm 1's reaction function is: $q_1 = \frac{90 - q_2}{2}$.
-   By symmetry, Firm 2's reaction function is: $q_2 = \frac{90 - q_1}{2}$.

**2. Solve for the Nash Equilibrium:**
-   Substitute Firm 2's reaction into Firm 1's:

$$q_1 = \frac{90 - (\frac{90-q_1}{2})}{2} = \frac{\frac{180 - 90 + q_1}{2}}{2} = \frac{90+q_1}{4}$$   $$4q_1 = 90 + q_1 \implies 3q_1 = 90 \implies q_1^* = 30$$

-   By symmetry, $q_2^* = 30$.

**3. Find the Market Outcome:**
-   Total Quantity: $Q^* = q_1^* + q_2^* = 30 + 30 = 60$.
-   Market Price: $P^* = 100 - 60 = 40$.
-   Profit for each firm: $\pi^* = (P^* - c)q^* = (40 - 10) \times 30 = 900$.
The Cournot-Nash Equilibrium is for each firm to produce 30 units, leading to a market price of $40 and a profit of $900 for each firm.

## Properties and Market Context
-   **Strategic Substitutes**: The reaction functions are downward sloping. This means that if one firm increases its output, the other firm's best response is to decrease its output. Quantities are **strategic substitutes**.
-   **Comparison to Monopoly and Competition**: The Cournot outcome lies between the extremes of monopoly and perfect competition.
    -   Total Cournot output (60) is **higher** than the monopoly output (45).
    -   Cournot price (40) is **lower** than the monopoly price (55).
    -   Cournot price (40) is **higher** than the perfectly competitive price (which would be equal to marginal cost, 10).

## Applications
1.  **Industrial Organization**: The primary tool for analyzing competition in oligopolistic markets, such as the automobile, airline, or telecommunications industries.
2.  **Environmental Policy**: Modeling how firms will strategically adjust their production levels (and thus emissions) in response to environmental regulations like carbon taxes or emissions caps.
3.  **International Trade**: Analyzing how countries compete by setting export quantities in global markets.
4.  **Technology Races**: Modeling competition in emerging technologies, where firms decide on their level of investment or production capacity.