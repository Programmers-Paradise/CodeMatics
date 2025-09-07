# Subgame Perfect Nash Equilibrium (SPNE)

## Introduction
The **Subgame Perfect Nash Equilibrium (SPNE)** is a crucial refinement of the Nash Equilibrium concept, specifically designed for analyzing **dynamic (sequential-move) games**. While a standard Nash Equilibrium describes a stable outcome, it can sometimes be "unreasonable" in a dynamic context because it may rely on players making **non-credible threats**—threats they would have no rational incentive to carry out.

SPNE solves this problem by requiring that players' strategies are optimal not just at the start of the game, but at every possible decision point as the game unfolds. This ensures that the equilibrium is based on sequentially rational choices and all threats are credible.

## The Problem with Nash Equilibrium: Non-Credible Threats
Consider a simple market entry game. An Entrant (Player 1) can either **Enter** a market or **Stay Out**. If they enter, the Incumbent (Player 2) can either **Fight** (e.g., start a price war) or **Accommodate**.
-   If the Entrant Stays Out, the payoffs are (0 for Entrant, 2 for Incumbent).
-   If the Entrant Enters and the Incumbent Accommodates, the payoffs are (1, 1).
-   If the Entrant Enters and the Incumbent Fights, the payoffs are (-1, -1).

This game has two Nash Equilibria:
1.  **(Enter, Accommodate)**: This seems plausible.
2.  **(Stay Out, Fight)**: This is also a Nash Equilibrium. If the Incumbent declares they will Fight, the Entrant's best response is to Stay Out (0 > -1). And if the Entrant Stays Out, the Incumbent's choice doesn't matter, so "Fight" is a valid best response.

However, the second equilibrium relies on a **non-credible threat**. If the Entrant were to actually call the Incumbent's bluff and Enter, it would be irrational for the Incumbent to Fight (payoff -1) instead of Accommodating (payoff 1). SPNE is the tool that eliminates such implausible equilibria.

## Definition of a Subgame and SPNE
-   **Subgame**: A subgame is a smaller part of the original game tree that begins at a single decision node and includes all subsequent nodes and branches that follow it.
-   **Subgame Perfect Nash Equilibrium**: A strategy profile is a Subgame Perfect Nash Equilibrium if the strategies constitute a Nash Equilibrium in **every subgame** of the original game.

## Finding the SPNE: Backward Induction
For finite games of perfect information, the SPNE is found using the algorithm of **backward induction**.
1.  **Start at the End**: Begin at the final decision nodes of the game tree.
2.  **Determine Optimal Last Moves**: For each of these final nodes, determine the optimal action for the player whose turn it is.
3.  **Move Up the Tree**: Move one step backward to the previous set of decision nodes. Assuming that all subsequent players will make the optimal choices you just determined, find the optimal action for the current player.
4.  **Repeat**: Continue this process, reasoning backward, until you reach the root of the tree. The path of optimal actions you have identified is the Subgame Perfect Nash Equilibrium.

## Example: The Stackelberg Duopoly
This is a classic dynamic game where two firms choose their production quantities sequentially. Firm 1 (the Leader) chooses its quantity, $q_1$, first. Firm 2 (the Follower) observes $q_1$ and then chooses its quantity, $q_2$.
-   Market price is given by $P = A - Q$, where total quantity is $Q=q_1+q_2$.
-   For simplicity, assume production cost is zero.

**Solution using Backward Induction:**

1.  **Solve the Follower's Problem (The last subgame)**: We start at the end. Firm 2 observes $q_1$ and chooses $q_2$ to maximize its own profit:

$$\max_{q_2} \pi_2 = P \cdot q_2 = (A - q_1 - q_2)q_2 = Aq_2 - q_1q_2 - q_2^2$$

$\quad$ Taking the derivative with respect to $q_2$ and setting it to zero gives Firm 2's best response function:

$$A - q_1 - 2q_2 = 0 \implies q_2^*(q_1) = \frac{A - q_1}{2}$$

3.  **Solve the Leader's Problem**: Firm 1, moving first, anticipates how Firm 2 will rationally react. It substitutes Firm 2's reaction function into its own profit function:

$$\max_{q_1} \pi_1 = (A - q_1 - q_2^*(q_1))q_1 = \left(A - q_1 - \frac{A - q_1}{2}\right)q_1$$ $$\pi_1 = \left(\frac{A - q_1}{2}\right)q_1 = \frac{A}{2}q_1 - \frac{1}{2}q_1^2$$

$\quad$    Taking the derivative with respect to $q_1$ and setting it to zero gives Firm 1's optimal choice:

$$\frac{A}{2} - q_1 = 0 \implies q_1^* = \frac{A}{2}$$

5.  **The SPNE Outcome**:
    -   The Leader (Firm 1) produces $q_1^* = A/2$.
    -   The Follower (Firm 2) observes this and produces $q_2^* = \frac{A - (A/2)}{2} = A/4$.
    The unique Subgame Perfect Nash Equilibrium is the strategy profile where the Leader produces $A/2$ and the Follower produces $A/4$.

## Properties
-   **Credibility**: SPNE eliminates non-credible threats by requiring strategies to be optimal at every stage of the game.
-   **Consistency**: The solution is sequentially rational; no player will ever have an incentive to deviate from their strategy as the game unfolds.
-   **Refinement of Nash Equilibrium**: Every SPNE is also a Nash Equilibrium, but not every Nash Equilibrium is subgame perfect. SPNE is a more restrictive and predictive concept for dynamic games.

## Applications
-   **Economics**: Modeling sequential competition, such as a dominant firm setting its price before smaller firms react, or analyzing bargaining and negotiation processes that happen over multiple rounds.
-   **Computer Science**: In Artificial Intelligence, backward induction is a foundational principle for solving turn-based games and is related to algorithms like Minimax.
-   **Political Science**: Analyzing legislative processes where one party proposes a bill and others react, or modeling international conflicts with escalating stages of action and reaction.