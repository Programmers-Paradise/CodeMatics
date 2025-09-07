# Definition and Scope 

## Introduction
**Game Theory** is a branch of applied mathematics that provides a powerful framework for modeling and analyzing situations of **strategic interaction**. It is the formal study of decision-making where the outcome for each participant (or "player") depends on the choices made by all. By analyzing the strategies, incentives, and information available to the players, game theory helps us understand and predict the outcomes of these interactions. Its principles are fundamental to diverse fields, including economics, political science, evolutionary biology, computer science, and philosophy.

## The Core Components of a Game
Every situation modeled by game theory consists of three essential elements:

1.  **Players**: The rational decision-makers in the game. A player can be an individual, a company, a nation, an animal, or an AI. The core assumption is that each player is **rational**, meaning they have consistent preferences and act to maximize their own outcome or **payoff**.

2.  **Strategies**: The set of possible actions or a complete plan of action for a player. A strategy specifies what a player will do in every possible situation they might encounter in the game.

3.  **Payoffs**: The outcome or value (e.g., profit, reward, utility) that a player receives for a given combination of strategies chosen by all players. Payoffs are quantified in a **payoff function** for each player.

## Representing a Game
There are two primary ways to represent the structure of a game:

-   **Normal Form (or Strategic Form)**: This representation uses a **payoff matrix** to show the players, their strategies, and the payoffs for every possible outcome. It is ideal for representing games where players make their decisions simultaneously. The classic **Prisoner's Dilemma** is a famous example.

-   **Extensive Form**: This representation uses a **game tree** to show the sequence of moves, the choices available at each decision node, and the payoffs at the end of the game. It is ideal for representing games with a sequential structure, like chess or tic-tac-toe.

## Key Solution Concepts
Game theory provides several concepts to analyze games and predict their outcomes.

-   **Dominant Strategy**: A strategy that is the best choice for a player, regardless of what the other players choose. When all players have a dominant strategy, the outcome is easy to predict.

-   **Nash Equilibrium**: Named after John Nash, this is the most fundamental concept in game theory. A **Nash Equilibrium** is a set of strategies, one for each player, such that no player has an incentive to unilaterally change their strategy. It represents a stable state where each player's choice is their best response to the choices of the other players.

## Example: The Pricing Duopoly
Two companies, Alpha and Beta, are the only sellers of a product. They must simultaneously decide whether to set a **High Price** or a **Low Price**.

-   If both set a High Price, they share the market and earn a moderate profit.
-   If both set a Low Price, they engage in a price war and earn a low profit.
-   If one sets a High Price and the other a Low Price, the low-price company captures most of the market and earns a high profit.

The payoffs (in millions of dollars) are represented in the following matrix:

| | **Beta** | |
| :--- | :-: | :-: |
| | **Low Price** | **High Price** |
| **Alpha** **Low Price** | (10, 10) | (50, 5) |
| **High Price** | (5, 50) | (20, 20) |
*(Payoffs: (Alpha's Profit, Beta's Profit))*

**Analysis to find the Nash Equilibrium:**
-   **From Alpha's perspective:**
    -   If Beta chooses "Low Price," Alpha's best move is "Low Price" (10 > 5).
    -   If Beta chooses "High Price," Alpha's best move is "Low Price" (50 > 20).
    -   Alpha has a **dominant strategy**: always choose "Low Price".
-   **From Beta's perspective:**
    -   If Alpha chooses "Low Price," Beta's best move is "Low Price" (10 > 5).
    -   If Alpha chooses "High Price," Beta's best move is "Low Price" (50 > 20).
    -   Beta also has a **dominant strategy**: always choose "Low Price".

Since both rational players have a dominant strategy of choosing "Low Price," the unique **Nash Equilibrium** is the outcome where both companies set a **Low Price**, resulting in a payoff of (10, 10).

## The Scope of Game Theory
Game theory is a vast field, with different branches for modeling different types of strategic interactions:
-   **Cooperative vs. Non-Cooperative**: Whether players can form binding agreements.
-   **Simultaneous vs. Sequential**: Whether players act at the same time or take turns.
-   **Zero-Sum vs. Non-Zero-Sum**: Whether one player's gain is necessarily another's loss.
-   **Perfect vs. Imperfect Information**: Whether players know all previous moves made in the game.
-   **Complete vs. Incomplete Information**: Whether players know the payoff structures of their opponents.

## Applications
1.  **Economics**: Analyzing market competition (oligopolies), auction design, bargaining, and public policy.
2.  **Political Science**: Modeling voting behavior, international relations, military strategy, and conflict resolution.
3.  **Evolutionary Biology**: Explaining the evolution of animal behaviors like cooperation, aggression, and communication through the lens of evolutionary stable strategies.
4.  **Computer Science and AI**: Designing artificial intelligence agents for multi-agent systems, developing algorithms for ad auctions, and securing computer networks.
5.  **Philosophy**: Analyzing concepts of rationality, ethics, and social norms.