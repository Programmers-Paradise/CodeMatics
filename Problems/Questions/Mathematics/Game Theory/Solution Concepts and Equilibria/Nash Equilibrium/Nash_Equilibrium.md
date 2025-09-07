# Nash Equilibrium

## Introduction

The **Nash Equilibrium** is arguably the most important and foundational concept in non-cooperative game theory. Named after the brilliant mathematician John Nash, it describes a stable state in a strategic game where no player can improve their own outcome by unilaterally changing their strategy, assuming all other players keep their strategies unchanged. It is the principal tool for predicting the outcome of strategic interactions, providing a logical framework for analyzing everything from economic markets and political negotiations to evolutionary biology.

## Definition: The "No Regrets" State

A strategy profile (a set of strategies, one for each player) is a **Nash Equilibrium** if each player's strategy is the **best response** to the strategies chosen by the other players.

  - **Intuitive Definition**: An outcome is a Nash Equilibrium if, after the choices are revealed, no single player looks back and says, "Given what my opponents did, I wish I had chosen a different strategy." It is a state of "no regrets" for any individual player.

  - **Formal Definition**: A strategy profile $`s^* = (s_1^*, s_2^*, \dots, s_n^*)`$ is a Nash Equilibrium if, for every player $i$, their strategy $s_i^*$ maximizes their payoff, given the other players' strategies $s\_{-i}^\*$.

$\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$  $`\forall i, \quad u_i(s_i^*, s_{-i}^*) \geq u_i(s_i, s_{-i}^*) \quad \text{for all other strategies } s_i \in S_i`$

## How to Find Pure Strategy Nash Equilibria

For a two-player game represented by a payoff matrix, a simple and effective method for finding pure strategy Nash Equilibria is the **"best response"** or **"underline"** method:

1.  For each of Player 2's strategies (for each **column**), find the best possible payoff for Player 1 and **underline** it.
2.  For each of Player 1's strategies (for each **row**), find the best possible payoff for Player 2 and **underline** it.
3.  Any cell in the matrix where **both** payoffs are underlined is a pure strategy Nash Equilibrium.

## Examples

### Example 1: The Prisoner's Dilemma (A Unique Equilibrium)

| | **Player 2** | |
| :--- | :-: | :-: |
| | **Cooperate** | **Defect** |
| **Player 1** **Cooperate** | (3, 3) | (0, 5) |
| **Defect** | (5, 0) | (1, 1) |

  - **Player 1's Best Responses**: If P2 Cooperates, P1's best move is Defect (5\>3). If P2 Defects, P1's best move is Defect (1\>0).
  - **Player 2's Best Responses**: If P1 Cooperates, P2's best move is Defect (5\>3). If P1 Defects, P2's best move is Defect (1\>0).
  - **Conclusion**: The only cell with both payoffs underlined is **(Defect, Defect)**. This is the unique Nash Equilibrium.

### Example 2: The Stag Hunt (Multiple Equilibria)

A game of coordination where two hunters can cooperate to hunt a stag (high reward) or individually hunt a hare (safe reward).

| | **Hunter 2** | |
| :--- | :-: | :-: |
| | **Stag** | **Hare** |
| **Hunter 1** **Stag** | (10, 10) | (0, 8) |
| **Hare** | (8, 0) | (7, 7) |

  - **Analysis**: Applying the underline method reveals **two** pure strategy Nash Equilibria: **(Stag, Stag)** and **(Hare, Hare)**. In either of these outcomes, neither player has an incentive to unilaterally change their strategy.

## Pure vs. Mixed Strategies and Nash's Existence Theorem

Some games, like Rock-Paper-Scissors, have no stable outcome if players are restricted to pure strategies. This leads to the concept of a **mixed strategy**, where players randomize their choices.

**Nash's Existence Theorem**: John Nash's groundbreaking theorem proves that **every finite game** (with a finite number of players and a finite set of pure strategies) **has at least one Nash Equilibrium**. This equilibrium may be in pure strategies or in mixed strategies.

## Properties and Interpretation

  - **Not Necessarily Optimal**: A Nash Equilibrium is a stable outcome, but it is **not necessarily the best possible outcome** for the group. The Prisoner's Dilemma is the classic example, where the (Defect, Defect) equilibrium is worse for both players than the (Cooperate, Cooperate) outcome.
  - **Multiple Equilibria**: As seen in the Stag Hunt, games can have multiple Nash Equilibria. This complicates the predictive power of the concept, as it's not clear which stable outcome the players will coordinate on.

## Applications

1.  **Economics**: A cornerstone of modern economics for analyzing oligopolistic competition, auction design, bargaining, and setting monetary policy.
2.  **Evolutionary Biology**: The concept of an **Evolutionary Stable Strategy (ESS)** is a refinement of the Nash Equilibrium, used to model how animal behaviors (e.g., aggression, cooperation) evolve.
3.  **Machine Learning**: In **multi-agent systems** and **Generative Adversarial Networks (GANs)**, the training process can be viewed as the agents or networks learning strategies to converge towards a Nash Equilibrium.
4.  **Political Science and International Relations**: Modeling the strategic choices of political candidates, voting behavior, and the dynamics of international conflicts and treaties.