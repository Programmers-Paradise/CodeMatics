# Dominated Strategies

## Introduction
In game theory, analyzing a player's choices often begins with a simple question: "Are any of the available options clearly worse than others?" The concept of a **dominated strategy** formalizes this idea. A dominated strategy is a choice that is always inferior to another available strategy, no matter what the other players decide to do.

Identifying and eliminating dominated strategies is a powerful first step in simplifying a game. It allows players and analysts to prune the tree of possibilities and focus only on the strategically relevant choices. This concept is a direct consequence of the assumption of player rationality and is a cornerstone of game analysis.

## Defining Dominated Strategies
There are two key types of dominance, with strict dominance being the more powerful and widely used concept.

### 1. Strictly Dominated Strategy
A strategy $s_i$ for player $i$ is **strictly dominated** by another strategy $s'_i$ if, for every possible combination of strategies chosen by the other players, the payoff for playing $s'_i$ is **strictly greater** than the payoff for playing $s_i$.

$$u_i(s'_i, s_{-i}) > u_i(s_i, s_{-i}) \quad \text{for all possible opponent strategies } s_{-i}$$

**Key Implication**: A rational player **will never** play a strictly dominated strategy. There is always a better option available.

### 2. Weakly Dominated Strategy
A strategy $s_i$ is **weakly dominated** by $s'_ i$ if the payoff for playing $s'_i$ is **at least as good** as for $s_i$ against all opponent strategies, and **strictly better** against at least one.

$$u_i(s'_i, s_{-i}) \geq u_i(s_i, s_{-i}) \quad \text{for all } s_{-i}, \quad \text{and}$$

$$u_i(s'_i, s_{-i}) > u_i(s_i, s_{-i}) \quad \text{for at least one } s_{-i}$$

While rational players typically avoid weakly dominated strategies, the logic is less absolute than for strict dominance, as there are cases where they might be indifferent.

## The Solution Concept: Iterated Elimination of Strictly Dominated Strategies (IESDS)
The power of identifying dominated strategies comes from the **Iterated Elimination of Strictly Dominated Strategies (IESDS)**. This process simplifies a game based on the assumption of common knowledge of rationality.

The algorithm is as follows:
1.  **Identify**: Find a strictly dominated strategy for any player in the game.
2.  **Eliminate**: Remove that strategy from the game (e.g., delete its corresponding row or column from the payoff matrix), as no rational player would ever choose it.
3.  **Repeat**: In the newly reduced game, re-examine the strategies. A strategy that was not dominated before might become dominated now that an opponent's "irrational" choice has been removed.
4.  Continue this process iteratively until no more strictly dominated strategies can be found for any player.

### Relationship to Nash Equilibrium
-   A strictly dominated strategy can **never** be part of a Nash Equilibrium.
-   Therefore, the IESDS process will **never eliminate a Nash Equilibrium**.
-   If IESDS results in a single, unique strategy profile for all players, that profile **is the unique Nash Equilibrium** of the game.

## Examples

### Example 1: Simple Dominance
Consider a game where each player has a dominated strategy.

| | **Player 2** | |
| :--- | :-: | :-: |
| | **Left** | **Right** |
| **Player 1** **Up** | (1, 1) | (0, 5) |
| **Down** | (5, 0) | (4, 4) |

**Analysis for Player 1:**
-   If Player 2 plays "Left", Player 1 prefers "Down" (5 > 1).
-   If Player 2 plays "Right", Player 1 prefers "Down" (4 > 0).
"Up" is strictly dominated by "Down" for Player 1.

**Analysis for Player 2:**
-   If Player 1 plays "Up", Player 2 prefers "Right" (5 > 1).
-   If Player 1 plays "Down", Player 2 prefers "Right" (4 > 0).
"Left" is strictly dominated by "Right" for Player 2.

Since rational players will eliminate their dominated strategies, Player 1 will play "Down" and Player 2 will play "Right". The predicted outcome is **(Down, Right)**.

### Example 2: Iterated Elimination
| | **Player 2** | | |
| :--- | :-: | :-: | :-: |
| | **Left** | **Center** | **Right** |
| **Player 1** **Up** | (1, 0) | (1, 2) | (0, 1) |
| **Down**| (0, 3) | (0, 1) | (2, 0) |

**Analysis:**
1.  Initially, neither player has a strictly dominated strategy. For Player 1, "Up" is best against "Center" but not "Left". For Player 2, no column is always better than another.
2.  However, for Player 2, notice that "Right" is strictly dominated by "Center".
    -   If P1 plays "Up", Center (2) > Right (1).
    -   If P1 plays "Down", Center (1) > Right (0).
    A rational Player 1 knows that a rational Player 2 will never play "Right". We can eliminate that column.
3.  **The Reduced Game:**
    | | **Player 2** | |
    | :--- | :-: | :-: |
    | | **Left** | **Center** |
    | **Player 1** **Up** | (1, 0) | (1, 2) |
    | **Down**| (0, 3) | (0, 1) |
4.  In this new game, "Down" has now become strictly dominated by "Up" for Player 1.
    -   Against "Left", Up (1) > Down (0).
    -   Against "Center", Up (1) > Down (0).
    We can eliminate the "Down" row.
5.  **The Final Reduced Game:**
    | | **Player 2** | |
    | :--- | :-: | :-: |
    | | **Left** | **Center** |
    | **Player 1** **Up** | (1, 0) | (1, 2) |
6.  In this final game, Player 1 will play "Up". A rational Player 2, knowing this, will play "Center" to get a payoff of 2 instead of 0. The predicted outcome is **(Up, Center)**.

## Applications
1.  **Economics**: In models of market competition, if one pricing strategy (e.g., "Price High") is always worse for a firm than another (e.g., "Price Low"), it can be eliminated from the analysis.
2.  **Auctions**: In auction theory, some bidding strategies can be shown to be dominated (e.g., bidding more than your true valuation in a second-price auction).
3.  **Political Science**: Simplifying models of candidate competition by eliminating campaign strategies that are always inferior.