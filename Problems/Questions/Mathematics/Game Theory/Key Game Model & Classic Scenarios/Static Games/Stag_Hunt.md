# The Stag Hunt

## Introduction
The **Stag Hunt**, a story first told by philosopher Jean-Jacques Rousseau, is a fundamental game of **social cooperation** and **trust**. It models the tension between the safety of individualistic action and the potential for greater rewards through collective effort. Unlike the Prisoner's Dilemma, where individual rationality leads to a single, suboptimal outcome, the Stag Hunt presents a world with two stable equilibria: one based on mutual trust and cooperation, and another based on mutual distrust and safety. This makes it a crucial model for understanding how social conventions, communication, and trust influence strategic decisions in economics, political science, and evolutionary biology.

## The Game Setup
The story describes two hunters who go out to hunt. They have two choices:

1.  **Hunt Stag (Cooperate)**: They can team up to hunt a stag. This requires both hunters to cooperate. If they succeed, they share the large prize. However, if one hunter attempts to hunt the stag alone while the other defects, they will fail and get nothing.
2.  **Hunt Hare (Go Alone/Defect)**: Each hunter can individually choose to hunt a hare. This is a safe bet; a hunter who goes after a hare is guaranteed a small, but certain, meal, regardless of what the other hunter does.

### The Payoff Matrix
This scenario can be represented by the following payoff matrix. The key condition for a Stag Hunt is that the reward for mutual cooperation is greater than the payoff for defecting alone: **Reward (R) > Temptation (S) ≥ Punishment (P)**.

| | **Hunter 2** | |
| :--- | :-: | :-: |
| | **Hunt Stag (C)** | **Hunt Hare (D)** |
| **Hunter 1** **Hunt Stag (C)** | (4, 4) | (0, 3) |
| **Hunt Hare (D)**| (3, 0) | (1, 1) |
*(Payoffs: (Utility for Hunter 1, Utility for Hunter 2))*

Here, R=4 (mutual cooperation), S=3 (temptation to defect), and P=1 (mutual defection).

## Analysis: Two Stable Outcomes
We can find the stable outcomes by performing a **best response analysis**.

1.  **Find Hunter 1's Best Responses**:
    -   If Hunter 2 chooses "Hunt Stag" (first column), Hunter 1's best response is "Hunt Stag" (since 4 > 3).
    -   If Hunter 2 chooses "Hunt Hare" (second column), Hunter 1's best response is "Hunt Hare" (since 1 > 0).

2.  **Find Hunter 2's Best Responses**:
    -   If Hunter 1 chooses "Hunt Stag" (first row), Hunter 2's best response is "Hunt Stag" (since 4 > 3).
    -   If Hunter 1 chooses "Hunt Hare" (second row), Hunter 2's best response is "Hunt Hare" (since 1 > 0).

The analysis reveals that this game has **two** Pure Strategy Nash Equilibria:
-   **(Stag, Stag)**
-   **(Hare, Hare)**

## The Dilemma of Trust: Payoff vs. Risk Dominance
The existence of two equilibria creates the central dilemma of the game. A rational player's choice depends entirely on what they believe their opponent will do.

-   **(Stag, Stag)** is the **Payoff Dominant** equilibrium. It is the socially optimal outcome; both players are strictly better off in this equilibrium than in the (Hare, Hare) equilibrium. However, it is **riskier**. Choosing "Stag" requires trusting your partner to do the same. If your trust is misplaced, you get the worst possible payoff (0).

-   **(Hare, Hare)** is the **Risk Dominant** equilibrium. The "Hunt Hare" strategy is safer. It guarantees a player a minimum payoff of 1, regardless of what the other player does. Choosing "Hare" avoids the risk of getting nothing.

The game becomes a model of **social trust and confidence**. If players trust each other to cooperate, they can achieve the best outcome. If they lack that trust, they will rationally retreat to the safer, but collectively worse, outcome.

## Stag Hunt vs. Prisoner's Dilemma
The Stag Hunt is often contrasted with the Prisoner's Dilemma, as they model different social problems.

| Feature | **Prisoner's Dilemma** | **Stag Hunt** |
|---|---|---|
| **Payoff Order** | Temptation > Reward > Punishment > Sucker | **Reward** > Temptation > Punishment > Sucker |
| **Dominant Strategy**| Yes ("Defect") | **No** |
| **Nash Equilibria**| One (mutual defection) | **Two** (mutual cooperation and mutual defection) |
| **Core Problem** | How to avoid a mutually bad outcome when **mistrust is the only rational option**. | How to achieve a mutually good outcome when **trust is required but risky**. |

## Applications
1.  **International Agreements**: Modeling climate change negotiations. The best outcome is for all countries to cooperate and reduce emissions (Stag). However, it is tempting for a single country to defect and continue polluting while free-riding on the efforts of others (Hare). The fear of others defecting can lead to the suboptimal equilibrium where no one abates.
2.  **Technology Adoption**: The choice between two technology standards. If everyone adopts the superior standard, everyone benefits (Stag). However, if you are unsure if others will switch, it might be safer to stick with the old, established standard (Hare).
3.  **Financial Markets**: Can model bank runs. The best outcome for everyone is for all depositors to keep their money in the bank (Stag). But if a depositor fears that others will withdraw their money (defect), their individual best response is to also withdraw their money immediately (Hare), leading to the collapse of the bank.
4.  **Biology**: Modeling cooperative hunting strategies in animals like wolves or lions.