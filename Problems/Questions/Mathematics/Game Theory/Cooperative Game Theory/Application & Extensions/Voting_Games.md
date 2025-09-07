# Voting Games

## Introduction
**Voting games** are a special class of cooperative games that model situations where groups of players make collective, binary ("yes/no" or "pass/fail") decisions. These games are essential for analyzing the distribution of power in voting bodies like parliaments, corporate boards, and international councils. The primary goal of analyzing a voting game is to move beyond the superficial "voting weight" of a player (e.g., number of seats or shares) to measure their **true power**—their actual ability to influence the final outcome.

## Defining a Voting Game
A voting game is a simple cooperative game where any coalition is either "winning" or "losing."
-   **Players ($N$)**: The set of voters.
-   **Coalition ($S$)**: Any subset of players.
-   **Characteristic Function ($v(S)$)**: A binary function that assigns a value of 1 to a **winning coalition** and 0 to a **losing coalition**.

The most common type is a **Weighted Majority Game**, which is defined by:
1.  A vector of **weights** for each player: $\mathbf{w} = (w_1, w_2, \dots, w_n)$.
2.  A **quota** ($q$): The minimum total weight required for a coalition to be a winning one.

A coalition $S$ is winning if and only if: $\sum_{i \in S} w_i \ge q$.

## The Problem: Voting Weight vs. Real Power
A player's nominal voting weight can be a very poor measure of their actual influence. Power indices are needed to quantify a player's real ability to affect outcomes.

Consider a board with three members {A, B, C} and the following weighted system:
-   **Weights**: A has 50 votes, B has 49 votes, C has 1 vote.
-   **Quota**: A simple majority is needed, so $q=51$.

**Analysis of Winning Coalitions**:
-   {A} is losing (50 < 51). {B} is losing. {C} is losing.
-   {A, B} is winning (50+49 = 99 > 51).
-   {A, C} is winning (50+1 = 51 > 51).
-   {B, C} is losing (49+1 = 50 < 51).
-   {A, B, C} is winning.

**The Paradox**: To form a winning coalition, Player A needs a partner. They can partner with *either* B or C. From A's perspective, the 49 votes of B and the 1 vote of C are perfectly interchangeable; both are equally useful for reaching the quota. Therefore, **Player B and Player C have the exact same amount of power**, despite their vastly different voting weights.

## Measuring Power: Key Solution Concepts

### 1. The Shapley-Shubik Power Index
This index is the application of the **Shapley Value** to a voting game.
-   **Intuition**: It measures a player's power by their probability of being the **pivotal voter** in a random ordering of all players. A player is pivotal if, when they join the coalition of players who arrived before them, their vote is the one that turns the coalition from losing to winning.

### 2. The Banzhaf Power Index
This is another widely used power index based on a different concept of being critical.
-   **Intuition**: It measures a player's power by counting how many potential coalitions they are a **"swing" voter** for.
-   **Definition of a Swing Voter**: A player $i$ is a swing voter for a winning coalition $S$ if the coalition is winning with them, but would be losing without them ($v(S)=1$ and $v(S \setminus \{i\})=0$).
-   **The Index**: The Banzhaf power index for a player is the number of times they are a swing voter, often normalized by the total number of swing instances for all players.

### Example: Calculating Banzhaf Power
Let's use the {50, 49, 1} game with quota 51. The winning coalitions are {A,B}, {A,C}, {A,B,C}.
-   **How many times is A a swing voter?**
    -   In {A,B}: Is {B} a winning coalition? No. So A is a swing.
    -   In {A,C}: Is {C} a winning coalition? No. So A is a swing.
    -   In {A,B,C}: Is {B,C} a winning coalition? No. So A is a swing.
    -   **Total for A = 3**.
-   **How many times is B a swing voter?**
    -   In {A,B}: Is {A} a winning coalition? No. So B is a swing.
    -   In {A,B,C}: Is {A,C} a winning coalition? Yes. So B is **not** a swing voter here.
    -   **Total for B = 1**.
-   **How many times is C a swing voter?**
    -   In {A,C}: Is {A} a winning coalition? No. So C is a swing.
    -   In {A,B,C}: Is {A,B} a winning coalition? Yes. So C is **not** a swing voter here.
    -   **Total for C = 1**.

**Result**: The total number of swing instances is $3+1+1=5$. The Banzhaf power distribution is **(A: 3/5, B: 1/5, C: 1/5)**. This formally confirms that Players B and C have equal power.

## Applications
1.  **Political Science**: Analyzing the power of different political parties in a parliament, the voting power of states in an electoral college, or the influence of members in the UN Security Council (where some members have veto power).
2.  **Economics**: Determining the power of shareholders in a corporation based on their stock holdings and the company's voting rules.
3.  **Machine Learning**: In ensemble methods, voting games can be used to analyze the influence of individual classifiers in a majority-vote system.
4.  **Distributed Systems**: Modeling decision-making (consensus) in decentralized networks where different nodes may have different weights or influence.