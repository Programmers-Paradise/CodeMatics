# Cooperative vs. Non-Cooperative
## Introduction
Game theory is broadly divided into two main branches: **non-cooperative game theory** and **cooperative game theory**. This distinction is the most fundamental in the field, as it is based on the players' ability to form binding agreements. The choice between these two frameworks depends entirely on the rules of the strategic situation being modeled.

-   **Non-cooperative game theory** is the study of how rational individuals make decisions in their own self-interest when they cannot form enforceable contracts.
-   **Cooperative game theory** is the study of how rational individuals or groups interact when they *can* form binding agreements and form coalitions.

## Non-Cooperative Game Theory: The Study of Individual Strategy

The vast majority of classical game theory, including most of the famous examples, falls under this branch.

-   **Key Assumption**: The fundamental assumption is that **no binding agreements are possible**. Any cooperation between players must be self-enforcing, meaning it must be in each player's individual best interest to stick with the cooperative action at every stage of the game.
-   **Unit of Analysis**: The focus is on the **individual player**. The primary question is: "What is the optimal strategy for a single player to pursue, given their beliefs about what their rational opponents will do?"
-   **Representation**: These games are typically represented in **Normal Form** (using a payoff matrix) for simultaneous moves or **Extensive Form** (using a game tree) for sequential moves.
-   **Key Solution Concept**: The primary solution concept is the **Nash Equilibrium**, a state where no individual player can improve their outcome by unilaterally changing their strategy.

### Example: The Prisoner's Dilemma
This is the canonical non-cooperative game. Two players can either Cooperate (C) or Defect (D). They cannot make an enforceable pact to cooperate.

| | **Player 2** | |
| :--- | :-: | :-: |
| | **C** | **D** |
| **Player 1** **C** | (3, 3) | (0, 5) |
| **D** | (5, 0) | (1, 1) |

The only stable outcome is for both players to defect, even though this is a worse outcome for both than if they had cooperated. The lack of binding agreements prevents them from achieving the better cooperative result.

## Cooperative Game Theory: The Study of Coalitions
This branch focuses less on the step-by-step strategic process and more on what groups of players can achieve together.

-   **Key Assumption**: The fundamental assumption is that players **can form binding, enforceable agreements**. If a group of players forms a coalition, they can be trusted to act in the group's best interest.
-   **Unit of Analysis**: The focus is on the **coalition** (any subset of players). The primary question is: "Which coalitions will form, and how will the collective gains from cooperation be fairly distributed among the coalition's members?"
-   **Representation**: The strategic details are often abstracted away. The game is typically represented by a **Characteristic Function**, $v(C)$, which specifies the total payoff that a coalition $C$ can guarantee for its members if they work together.
-   **Key Solution Concepts**: Solution concepts focus on stability and fairness of the payoff distribution.
    -   **The Core**: The set of payoff allocations that are "stable," meaning no sub-coalition has an incentive to break off from the grand coalition and do better on its own.
    -   **The Shapley Value**: A solution concept that provides a single, "fair" payoff distribution based on each player's average marginal contribution to every possible coalition.

### Example: A Joint Venture
Three companies are considering a project. On their own, they achieve nothing. Any pair can team up to make a profit of $100k. All three together can make a total profit of $150k.
-   **Characteristic Function**:
    -   $v(\{A\}) = 0, v(\{B\}) = 0, v(\{C\}) = 0$
    -   $v(\{A,B\}) = 100, v(\{A,C\}) = 100, v(\{B,C\}) = 100$
    -   $v(\{A,B,C\}) = 150$
-   **Analysis using the Core**: We want to find a payoff division $(x_A, x_B, x_C)$ that sums to 150 and is stable. An allocation like $(80, 40, 30)$ would **not** be in the Core, because the coalition $\{B,C\}$ would have an incentive to break off. Together they get $40+30=70$, but they know they can guarantee themselves $v(\{B,C\})=100$ by forming their own binding agreement. An allocation like $(50, 50, 50)$ **is** in the Core, because no individual or pair of players can do better by leaving the grand coalition.

## Key Distinctions Summarized

| Aspect | **Non-Cooperative Game Theory** | **Cooperative Game Theory** |
|---|---|---|
| **Key Assumption**| **No Binding Agreements** | **Binding Agreements are Possible** |
| **Unit of Analysis**| The individual player | The coalition (group of players) |
| **Primary Question** | What will individual players do? | What coalitions will form and how will they divide the gains? |
| **Representation**| Payoff Matrix, Game Tree | Characteristic Function |
| **Key Solution Concept**| Nash Equilibrium | The Core, Shapley Value |

## Applications
-   **Non-Cooperative Games**:
    -   **Economics**: Modeling competition between firms, auctions, and strategic market behavior.
    -   **Biology**: Evolutionary game theory, where genes compete for reproductive fitness.
-   **Cooperative Games**:
    -   **Political Science**: Modeling the formation of governing coalitions in parliamentary systems.
    -   **Business**: Analyzing joint ventures, mergers, and supply chain collaborations.
    -   **International Relations**: Studying the formation of international treaties on issues like climate change or trade.