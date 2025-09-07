# Strategies

## Introduction
In game theory, a **strategy** is the fundamental object of choice for each player. It is a complete and predetermined plan of action that specifies what a player will do in any possible situation that could arise during the game. The concept of a strategy goes beyond a single move; it is a comprehensive policy for playing the game. Understanding the different types of strategies and how rational players choose among them is the core of game theory, allowing us to analyze and predict the outcomes of strategic interactions in fields from economics to computer science.

## Definition of a Strategy
A strategy for a player is a **complete plan of action**. This means it specifies a definite choice for every single decision point the player might face.

### Strategy vs. Action
It's important to distinguish between an "action" (or "move") and a "strategy":
-   **Action**: A single choice a player can make at a specific point in the game (e.g., "bet" in a round of poker).
-   **Strategy**: A full contingency plan that specifies an action for *every possible situation*. In a sequential game like chess, a strategy would be an enormous (but conceptually complete) rulebook stating what move to make for every possible board configuration.

In simple, single-move simultaneous games like the Prisoner's Dilemma, a strategy is equivalent to a single action.

## Types of Strategies

### 1. Pure Strategies
A **pure strategy** is a deterministic plan. The player decides with 100% certainty to take a specific action in any given situation. In the Prisoner's Dilemma, the pure strategies are simply "Cooperate" and "Defect." The player chooses one and sticks with it.

### 2. Mixed Strategies
A **mixed strategy** is a probabilistic plan. The player chooses to randomize over their set of pure strategies, assigning a specific probability to each one.
-   **Example**: In Rock-Paper-Scissors, a pure strategy (e.g., "always play Rock") is easily exploited. The optimal strategy is a mixed strategy: play Rock, Paper, and Scissors, each with a probability of 1/3.
-   **Purpose**: Mixed strategies are essential for analyzing games that do not have a stable equilibrium in pure strategies. A rational player will choose the probabilities in their mixed strategy to maximize their **expected payoff**.

## Key Concepts Related to Strategies

-   **Strategy Profile**: A set of strategies, one for each player in the game. The outcome of the game and the payoff for each player is determined by the chosen strategy profile.
-   **Dominant Strategy**: A strategy that is the best possible choice for a player, yielding the highest payoff regardless of what strategies the other players choose. A rational player will always play their dominant strategy if they have one.
-   **Dominated Strategy**: A strategy that is always worse than another strategy, regardless of what others play. A rational player will never play a strictly dominated strategy.
-   **Best Response**: A strategy that produces the most favorable outcome for a player, given the specific strategies chosen by the other players. The central solution concept of **Nash Equilibrium** is a strategy profile where every player's strategy is a best response to the strategies of all other players.

## Example: The Prisoner's Dilemma
Two suspects are interrogated separately. Each has two pure strategies: **Cooperate** (stay silent) or **Defect** (testify against the other).

The payoff matrix is as follows (payoffs represent years in prison, so lower is better):

| | **Player 2** | |
| :--- | :-: | :-: |
| | **Cooperate** | **Defect** |
| **Player 1** **Cooperate** | (-1, -1) | (-10, 0) |
| **Defect** | (0, -10) | (-5, -5) |
*(Payoffs: (Player 1's prison years, Player 2's prison years))*

**Analysis of Strategies:**
-   From Player 1's perspective:
    -   If Player 2 Cooperates, Defect (0 years) is better than Cooperate (-1 year).
    -   If Player 2 Defects, Defect (-5 years) is better than Cooperate (-10 years).
-   Therefore, **Defect is a dominant strategy for Player 1**.
-   Since the game is symmetric, Defect is also the dominant strategy for Player 2. The unique Nash equilibrium is for both players to choose the strategy "Defect."

## Applications
The concept of strategies is central to every application of game theory.
1.  **Economics**: Firms' strategies in a market can include setting prices, choosing advertising levels, or deciding whether to enter a new market.
2.  **Political Science**: Candidates' strategies involve choosing campaign platforms and advertising tactics. Nations' strategies involve foreign policy decisions and negotiations.
3.  **Biology**: In evolutionary game theory, strategies are genetically determined behaviors (e.g., aggressive vs. passive), and the success of a strategy is measured by its reproductive fitness.
4.  **Computer Science and AI**: In reinforcement learning, an agent's learned **policy** is its strategy for acting in an environment to maximize cumulative rewards. In adversarial AI, algorithms develop strategies to attack or defend systems.

By formally defining a player's possible plans of action as strategies, game theory provides a powerful way to analyze and predict behavior in a vast range of competitive and cooperative scenarios.