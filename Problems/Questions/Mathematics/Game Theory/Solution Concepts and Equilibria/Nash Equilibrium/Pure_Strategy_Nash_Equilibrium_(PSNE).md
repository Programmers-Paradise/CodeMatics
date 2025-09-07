# Pure Strategy Nash Equilibrium (PSNE)

## Introduction

The **Pure Strategy Nash Equilibrium (PSNE)** is a foundational solution concept in game theory. It describes a stable outcome in a strategic interaction where every player chooses a single, deterministic strategy, and no player can benefit by unilaterally changing that strategy. In essence, it is a "no regrets" state where each player's choice is their best possible move, given the choices of their opponents. Understanding how to find and interpret these equilibria is critical for analyzing a wide range of scenarios in economics, political science, and computer science.

## Definition and Intuition

A **pure strategy** is a complete plan of action where a player decides to play a single option with 100% certainty.

A strategy profile (a set of strategies, one for each player) is a **Pure Strategy Nash Equilibrium** if each player's chosen strategy is a **best response** to the strategies played by all other players. No player has an incentive to change their mind on their own.

  - **Formal Definition**: A strategy profile $`(s_1^*, s_2^*, \dots, s_n^*)`$ is a PSNE if for every player $i$:

$\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$  $\qquad$ $\qquad$ $\qquad$ $`u_i(s_i^*, s_{-i}^*) \geq u_i(s_i, s_{-i}^*) \quad \text{for all other strategies } s_i \in S_i`$
   
  where $s\_{-i}^*$ represents the equilibrium strategies of all other players.

## How to Find Pure Strategy Nash Equilibria

For two-player games represented by a payoff matrix, a simple and effective method for finding all PSNEs is **best response analysis**, sometimes called the "underline method".

1.  **Find Player 1's Best Responses**: For each of Player 2's possible strategies (for each **column**), determine Player 1's best move by finding their highest payoff. Underline this payoff.
2.  **Find Player 2's Best Responses**: For each of Player 1's possible strategies (for each **row**), determine Player 2's best move by finding their highest payoff. Underline this payoff.
3.  **Identify Equilibria**: Any cell in the matrix where **both** payoffs are underlined is a Pure Strategy Nash Equilibrium.

## Examples

### Example 1: A Game with a Unique PSNE (The Prisoner's Dilemma)

| | **Player 2** | |
| :--- | :-: | :-: |
| | **Cooperate** | **Defect** |
| **Player 1** **Cooperate** | (3, 3) | (0,5) |
| **Defect** | (5, 0) | (1, 1) |

  - **Analysis**: Applying the underline method reveals only one cell where both payoffs are underlined: **(Defect, Defect)**. This is the unique PSNE.

### Example 2: A Game with Multiple PSNEs (The Battle of the Sexes)

A couple wants to go out, but they forgot to coordinate. He prefers Football, she prefers the Opera, but they both prefer being together over being alone.

| | **Partner 2 (She)** | |
| :--- | :-: | :-: |
| | **Opera** | **Football** |
| **Partner 1 (He)** **Opera** | (2>, 3) | (0, 0) |
| **Football** | (1, 1) | (3, 2) |

  - **Analysis**: Applying the underline method reveals two cells where both payoffs are underlined: **(Opera, Opera)** and **(Football, Football)**. This game has two PSNEs.

### Example 3: A Game with No PSNE (Matching Pennies)

Two players simultaneously show a coin. Player 1 wins if they match, Player 2 wins if they don't.

| | **Player 2** | |
| :--- | :-: | :-: |
| | **Heads** | **Tails** |
| **Player 1** **Heads** | (1, -1) | (-1, 1) |
| **Tails** | (-1, 1) | (1, -1) |

  - **Analysis**: Applying the underline method reveals that **no cell** has both payoffs underlined. This game has **no Pure Strategy Nash Equilibrium**. The only stable outcome involves players randomizing their choices (a mixed strategy).

## Key Properties

  - **Existence**: Pure Strategy Nash Equilibria are **not guaranteed to exist** in all finite games. The lack of a PSNE in games like Matching Pennies is what motivates the concept of mixed strategies.
  - **Uniqueness**: A game can have zero, one, or multiple PSNEs.
  - **Stability**: A PSNE represents a stable outcome or social convention because no single player has a rational incentive to deviate from it.
  - **Efficiency**: A PSNE is not necessarily the best overall outcome for the players. In the Prisoner's Dilemma, the PSNE (Defect, Defect) is Pareto-inefficient compared to the (Cooperate, Cooperate) outcome.

## Applications

1.  **Economics**: In the Cournot model of competition, firms simultaneously choose production quantities. The resulting equilibrium where neither firm wants to change its quantity is a PSNE.
2.  **Political Science**: Modeling the positions that two political candidates might take on an issue. A PSNE might occur when both candidates adopt a similar, centrist platform.
3.  **Social Norms**: Social conventions, like driving on a particular side of the road, can be modeled as PSNEs of a coordination game. Everyone drives on the right because, given that everyone else is driving on the right, it is their best response to also drive on the right.
4.  **Computer Science**: In multi-agent systems, a PSNE represents a stable state where no autonomous agent has an incentive to change its programmed behavior.