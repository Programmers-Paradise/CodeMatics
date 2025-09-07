# Coalitions 
## Introduction
In game theory, a **coalition** is a group of players who decide to act together as a single unit to coordinate their strategies and achieve a common goal. The concept of the coalition is the fundamental unit of analysis in **cooperative game theory**. Unlike non-cooperative games that focus on individual actions, the study of coalitions is concerned with what groups can achieve, which groups are likely to form, and how the collective gains from their cooperation should be divided. This framework is essential for understanding strategic alliances in fields like economics, political science, and machine learning.

## Defining a Coalition and its Value
The core of a cooperative game is the value that can be created by different groups of players.

-   **Coalition ($C$)**: For a set of players $N = \{1, 2, ..., n\}$, a coalition is any non-empty subset of these players ($C \subseteq N$). The coalition of all players, $N$, is called the **grand coalition**.

-   **The Characteristic Function ($v(C)$)**: The power and potential of any coalition is quantified by the **characteristic function**. This function, $v(C)$, assigns a single numerical value (a total payoff) to every possible coalition $C$. This value represents the total benefit that the members of coalition $C$ can guarantee for themselves by working together, regardless of what players outside the coalition do.

### A Key Property: Superadditivity
Many cooperative games exhibit **superadditivity**, which formalizes the idea that there are gains from cooperation. A game is superadditive if the value of a larger coalition is at least as great as the sum of the values of its disjoint parts. For any two disjoint coalitions $S$ and $T$:
$$v(S \cup T) \ge v(S) + v(T)$$

## The Central Questions of Coalition Games
Once a game is defined by its characteristic function, cooperative game theory seeks to answer two main questions:
1.  **Which coalitions will form?** The analysis focuses on the stability of different potential coalitions. Will the grand coalition form, or will smaller, competing coalitions emerge?
2.  **How should the gains be divided?** How should the value created by a coalition, $v(C)$, be fairly and stably distributed among its members?

These questions are addressed using various **solution concepts**. The two most important are:
-   **The Core**: A concept of **stability**, which identifies all payoff allocations that are immune to defections by any sub-coalition.
-   **The Shapley Value**: A concept of **fairness**, which provides a single, unique payoff allocation to each player based on their average marginal contribution.

## Example: A Simple Majority Game
**Problem**: Three shareholders—Alice (45% stake), Bob (45% stake), and Carol (10% stake)—must vote on a proposal. A majority (>50%) is needed to pass the proposal, which will generate a total value of $120 to be distributed.

**The Characteristic Function ($`v(C)`$):**
The value of a coalition is $120 if it has a majority stake, and $0 otherwise.
-   $v(\{A\}) = 0$ (45% is not a majority)
-   $v(\{B\}) = 0$ (45% is not a majority)
-   $v(\{C\}) = 0$ (10% is not a majority)
-   $v(\{A,B\}) = 120$ (90% is a majority)
-   $v(\{A,C\}) = 120$ (55% is a majority)
-   $v(\{B,C\}) = 120$ (55% is a majority)
-   $v(\{A,B,C\}) = 120$

**Analysis:**
This setup clearly shows which coalitions are "winning" coalitions. The key question is how to divide the $120 profit.
-   **The Core**: An allocation like ($60, $60, $0) would be in the Core. Alice and Bob form a coalition and have no incentive to include Carol.
-   **The Shapley Value**: A "fairness" calculation would likely give Carol some of the payoff, as she is critical to forming a majority with either Alice or Bob. For example, her marginal contribution to Alice is huge: $v(\{A,C\}) - v(\{A\}) = 120 - 0 = 120$. The Shapley value averages these contributions to determine her "power," which is greater than her 10% stake might suggest.

## Applications
1.  **Politics**: Coalitions are the basis of parliamentary governments, where political parties form alliances to create a ruling majority. Cooperative game theory can be used to analyze the stability of these governments and the distribution of cabinet positions among the parties.
2.  **Economics**: Coalitions can model cartels (e.g., OPEC), where firms cooperate to control prices, or joint ventures where companies pool resources. It is also used in cost-sharing problems to fairly allocate the cost of a public good among its beneficiaries.
3.  **Machine Learning**:
    -   In **cooperative multi-agent systems**, agents can form coalitions to perform complex tasks that would be impossible for a single agent.
    -   In **explainable AI**, the **SHAP (SHapley Additive exPlanations)** framework uses the Shapley value to explain a model's prediction by treating the features as players in a coalition to produce the final output.
4.  **Environmental Pacts**: Modeling international agreements on issues like climate change, where countries must form coalitions to effectively address the problem.