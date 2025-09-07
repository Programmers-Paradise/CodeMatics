# Infinitely Repeated Games

## Introduction
**Infinitely repeated games** are dynamic games where players engage in the same strategic interaction (the "stage game") repeatedly over an indefinite time horizon. Unlike finitely repeated games, there is no known final round. This simple change has profound strategic implications. The absence of a final period prevents the logic of backward induction from unraveling cooperation. Instead, the perpetual **"shadow of the future"** allows for the use of threats and promises to sustain cooperative outcomes that would be impossible in a one-shot game. This concept is crucial for understanding long-term relationships, such as collusion between firms, international treaties, and the evolution of social norms.

## Payoffs and the "Shadow of the Future"
Since the game continues forever, we cannot simply sum the payoffs from each stage. Instead, we calculate the **discounted sum** of payoffs. The total utility for a player is:
$$U_i = \sum_{t=0}^{\infty} \delta^t u_i(s_t)$$
Where:
-   $u_i(s_t)$ is the player's payoff in stage $t$.
-   $\delta$ (delta) is the **discount factor**, where $0 < \delta < 1$.

The discount factor represents the players' **patience**. A value of $\delta$ close to 1 means the player is very patient and values future payoffs almost as much as present ones. A value close to 0 means the player is impatient and cares mostly about the immediate reward.

## Sustaining Cooperation with Trigger Strategies
The infinite horizon allows players to use **trigger strategies**, where a player's future actions are contingent on the past actions of their opponents. This enables the enforcement of cooperation.

A classic example is the **Grim Trigger Strategy**:
1.  **Start by Cooperating.**
2.  **Continue to Cooperate** as long as all other players have always cooperated in every previous stage.
3.  If any player ever defects, **immediately revert to playing the non-cooperative Nash Equilibrium strategy (e.g., "Defect") for all future stages, forever.**

This strategy uses the threat of perpetual punishment to deter defection.

## Example: When is Cooperation Rational in an Infinite Prisoner's Dilemma?
Consider the Prisoner's Dilemma as the stage game, played infinitely.
-   **Payoffs**: (Cooperate, Cooperate) -> (3,3); (Defect, Cooperate) -> (5,0); (Defect, Defect) -> (1,1).
-   **Strategy**: Both players adopt the Grim Trigger strategy.

Let's analyze the strategic choice for Player 1, assuming Player 2 is also using the Grim Trigger strategy. Player 1 has two choices in the first period:

**Option 1: Cooperate Forever**
-   If Player 1 cooperates, and Player 2 sticks to the strategy, they will cooperate forever.
-   The payoff stream is: 3, 3, 3, 3, ...
-   The total discounted payoff is a geometric series:
    $$U_{\text{cooperate}} = 3 + 3\delta + 3\delta^2 + 3\delta^3 + \dots = \frac{3}{1-\delta}$$

**Option 2: Defect Now (and Face Eternal Punishment)**
-   Player 1 defects in the first period, gaining a one-time "temptation" payoff. Player 2 will then punish this defection by playing "Defect" in all subsequent periods. Player 1's best response to this punishment is to also defect forever.
-   The payoff stream is: 5 (for the initial defection), then 1, 1, 1, ... (for mutual defection forever after).
-   The total discounted payoff is:
    $$U_{\text{defect}} = 5 + 1\delta + 1\delta^2 + 1\delta^3 + \dots = 5 + \delta(1 + \delta + \delta^2 + \dots) = 5 + \frac{\delta}{1-\delta}$$

**The Condition for Cooperation:**
A rational Player 1 will choose to cooperate if the payoff from cooperation is greater than or equal to the payoff from defecting.
$$\frac{3}{1-\delta} \ge 5 + \frac{\delta}{1-\delta}$$$$3 \ge 5(1-\delta) + \delta$$$$3 \ge 5 - 5\delta + \delta$$$$-2 \ge -4\delta$$$$\delta \ge \frac{1}{2}$$

**Conclusion**: The Grim Trigger strategy can sustain mutual cooperation as a Subgame Perfect Nash Equilibrium if and only if the players are sufficiently patient (i.e., their discount factor $\delta$ is 0.5 or greater).

## The Folk Theorem: A Universe of Equilibria
The logic of the Grim Trigger strategy can be generalized. The famous **Folk Theorem** provides a powerful and surprising result for infinitely repeated games. It states that:

**Any feasible payoff profile that gives each player at least their minmax payoff (the worst payoff an opponent can force upon them) can be sustained as a Nash Equilibrium outcome, provided the players are sufficiently patient (i.e., $\delta$ is close to 1).**

The implication is that in infinitely repeated games, there isn't a single predicted outcome, but a vast multitude of possible stable equilibria, ranging from full defection to full cooperation and everything in between. The outcome that is actually reached depends on the specific strategies and social norms the players adopt.

## Applications
-   **Economics**: The Folk Theorem provides the theoretical foundation for **tacit collusion** in oligopolies. Firms can maintain high, monopolistic prices without a formal agreement, because the short-term gain from undercutting a rival is outweighed by the long-term loss from an ensuing, perpetual price war.
-   **International Relations**: Explains how nations can sustain cooperation on treaties (e.g., trade or arms control). While there may be a short-term benefit to cheating, the threat of future sanctions or a breakdown of relations (a trigger strategy) can be a powerful deterrent.
-   **Social Norms**: Helps explain how social norms of cooperation and reciprocity can be stable in a community. Individuals cooperate because the long-term benefits of maintaining a good reputation outweigh the short-term gains from defection.