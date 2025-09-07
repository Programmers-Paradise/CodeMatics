# Grim Trigger

## Introduction
The **Grim Trigger** strategy is a famous and conceptually important strategy used in **infinitely repeated games**, particularly the Iterated Prisoner's Dilemma. It provides a stark and powerful mechanism for enforcing cooperation. The strategy is simple: start by cooperating, but if the opponent ever defects, retaliate by defecting for the rest of eternity.

Grim Trigger represents the most severe form of punishment possible in a repeated game. Because its threat of permanent punishment is so extreme, it serves as a powerful theoretical tool for understanding how cooperation can be sustained as a stable equilibrium, even among purely self-interested players.

## The Grim Trigger Strategy
The strategy, also known as the "Trigger Strategy" or "Grim Strategy," is defined by a simple set of rules:
1.  **On the first move, Cooperate.**
2.  **Continue to Cooperate** as long as the opponent has cooperated in **every** previous round.
3.  If the opponent **ever defects**, even just once, switch to **Defecting** for all subsequent rounds, forever.

This strategy is highly consequential. Once the "trigger" is pulled by an opponent's defection, the relationship permanently devolves into a state of mutual punishment with no chance of returning to cooperation.

## The Logic of Eternal Punishment
Grim Trigger sustains cooperation by making the long-term cost of a single defection prohibitively high. We can analyze this by looking at the strategic choice a player faces in an infinitely repeated Prisoner's Dilemma.

Assume the standard payoffs: (C,C) -> (3,3); (D,C) -> (5,0); (D,D) -> (1,1). The player's patience is measured by the discount factor $\delta$.

A player using Grim Trigger considers two paths:
1.  **Cooperate Forever**: If the player continues to cooperate (and their opponent does too), they will receive a steady stream of the "Reward" payoff (3). The total discounted payoff is:

$$U_{\text{cooperate}} = 3 + 3\delta + 3\delta^2 + \dots = \frac{3}{1-\delta}$$

2.  **Defect Now**: The player can choose to defect in the current round to get the high "Temptation" payoff (5). However, this triggers the opponent's Grim Trigger strategy. From the next round onwards, the opponent will defect forever. The player's best response will be to also defect forever, leading to an eternal stream of the "Punishment" payoff (1).

$$U_{\text{defect}} = 5 + 1\delta + 1\delta^2 + \dots = 5 + \frac{\delta}{1-\delta}$$

A rational player will stick with cooperation as long as $U_{\text{cooperate}} \ge U_{\text{defect}}$. This is true if the discount factor $\delta$ is sufficiently high (i.e., if the player is patient enough to value future payoffs). For these specific payoffs, cooperation is sustained if $\delta \ge 1/2$.

## Grim Trigger vs. Tit-for-Tat
Grim Trigger is often compared to the Tit-for-Tat strategy, but they are fundamentally different in their approach to punishment.

| Feature | **Tit-for-Tat (TFT)** | **Grim Trigger** |
|---|---|---|
| **Memory** | Remembers only the **last move** of the opponent. (A "memory-one" strategy). | Remembers the **entire history** of play. (Requires infinite memory). |
| **Punishment**| **Proportional and Temporary**. Punishes one defection with one defection. | **Draconian and Permanent**. Punishes one defection with eternal defection. |
| **Forgiveness** | **Forgiving**. It immediately returns to cooperation if the opponent does. | **Unforgiving**. It never returns to cooperation once trust is broken. |
| **Robustness to Noise**| Vulnerable. A single misperception can lead to a long cycle of alternating defections. | **Extremely Vulnerable**. A single accidental or misperceived defection leads to a permanent and irreversible breakdown of cooperation. |

## Properties and Role in Theory
-   **Unforgiving**: Its defining characteristic is its permanent and unforgiving nature.
-   **Requires Infinite Memory**: To know if an opponent has *ever* defected, a player must remember the entire history of the game.
-   **Theoretical Importance**: Grim Trigger is the classic strategy used to prove the **Folk Theorem**. The theorem states that in an infinitely repeated game, any reasonable outcome (including full cooperation) can be sustained as a Nash Equilibrium, because a strategy like Grim Trigger can be used to credibly threaten any player who might consider deviating.

## Applications
While too harsh to be a perfect model of most real-world behavior, the logic of Grim Trigger is used to model "zero-tolerance" policies and situations where breaking trust has catastrophic consequences.
-   **Economics**: It models the logic of a **cartel agreement**. If any firm cheats by lowering its price to gain market share, the other firms can retaliate with a permanent price war, destroying profits for everyone and making the initial defection unprofitable.
-   **International Relations**: It can represent the logic behind treaties or pacts. A single violation of a critical treaty could lead to a permanent breakdown of diplomatic relations or even trigger a state of perpetual conflict.
-   **Network Security**: In a network of cooperating servers, if one server is detected as malicious (defecting), it can be permanently blacklisted and banned from the network.