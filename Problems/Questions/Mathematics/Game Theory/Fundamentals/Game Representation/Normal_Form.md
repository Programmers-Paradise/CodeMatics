# Normal Form in Game Theory

## Introduction
In game theory, the **normal form** (also known as the **strategic form**) is a fundamental way of describing a game. It represents a game by specifying the players, the strategies available to them, and the payoffs they receive for each possible combination of strategies. This representation is primarily used for games where players make their decisions **simultaneously**, without knowledge of what their opponents are choosing. The normal form provides a clear and compact framework, typically a payoff matrix, that serves as the basis for analyzing strategic interactions and finding stable outcomes like the Nash Equilibrium.

## The Formal Definition of a Normal Form Game
A normal form game is formally defined as a tuple $G = (N, S, u)$, which consists of three components:

1.  **Players ($N$)**: A finite set of players, indexed as $N = \{1, 2, \dots, n\}$.

2.  **Strategy Sets ($S$)**: A set of all possible strategy profiles, $S = S_1 \times S_2 \times \dots \times S_n$. For each player $i \in N$, there is a set of available strategies $S_i$. A **strategy profile** is a specific combination of strategies chosen by all players, one for each player.

3.  **Payoff Functions ($u$)**: A set of functions, one for each player, $u = (u_1, u_2, \dots, u_n)$. Each payoff function $u_i$ maps a strategy profile to a real number, representing the utility or payoff for player $i$.
    $$u_i: S \rightarrow \mathbb{R}$$

## Visualizing the Normal Form: The Payoff Matrix
For two-player games, the normal form is most commonly visualized using a **payoff matrix**.
-   The rows represent the strategies of Player 1.
-   The columns represent the strategies of Player 2.
-   Each cell corresponds to an outcome and contains a tuple of payoffs: `(Payoff to Player 1, Payoff to Player 2)`.

### Example: The Prisoner's Dilemma
This is the canonical example of a normal form game represented by a payoff matrix.
-   **Players**: {Prisoner 1, Prisoner 2}
-   **Strategies**: {Cooperate, Defect} for each player.
-   **Payoffs**: Represented in the matrix below.

| | **Prisoner 2** | |
| :--- | :-: | :-: |
| | **Cooperate** | **Defect** |
| **Prisoner 1** **Cooperate** | (3, 3) | (0, 5) |
| **Defect** | (5, 0) | (1, 1) |

This matrix completely describes the game. For example, if Prisoner 1 defects while Prisoner 2 cooperates, the outcome is (5, 0).

## Normal Form vs. Extensive Form: The Key Distinction
Game theory uses two primary representations for games, and the choice depends on the game's timing.

| Feature | **Normal Form (Strategic Form)** | **Extensive Form** |
|---|---|---|
| **Best for** | **Simultaneous-move** games. | **Sequential-move** games. |
| **Focus** | "What strategies can players choose and what are the resulting payoffs?" | "What is the sequence of moves and what do players know at each decision point?" |
| **Visualization** | **Payoff Matrix** | **Game Tree** |
| **Information** | Implicitly assumes simultaneous moves; loses the temporal sequence of actions. | Explicitly shows the order of play, decision nodes, and information sets. |

Any extensive form game can be converted into a normal form by defining a "strategy" as a complete contingency plan for every decision node. However, this often results in an intractably large payoff matrix.

## Analyzing Normal Form Games
The normal form representation is the starting point for finding a game's solution.
-   **Dominant Strategies**: A player can examine the matrix to see if any strategy is better than all others, regardless of what opponents do.
-   **Best Response**: For each of an opponent's strategies (each column for Player 1), a player can identify their best response.
-   **Nash Equilibrium**: This is the primary solution concept. It is a strategy profile where no player can improve their payoff by unilaterally changing their strategy. In a payoff matrix, it is a cell where each player's choice is a best response to the other's choice.

## Applications
The normal form is the basis for analyzing a vast range of strategic interactions.
-   **Economics**: Modeling competition between a small number of firms (oligopolies) where they simultaneously set prices or production quantities.
-   **Political Science**: Analyzing simultaneous decisions in voting scenarios or international conflicts.
-   **Biology**: Modeling evolutionary games where different species or individuals within a species adopt strategies simultaneously.
-   **Computer Science**: In multi-agent systems, where autonomous agents must make decisions without knowing the immediate choices of others.

## Conclusion
The normal form is the foundational representation for games of simultaneous strategic choice. By abstracting a complex situation into a clear, concise matrix of players, strategies, and payoffs, it provides the essential structure needed to apply the tools of game theory to analyze strategic behavior and predict stable outcomes.