# Static vs. Dynamic Games

## Introduction
In game theory, a crucial distinction is made between games based on the **timing** of the players' moves. This distinction separates all strategic interactions into two broad categories: **static games** and **dynamic games**.
-   **Static games** model situations where players make their decisions simultaneously, without knowledge of what their rivals are doing.
-   **Dynamic games** model situations where players move sequentially, and later players can observe the actions of earlier players before making their own decisions.
Understanding this difference is fundamental, as it determines how the game is represented, the type of strategic reasoning used, and the appropriate solution concepts to apply.

## Static (or Simultaneous) Games

### Definition
A **static game** is one in which all players choose their strategies simultaneously, or in which they choose their strategies without observing the choices of their opponents. The key feature is the lack of information about the other players' current actions.

-   **Representation**: Static games are formally represented in **Normal Form** (or Strategic Form). For two players, this is visualized as a **payoff matrix**.
-   **Solution Concept**: The primary solution concept for static games is the **Nash Equilibrium**. A Nash Equilibrium is a set of strategies where no player can improve their own payoff by unilaterally changing their choice.

### Example: The Prisoner's Dilemma
The Prisoner's Dilemma is a classic static game where two suspects are interrogated in separate rooms. They must simultaneously decide whether to Cooperate (stay silent) or Defect (betray the other).

The payoff matrix shows the outcome for each choice:
| | **Prisoner 2** | |
| :--- | :-: | :-: |
| | **Cooperate** | **Defect** |
| **Prisoner 1** **Cooperate** | (-1, -1) | (-3, 0) |
| **Defect** | (0, -3) | (-2, -2) |
*(Payoffs represent years in prison, lower is better)*

The unique Nash Equilibrium is (Defect, Defect), as neither player has an incentive to switch, given the other's choice.

## Dynamic (or Sequential) Games

### Definition
A **dynamic game** is one in which players move in a sequence. At least one player makes their decision after observing an action taken by another player. The ability to observe and react is the defining feature.

-   **Representation**: Dynamic games are formally represented in **Extensive Form**. This is visualized as a **game tree**, which explicitly shows the order of moves, the information available at each decision point, and the final payoffs.
-   **Solution Concept**: The primary solution concept for dynamic games is the **Subgame Perfect Nash Equilibrium (SPNE)**. This is a refinement of the Nash Equilibrium that eliminates non-credible threats and is found using **backward induction**.

### Example: The Stackelberg Duopoly Competition
This is a classic dynamic game where two firms decide on production quantities sequentially.
-   Firm 1 (the Leader) chooses its quantity, $q_1$, first.
-   Firm 2 (the Follower) observes $q_1$ and then chooses its quantity, $q_2$.
-   Assume the market price is $P = 100 - Q$, where total quantity is $Q=q_1+q_2$. Assume zero costs for simplicity.

**Solution using Backward Induction:**
1.  **Solve the Follower's Problem (Firm 2)**: We start at the end of the game. Firm 2 observes $q_1$ and chooses $q_2$ to maximize its own profit:

$$\max_{q_2} \pi_2 = P \cdot q_2 = (100 - q_1 - q_2)q_2 = 100q_2 - q_1q_2 - q_2^2$$
    
$\quad$  Taking the derivative with respect to $q_2$ and setting it to zero gives Firm 2's best response:
    
$$100 - q_1 - 2q_2 = 0 \implies q_2^*(q_1) = \frac{100 - q_1}{2}$$
    
$\quad$ This is Firm 2's **reaction function**.

3.  **Solve the Leader's Problem (Firm 1)**: Firm 1 anticipates Firm 2's rational reaction. It substitutes Firm 2's reaction function into its own profit function:

$$\max_{q_1} \pi_1 = (100 - q_1 - q_2^*(q_1))q_1 = \left(100 - q_1 - \frac{100 - q_1}{2}\right)q_1$$   $$\pi_1 = \left(\frac{100 - q_1}{2}\right)q_1 = 50q_1 - \frac{1}{2}q_1^2$$
    
$\quad$ Taking the derivative with respect to $q_1$ and setting it to zero gives Firm 1's optimal choice:

$$50 - q_1 = 0 \implies q_1^* = 50$$

4.  **Find the Equilibrium Outcome**:
    -   The Leader (Firm 1) produces $q_1^* = 50$.
    -   The Follower (Firm 2) observes this and produces $q_2^* = \frac{100 - 50}{2} = 25$.
    The SPNE is for the Leader to produce 50 units and the Follower to produce 25.

## Key Distinctions Summarized

| Feature | **Static Games** | **Dynamic Games** |
|---|---|---|
| **Timing of Moves** | Simultaneous (or without knowledge of others' moves) | Sequential |
| **Information** | Players do not observe others' current actions | Later players observe earlier players' actions |
| **Representation**| Normal Form (Payoff Matrix) | Extensive Form (Game Tree) |
| **Key Solution Concept** | Nash Equilibrium | Subgame Perfect Nash Equilibrium |
| **Primary Solution Method** | Inspection of Matrix / Finding Best Responses | Backward Induction |

## Applications
-   **Economics**: Static games like the **Cournot model** are used for industries where firms choose production levels simultaneously. Dynamic games like the **Stackelberg model** are used where one firm has a first-mover advantage.
-   **Computer Science**: Dynamic games are fundamental to AI for turn-based games (e.g., chess). Static game concepts are used in areas like ad auctions.
-   **Biology**: Static models are often used to study evolutionary stable strategies (ESS), while dynamic models can represent animal contests that unfold over time.
-   **Political Science**: Static games can model simultaneous voting, while dynamic games can model sequential legislative processes or international negotiations.