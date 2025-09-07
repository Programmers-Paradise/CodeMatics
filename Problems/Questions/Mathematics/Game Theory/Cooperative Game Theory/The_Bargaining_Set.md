
# The Bargaining Set 

## Introduction
The **Bargaining Set**, introduced by R.J. Aumann and M. Maschler, is a sophisticated solution concept in cooperative game theory that identifies a set of stable payoff allocations for a group of players. It is a refinement and generalization of the **Core**, designed to provide a plausible outcome even for games where the Core is empty. The Bargaining Set is based on a dynamic notion of stability, considering not just potential defections ("objections") but also the counter-offers ("counter-objections") that can be made to thwart them. This makes it a crucial tool for analyzing complex negotiations and coalition formations.

## The Logic of Objections and Counter-Objections
The intuition behind the Bargaining Set is to model the back-and-forth arguments that might happen in a negotiation. An allocation is considered stable if any proposal by a subgroup to leave can be defeated by a counter-proposal.

-   **Recap of the Core**: An allocation is in the Core if no sub-coalition has a valid **objection**, meaning no subgroup can break away and guarantee all its members a better payoff. The Core is often empty because this condition is very strict.

-   **The Bargaining Set's Innovation**: The Bargaining Set considers an objection to be "unstable" or "not credible" if the players threatened by the objection can make a credible **counter-objection**.

### Formal Definitions
1.  **Objection**: Consider a payoff allocation $\mathbf{x}$. An **objection** to this allocation consists of a coalition $S$ and an alternative payoff allocation $\mathbf{y}$ for the members of $S$ such that:
    -   The alternative is feasible for the coalition: $\sum_{i \in S} y_i \le v(S)$.
    -   Every member of the objecting coalition is strictly better off: $y_i > x_i$ for all $i \in S$.

2.  **Counter-Objection**: A **counter-objection** to the objection $(S, \mathbf{y})$ is a proposal made by a new coalition $T$ and a new allocation $\mathbf{z}$ such that:
    -   The new coalition $T$ is feasible and contains at least one player who was part of the original objection ($S$) and at least one player who was not.
    -   The new deal is feasible for coalition $T$: $\sum_{i \in T} z_i \le v(T)$.
    -   Everyone in the new coalition $T$ is at least as well off as they were in the original allocation $\mathbf{x}$.
    -   The original objectors who are part of this new deal are at least as well off as they would have been in their own objecting allocation $\mathbf{y}$.

**An allocation is in the Bargaining Set if for every valid objection, at least one player in the objecting coalition has a valid counter-objection.**

## Relationship to the Core
-   The **Core is always a subset of the Bargaining Set**. If an allocation is in the Core, there are no valid objections to begin with, so the condition for being in the Bargaining Set is trivially satisfied.
-   **Guaranteed Existence**: The primary advantage of the Bargaining Set is that it is **guaranteed to be non-empty** for a very large class of games, including many games where the Core is empty. It provides a stable solution concept when the Core fails.

## Example: The 3-Player Majority Game
This is the canonical example where the Core is empty, but the Bargaining Set is not.
-   **Players**: {1, 2, 3}.
-   **Characteristic Function**: A value of $100 is created if a majority coalition (any two players) forms.
    -   $v(\{i\}) = 0$
    -   $v(\{1,2\}) = 100$, $v(\{1,3\}) = 100$, $v(\{2,3\}) = 100$
    -   $v(\{1,2,3\}) = 100$

**1. The Core is Empty**: It's impossible to find a stable allocation. For any proposed split of the $100, for example $(50, 50, 0)$, the excluded player (Player 3) can always approach one of the others (say, Player 1) and make a better offer: "Ditch Player 2 and form a coalition with me. We can get $100 on our own. I'll take $45, and you can have $55, which is better than the $50 you're getting now." This logic applies to any proposed allocation.

**2. Finding a point in the Bargaining Set**: Let's test the allocation $\mathbf{x} = (50, 50, 0)$.
-   **The Objection**: Player 3 can make an objection with Player 1 against Player 2. They can say to Player 1, "Let's form coalition {1,3} and split the $100 as $\mathbf{y} = (51, 0, 49)$. You get $51, which is better than your current $50." This is a valid objection.
-   **The Counter-Objection**: Player 2, who was threatened by this objection, can now make a counter-objection. They can go to Player 1 and say, "Wait. Stick with me. Let's form coalition {1,2}. We can get $100 on our own. We can split it as $\mathbf{z} = (50, 50, 0)$."
-   **Is this a valid counter?**
    -   It is feasible for coalition {1,2}.
    -   Both Player 1 and Player 2 are at least as well off as they were in the original allocation $\mathbf{x}$ (they get the same amount, 50).
    -   Player 1 (the member of the original objecting coalition) is at least as well off in this counter-deal ($\mathbf{z}_1=50$) as they would have been in the objecting deal ($\mathbf{y}_1=51$)? No, this is not a valid counter.
-   Let's try a different counter-objection. Player 2 goes to Player 3 and says "Forget Player 1. Let's form {2,3} and split it as $\mathbf{z}=(0, 51, 49)$". Player 3 (the original objector) is just as well off as in their own objection. Player 2 is better off than in the original allocation. This is a valid counter-objection.

Since every objection can be met with a plausible counter-objection, the set of allocations like (50, 50, 0) is stable and forms the Bargaining Set.

## Applications
1.  **Political Science**: The Bargaining Set is an excellent model for understanding the stability of **coalition governments**. It explains why certain government formations might be stable, even if other theoretically more powerful coalitions could exist. The threat of forming a counter-coalition keeps the current arrangement in place.
2.  **Economics**: For modeling complex market situations with many agents (e.g., mergers, syndicates) where the Core might be empty, the Bargaining Set can provide a prediction of plausible, stable outcomes.
3.  **Social Networks**: To analyze the stability of different community structures or collaborations within a social network.