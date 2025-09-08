# Game Trees in Game Theory

## Introduction

A **game tree** is the standard way to represent a **sequential game** in game theory. It is a directed graph that provides a complete, visual map of a strategic interaction as it unfolds over time. The tree structure explicitly shows the sequence of moves, the choices available to players at each stage, the information they possess when making those choices, and the final outcomes. Game trees are the foundation for analyzing dynamic games and are essential tools in economics, political science, and especially artificial intelligence.

## The Anatomy of a Game Tree

A game tree is a graphical representation of a game in **extensive form**. Its key components are:

  - **Nodes**: Points in the game where events happen.
      - **Initial Node (Root)**: The single starting point of the game.
      - **Decision Nodes**: Labeled with the player whose turn it is to move.
      - **Terminal Nodes (Leaves)**: The endpoints of the game, representing a final outcome.
      - **Chance Nodes**: (Optional) Nodes where the outcome is determined by a random event (e.g., a dice roll or a card draw), with probabilities assigned to each possible branch.
  - **Edges (or Branches)**: Lines that connect the nodes, representing the actions or moves available to a player at a given decision node.
  - **Payoffs**: A vector of payoffs (one for each player) is attached to every terminal node, quantifying the outcome for all participants.

## Information in Game Trees

A crucial feature of a game tree is its ability to model the information available to players.

  - **Perfect Information**: A game has perfect information if every player, when making a decision, is perfectly aware of all events that have previously occurred. In a game tree, this means every decision node is in its own **information set**. Players always know exactly where they are in the game. Chess is a classic example.

  - **Imperfect Information**: A game has imperfect information if a player does not know the full history of play when making a decision. This is represented by grouping multiple decision nodes into a single **information set**, often shown with a dotted line. A player at an information set knows they are at one of the nodes within the set, but cannot distinguish between them. This is used to model simultaneous moves or hidden information (like in poker).

## Example: A Market Entry Game

**Scenario**: An Entrant (Player 1) decides whether to **Enter** a market or **Stay Out**. If they enter, the Incumbent (Player 2) can either start a price war (**Fight**) or share the market (**Accommodate**). This is a sequential game of perfect information.

**The Game Tree & Payoffs:**

```
            (Start)
               |
          P1 (Entrant)
         /          \
      Enter        Stay Out (Terminal Node)
     /                 \
 P2 (Incumbent)        (1, 10)  <- Payoffs (P1, P2)
   /      \
Fight    Accommodate (Terminal Node)
  |          |
(0, 0)      (2, 5)   <- Payoffs (P1, P2)
```

## Solution Methods for Game Trees

The structure of a game tree allows for systematic analysis to find a solution.

### Backward Induction

This is the primary method for solving finite games of perfect information. It involves reasoning from the end of the game to the beginning.

  - **In the example above**:
    1.  **Analyze Player 2's Move**: We start at Player 2's decision node. P2 must choose between "Fight" (payoff of 0) and "Accommodate" (payoff of 5). A rational P2 will choose **Accommodate**.
    2.  **Analyze Player 1's Move**: Player 1 anticipates P2's rational response. P1 knows that choosing "Enter" will ultimately lead to a payoff of **2**. If P1 chooses "Stay Out," their payoff is **1**.
    3.  **The Solution**: Comparing the outcomes, Player 1 will choose **Enter**. The predicted outcome, found by backward induction, is that the Entrant will Enter and the Incumbent will Accommodate. This is the **Subgame Perfect Nash Equilibrium (SPNE)**.

### Minimax Algorithm

For two-player, zero-sum games, the **Minimax algorithm** is a recursive algorithm that explores the game tree to find the optimal move. It assumes the opponent will always act to minimize the player's payoff, and it chooses the move that maximizes the payoff in this worst-case scenario. This is the foundational algorithm for classic game-playing AI.

## Applications

1.  **Artificial Intelligence**: Game trees are the core data structure for AI in deterministic, perfect-information games. Algorithms like **Minimax** and its optimization, **Alpha-Beta Pruning**, search the game tree to find the best moves in games like **Chess**, **Checkers**, and **Tic-Tac-Toe**. Modern algorithms like **Monte Carlo Tree Search** (used in AlphaGo) also build and explore a game tree.
2.  **Economics**: To model and analyze sequential business decisions, such as a firm's choice to invest in a new technology and its competitor's subsequent reaction, or the process of bargaining and negotiation.
3.  **Political Science**: For modeling legislative processes (e.g., one party proposes a bill, another proposes an amendment), international conflicts with escalating steps, and deterrence strategies.
4.  **Philosophy**: Used in logic to analyze sequences of arguments and counter-arguments.