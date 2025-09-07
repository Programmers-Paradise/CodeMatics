# The Folk Theorem
## Introduction
The **Folk Theorem** is not a single theorem but a class of foundational results in game theory that describe the vast range of possible equilibrium outcomes in **infinitely repeated games**. The core message of the Folk Theorem is both powerful and profound: if players are sufficiently patient and the future is important, then **virtually any "reasonable" outcome can be sustained as a stable equilibrium**.

This theorem is crucial because it provides a formal explanation for how cooperation can emerge and be sustained among rational, self-interested players. It demonstrates that the "shadow of the future" can be a powerful enough incentive to prevent short-term defection, which is essential for understanding long-term strategic relationships in economics, political science, and evolutionary biology.

*(The name "Folk Theorem" comes from the fact that the basic idea was part of the common "folklore" among game theorists in the 1950s long before it was formally published.)*

## The Core Statement of the Folk Theorem
In an infinitely repeated game, any payoff profile can be sustained as a Subgame Perfect Nash Equilibrium (SPNE) outcome if it meets two "reasonable" conditions:

1.  **Feasibility**: The payoff profile must be **feasible**. This means it can be achieved as a weighted average (or convex combination) of the payoffs from the pure strategy outcomes of the single-shot stage game.

2.  **Individual Rationality**: The payoff for every player in the profile must be at least as high as their **minmax payoff**. The minmax payoff is a player's security level—the minimum payoff that the other players can force upon them. A rational player would never agree to an outcome that gives them less than what they can guarantee for themselves.

Provided these two conditions are met and the players are **sufficiently patient** (their discount factor $\delta$ is close to 1), a strategy exists that can make that outcome a stable equilibrium.

## The Mechanism: How Cooperation is Enforced by Trigger Strategies
The Folk Theorem is not magic; it relies on the construction of **trigger strategies** to enforce cooperative outcomes. The most famous of these is the **Grim Trigger Strategy**:

-   **The Strategy**: "We will all play the cooperative strategy to achieve our target payoff. However, if any single player ever deviates from this plan, all other players will immediately and permanently revert to playing the strategy that punishes that player, holding them to their minmax payoff for the rest of eternity."

The threat of this eternal punishment is what makes a one-time defection unprofitable, thus keeping all players in line. This threat is **credible** because, after a defection, playing the punishment strategy is itself a Nash Equilibrium of the remaining game.

## Example: The Repeated Prisoner's Dilemma
Consider the Prisoner's Dilemma with the following stage game payoffs:

| | **Player 2** | |
| :--- | :-: | :-: |
| | **Cooperate** | **Defect** |
| **Player 1** **Cooperate** | (3, 3) | (0, 5) |
| **Defect** | (5, 0) | (1, 1) |

The minmax payoff for each player is 1. The Folk Theorem tells us that any feasible payoff profile where both players get more than 1 (such as the cooperative outcome (3,3)) can be sustained as an equilibrium if the players are patient enough. Let's see why.

**The Strategic Calculation (using Grim Trigger):**
A player considers two options:
1.  **Cooperate Forever**: If both players cooperate, the payoff stream is 3, 3, 3, ... The total discounted payoff is:

$$U_{\text{cooperate}} = 3 + 3\delta + 3\delta^2 + \dots = \frac{3}{1-\delta}$$

2.  **Defect Now and Be Punished**: The player defects once to get the "temptation" payoff of 5. In all subsequent rounds, the opponent will play "Defect," and this player's best response will be to also defect, resulting in a punishment payoff of 1 forever after. The payoff stream is: 5, 1, 1, 1, ...

$$U_{\text{defect}} = 5 + 1\delta + 1\delta^2 + \dots = 5 + \frac{\delta}{1-\delta}$$

**The Condition for Cooperation:**
A rational player will stick with cooperation as long as the payoff is at least as good as defecting:

$$U_{\text{cooperate}} \ge U_{\text{defect}} \implies \frac{3}{1-\delta} \ge 5 + \frac{\delta}{1-\delta}$$

$$3 \ge 5(1-\delta) + \delta \implies 3 \ge 5 - 4\delta \implies 4\delta \ge 2 \implies \delta \ge \frac{1}{2}$$

This shows that cooperation can be sustained as a stable equilibrium as long as the discount factor $\delta$ is at least 0.5.

## The Implications of the Folk Theorem
-   **The "Good News"**: The theorem provides a formal justification for how cooperation, trust, and social norms can rationally emerge and be sustained even among purely self-interested agents.
-   **The "Bad News"**: The theorem is almost *too* powerful. It implies that in long-term relationships, almost *any* outcome (from full cooperation to full defection and many unfair outcomes in between) can be a stable equilibrium. This means the Nash Equilibrium concept loses much of its predictive power. Game theory alone cannot tell us which of the many possible equilibria will be chosen; that depends on history, culture, institutions, and convention.

## Applications
1.  **Economics**: Explaining **tacit collusion** in oligopolistic markets. Firms can maintain high prices without a formal agreement because the long-term profit from cooperation outweighs the short-term gain from starting a price war.
2.  **Political Science**: Modeling how nations can maintain cooperation in international agreements (e.g., on trade or arms control). The threat of future sanctions can deter a country from defecting.
3.  **Computer Science**: In the design of multi-agent systems and protocols, the Folk Theorem provides a basis for creating mechanisms that encourage and sustain cooperation among autonomous agents.