# Extensive Form in Game Theory

## Introduction

The **Extensive Form** is a fundamental way of representing a game in game theory that explicitly details its dynamic and sequential structure. Unlike the normal form, which uses a matrix to represent simultaneous choices, the extensive form uses a **game tree** to illustrate the sequence of moves, the choices available to players at each stage, what each player knows when they make a choice, and the final payoffs. This representation is crucial for analyzing strategic interactions where the order of play and the flow of information are critical, such as in chess, negotiations, or multi-stage business decisions.

## The Anatomy of an Extensive Form Game (The Game Tree)

The extensive form is visualized as a game tree, which consists of the following components:

  - **Nodes**: These are the points where events happen in the game.
      - **Initial Node (or Root)**: The starting point of the game.
      - **Decision Nodes**: Points where a player must make a choice. Each decision node is labeled with the player whose turn it is to move.
      - **Terminal Nodes (or Leaves)**: The end points of the game. Each terminal node represents a final outcome.
  - **Branches**: These are the lines connecting the nodes, representing the actions a player can take at a decision node.
  - **Payoffs**: A vector of payoffs (one for each player) is assigned to every terminal node, quantifying the outcome for each player.

## Information in the Extensive Form

A key feature of the extensive form is its ability to model what players know when they make a move.

  - **Perfect Information**: A game has perfect information if every player, when making a decision, knows the complete history of the game up to that point. In a game tree, this means every decision node is its own **information set**. Players always know exactly where they are.

      - *Examples*: Chess, Go, Tic-Tac-Toe.

  - **Imperfect Information**: A game has imperfect information if at least one player does not know the full history of play. This is represented by grouping two or more decision nodes into a single **information set** (often drawn with a dotted line). A player knows they are at one of the nodes within the set, but cannot distinguish between them.

      - *Examples*: Poker (players have hidden cards), simultaneous-move games where players act without knowing the other's choice.

## Example: A Sequential Market Entry Game

Consider a simple two-player extensive form game of perfect information.

  - **Player 1** (the Incumbent firm) first chooses to either fight a new entrant with a **Price War** or **Accommodate** them.
  - **Player 2** (the Entrant firm), having observed Player 1's choice, then decides to **Enter** the market or **Stay Out**.

The game tree and payoffs (profits) are as follows:

```
          (Start)
             |
           P1 (Incumbent)
         /          \
  Price War        Accommodate
      /                 \
   P2 (Entrant)        P2 (Entrant)
   /      \            /      \
Enter   Stay Out      Enter   Stay Out
  |         |           |         |
(-1, -1)   (2, 0)       (1, 1)    (3, 0)
```

*(Payoffs: (P1's Profit, P2's Profit))*

## Solving with Backward Induction

For finite games of perfect information, the solution can be found using **backward induction**.

1.  **Start at the End**: Analyze the last decisions in the game.

      - **Right Subgame**: If Player 1 chooses to "Accommodate," Player 2 must decide. Player 2 compares the payoff from "Enter" (1) to "Stay Out" (0). A rational Player 2 will choose **Enter**.
      - **Left Subgame**: If Player 1 chooses "Price War," Player 2 must decide. Player 2 compares the payoff from "Enter" (-1) to "Stay Out" (0). A rational Player 2 will choose **Stay Out**.

2.  **Move Up the Tree**: Now analyze Player 1's decision, knowing how Player 2 will rationally respond to each choice.

      - Player 1 knows that if they choose "Accommodate," Player 2 will "Enter," leading to a payoff of **1** for Player 1.
      - Player 1 knows that if they choose "Price War," Player 2 will "Stay Out," leading to a payoff of **2** for Player 1.

3.  **Find the Optimal Path**: Player 1 compares their resulting payoffs (1 vs. 2). A rational Player 1 will choose **Price War**.

The predicted outcome of the game is that the Incumbent will choose "Price War" and the Entrant will "Stay Out." This outcome is a **Subgame Perfect Nash Equilibrium**.

## Solution Concepts for Extensive Form Games

  - **Backward Induction**: The step-by-step process of reasoning backward from the end of a game to determine the optimal sequence of moves.
  - **Subgame Perfect Nash Equilibrium (SPNE)**: A refinement of the Nash Equilibrium concept for sequential games. An SPNE is a strategy profile that constitutes a Nash Equilibrium in *every subgame* of the original game. This is a powerful concept because it eliminates non-credible threats. In the example above, "Price War" is a credible threat because it is the rational choice for Player 1.

## Applications

1.  **Economics**: Analyzing sequential business decisions, such as market entry, capacity expansion, and bargaining negotiations.
2.  **Artificial Intelligence**: The extensive form is the basis for game-playing AI. Algorithms like **Minimax** and **Monte Carlo Tree Search** (used in AlphaGo) explore the game tree to find optimal moves.
3.  **Political Science**: Modeling legislative processes, international negotiations, and military conflicts where the sequence of actions is critical.
4.  **Operations Research**: Optimizing multi-stage projects and decision-making under uncertainty.