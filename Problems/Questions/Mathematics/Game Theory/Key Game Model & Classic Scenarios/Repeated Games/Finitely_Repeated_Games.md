# Finitely Repeated Games
## Introduction
**Finitely repeated games** are dynamic games in which a simple **stage game** (like the Prisoner's Dilemma) is played a **finite and commonly known** number of times. After each round, or "stage," players observe the outcome before the next round begins. This structure allows players to react to each other's past behavior.

The key question in repeated games is whether the possibility of future interaction can sustain cooperation that would not be possible in a single, one-shot game. In finitely repeated games, the answer is often a surprising and paradoxical "no," due to the powerful logic of **backward induction**.

## The Power of the Final Round: The Backward Induction Argument
The analysis of a finitely repeated game starts at the end and works its way backward to the beginning.

1.  **The Final Period (Stage T)**: In the very last round of the game, there is no future. There are no more chances for reward or punishment. Therefore, the strategic situation is identical to a one-shot game. Rational players will simply play a Nash Equilibrium of the stage game, with no regard for past actions.

2.  **The Second-to-Last Period (Stage T-1)**: Now consider the second-to-last round. Every player knows what will happen in the final round, regardless of their current actions. Since the future is already determined and cannot be influenced by the current move, there is no incentive to cooperate in stage T-1 to build a good reputation or avoid future retaliation. The incentives in this stage are, again, identical to a one-shot game. Rational players will once again play a Nash Equilibrium of the stage game.

3.  **The "Unraveling" Result**: This logic continues to "unravel" all the way back to the very first stage. At every period, players foresee that all future periods will end in non-cooperative Nash Equilibrium play, so there is no incentive to cooperate in the present.

## The Main Result: Selten's Theorem
This unraveling logic is formalized in a famous result by Reinhard Selten (often called the Folk Theorem for finitely repeated games):

**If the stage game has a single, unique Nash Equilibrium, then the only Subgame Perfect Nash Equilibrium (SPNE) of the finitely repeated game is to play that same Nash Equilibrium in every single period.**

### Example: The Finitely Repeated Prisoner's Dilemma
This is the classic and most startling example of the backward induction result.
-   **Stage Game**: The Prisoner's Dilemma, where the unique Nash Equilibrium is for both players to **Defect**.
-   **Repeated Game**: The game is played for a known, finite number of rounds, say T=100.

**Analysis:**
-   **In Round 100**: There is no future, so both players will **Defect**.
-   **In Round 99**: Both players know that they will both Defect in Round 100 no matter what. Since the future is fixed, there's no reason to cooperate now. Both players will **Defect**.
-   **In Round 98... and all the way back to Round 1**: The same logic applies.

The paradoxical conclusion is that the only equilibrium is for both players to **defect in every single round**, leading to a series of poor outcomes, even if the game is played a million times.

## Escaping the Paradox: How Cooperation is Possible
The grim "always defect" result only holds if the stage game has a *unique* Nash Equilibrium. Cooperation **can** be sustained in a finitely repeated game if the **stage game has multiple Nash Equilibria**.

-   **Scenario**: Imagine a stage game with two Nash Equilibria: a "good" one with high payoffs, e.g., (High, High) -> (5,5), and a "bad" one with low payoffs, e.g., (Low, Low) -> (1,1).
-   **Trigger Strategy**: Players can use the "bad" equilibrium as a credible threat to sustain cooperation. For example, they can adopt a strategy like:
    1.  Start by playing the cooperative action (which is not a Nash Equilibrium).
    2.  Continue to cooperate as long as the other player does.
    3.  If the other player ever defects, I will punish them by playing the "bad" Nash Equilibrium strategy (Low) for all remaining rounds of the game.

-   **Credibility**: This threat is **credible** because, once a defection occurs, playing the "bad" Nash Equilibrium for the rest of the game is itself a stable equilibrium path. This allows cooperation to be sustained, at least until the final few rounds of the game.

## Applications
-   **Economics and Business**: Models competition between firms that have a known endpoint, such as the period before a patent expires or a contract ends. It explains why "end-game" behavior can become more ruthless and non-cooperative.
-   **Political Science**: Analyzing political alliances or international agreements that have a fixed term. The model predicts that cooperation may break down as the end date approaches.
-   **Evolutionary Biology**: Modeling interactions between animals with a known, finite lifespan.
-   **Machine Learning**: In multi-agent reinforcement learning, understanding the effects of a finite vs. infinite horizon is critical for designing agents that can learn to cooperate or compete effectively.