
# Balancedness

## Introduction
**Balancedness** is a key property of a cooperative game that determines whether the "grand coalition" (the cooperation of all players) is stable. In game theory, the **Core** is the set of all payoff allocations that are stable, meaning no subgroup of players has an incentive to break away and do better on their own. However, for some games, no such stable allocation exists—the Core is empty. The concept of balancedness provides the exact mathematical conditions required for a game to have a **non-empty Core**, making it a crucial test for the feasibility of a stable, all-inclusive cooperative agreement.

## The Core and the Challenge of Stability
The central question in many cooperative games is whether a stable outcome is possible. An allocation of the total gains from cooperation is considered stable if it is in the **Core**. This requires that the payoff for every possible sub-coalition is at least as much as they could get by acting alone. If the Core is empty, it implies that the grand coalition is inherently unstable; no matter how the gains are divided, there will always be some subgroup that has a rational incentive to defect.

## The Bondareva-Shapley Theorem
The relationship between a game's structure and the existence of a stable outcome is formalized by the landmark **Bondareva-Shapley Theorem**. It states:

**A cooperative game has a non-empty Core if and only if the game is "balanced."**

### What is a Balanced Game?
Intuitively, a game is **balanced** if the "demands" made by all possible sub-coalitions are not so high that they cannot be simultaneously satisfied by any division of the grand coalition's total value. An **unbalanced** game is one where the sub-coalitions are "too powerful" or can achieve too much on their own, making it impossible to keep the grand coalition together.

*(The formal mathematical definition involves "balanced collections of coalitions" and is quite technical, but the direct connection to the non-empty Core is its most important practical meaning.)*

## Examples

### Example 1: A Balanced Game (The Core is Not Empty)
Consider a simple 3-player game where any pair of players can create a value of 1, and the grand coalition creates a value of 2.
-   **Characteristic Function**: $v(\{i\}) = 0$, $v(\{1,2\}) = 1$, $v(\{1,3\}) = 1$, $v(\{2,3\}) = 1$, and $v(\{1,2,3\}) = 2$.
-   **Is this game balanced?** We check if the Core is non-empty. An allocation $(x_1, x_2, x_3)$ must satisfy:
    1.  $x_1+x_2+x_3=2$ (Efficiency)
    2.  $x_1+x_2 \ge 1$, $x_1+x_3 \ge 1$, $x_2+x_3 \ge 1$ (Coalitional Rationality)
-   The allocation **(1, 1, 0)** satisfies these conditions ($1+1+0=2$; $1+1 \ge 1$; $1+0 \ge 1$; $1+0 \ge 1$). Since we found at least one stable allocation, the Core is not empty, and therefore the game **is balanced**.

### Example 2: An Unbalanced Game (The Core is Empty)
Consider a 3-player majority voting game. A value of 1 is created if and only if a majority coalition forms.
-   **Characteristic Function**: $v(\{i\}) = 0$, $v(\{1,2\}) = 1$, $v(\{1,3\}) = 1$, $v(\{2,3\}) = 1$, and $v(\{1,2,3\}) = 1$.
-   **Is this game balanced?** We check if the Core is non-empty. An allocation $(x_1, x_2, x_3)$ must satisfy:
    1.  $x_1+x_2+x_3=1$ (Efficiency)
    2.  $x_1+x_2 \ge 1$, $x_1+x_3 \ge 1$, $x_2+x_3 \ge 1$ (Coalitional Rationality)
-   If we sum the three stability inequalities, we get: $2(x_1+x_2+x_3) \ge 3$.
-   Substituting the efficiency condition ($x_1+x_2+x_3=1$) into this gives: $2(1) \ge 3$, which simplifies to $2 \ge 3$. This is a **contradiction**.
-   It is mathematically impossible to find an allocation that satisfies all the conditions simultaneously. The Core is empty, and therefore the game **is unbalanced**. The two-player coalitions are too powerful relative to the grand coalition, making a stable agreement among all three players impossible.

## Properties and Implications
-   **Existence of the Core**: This is the main property. A game is balanced if and only if a stable Core allocation exists.
-   **Stability of Cooperation**: Balancedness tells us whether a stable, comprehensive cooperative agreement among all players is theoretically possible.
-   **Relation to Linear Programming**: The problem of checking if a game is balanced (i.e., if its Core is non-empty) and finding a point within the Core can be formulated and solved as a linear programming problem.

## Applications
1.  **Economics**: In the study of competitive markets, it can be proven that "market games" are always balanced. This is a fundamental result that guarantees the existence of a stable market equilibrium price. It is also used to analyze the stability of cost-sharing agreements.
2.  **Political Science**: Used to analyze the stability of voting systems and political coalitions. An unbalanced voting game (like the majority game example) suggests that no stable ruling coalition can be formed from the existing parties.
3.  **Operations Research**: In cost allocation problems, checking for balancedness determines if a "fair" and stable distribution of costs exists among participants in a joint project.