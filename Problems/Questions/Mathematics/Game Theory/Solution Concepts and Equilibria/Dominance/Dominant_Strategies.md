# Dominant Strategy

## Introduction
The concept of a **dominant strategy** is one of the most powerful and straightforward ideas in game theory. It provides a simple basis for a rational player's decision, simplifying complex strategic interactions. A dominant strategy is an option that is universally best for a player; it yields a better outcome than any other available strategy, **regardless of what the other players choose to do**. Identifying a dominant strategy is like finding a "no-brainer" move that is always the right choice.

## Defining Dominant Strategies
It is important to distinguish between two levels of dominance:

### 1. Strictly Dominant Strategy
A strategy $s_i^*$ for player $i$ is **strictly dominant** if it yields a strictly higher payoff than any other strategy, for every possible combination of strategies chosen by the other players.

$$u_i(s_i^*, s_{-i}) > u_i(s'_i, s_{-i}) \quad \text{for all other strategies } s'_i \text{ and all opponent strategies } s_{-i}$$

A rational player will **always** play a strictly dominant strategy if one exists.

### 2. Weakly Dominant Strategy
A strategy $s_i^*$ is **weakly dominant** if it yields a payoff that is *at least as good as* any other strategy against all opponent choices, and *strictly better* against at least one of the opponent's choices. While rational players are still expected to play weakly dominant strategies, the logic is slightly less absolute.

## The Dominant Strategy Equilibrium
The strongest and most stable solution concept in game theory is the **dominant strategy equilibrium**. This occurs when **every player** in the game has a dominant strategy. The equilibrium outcome is simply the strategy profile where each player plays their dominant strategy.

-   **Simplicity**: To find a dominant strategy equilibrium, each player only needs to analyze their own payoffs and find their best move. They do not need to form beliefs about what their opponents will do.
-   **Relationship to Nash Equilibrium**: A dominant strategy equilibrium is **always** a Nash Equilibrium. However, the reverse is not true. Many games have Nash Equilibria but do not have a dominant strategy equilibrium, making the Nash concept more broadly applicable.

## Example: The Prisoner's Dilemma
The Prisoner's Dilemma is the canonical example of a game with a dominant strategy equilibrium. Two suspects must choose to either **Cooperate** (stay silent) or **Defect** (betray the other).

| | **Player 2** | |
| :--- | :-: | :-: |
| | **Cooperate** | **Defect** |
| **Player 1** **Cooperate** | (3, 3) | (0, 5) |
| **Defect** | (5, 0) | (1, 1) |
*(Payoffs: (Player 1's Utility, Player 2's Utility))*

**Analysis for Player 1's Dominant Strategy:**
1.  If Player 2 chooses to "Cooperate," Player 1's best move is to "Defect" (since a payoff of 5 is better than 3).
2.  If Player 2 chooses to "Defect," Player 1's best move is to "Defect" (since a payoff of 1 is better than 0).
In every case, "Defect" is the best strategy for Player 1. Therefore, **Defect is a strictly dominant strategy for Player 1**.

**Analysis for Player 2's Dominant Strategy:**
-   Since the game is symmetric, the same logic applies. **Defect is also a strictly dominant strategy for Player 2**.

**Conclusion**:
Because both players have a dominant strategy of "Defect," the unique dominant strategy equilibrium is **(Defect, Defect)**.

## Properties and Implications
-   **Powerful Prediction**: If a dominant strategy equilibrium exists, it provides a very strong and reliable prediction of how rational players will behave.
-   **Simplicity**: It greatly simplifies the analysis of a game. There is no need to search for complex equilibria.
-   **Rarity**: While powerful, dominant strategies (and especially dominant strategy equilibria) are relatively rare in complex, real-world strategic situations. Most games require the more nuanced analysis of Nash equilibrium.

## Applications
1.  **Economics and Business Strategy**: In a price war between two companies, setting a "Low Price" might be a dominant strategy for both, even if they would both be better off setting a "High Price".
2.  **Auctions**: In a **second-price (Vickrey) auction**, bidding your true valuation of the item is a dominant strategy. This is a famous result that simplifies bidder behavior.
3.  **Political Science**: In some voting models, a candidate might have a dominant strategy in terms of which policy platform to adopt, regardless of their opponents' platforms.
4.  **Environmental Policy**: In the "Tragedy of the Commons," over-polluting can be a dominant strategy for individual actors, even though it leads to a collectively disastrous outcome.