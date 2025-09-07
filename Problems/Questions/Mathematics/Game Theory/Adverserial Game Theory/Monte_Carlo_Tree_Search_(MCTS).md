# Monte Carlo Tree Search (MCTS)

## Introduction
**Monte Carlo Tree Search (MCTS)** is a state-of-the-art heuristic search algorithm for decision-making in complex environments. It is most famous for its revolutionary success in computer game playing, particularly in games with enormous search spaces like Go. Unlike traditional game AI algorithms like Minimax, which attempt to explore the game tree exhaustively, MCTS builds an asymmetric search tree by intelligently balancing exploration and exploitation. It does this by combining the principles of random sampling (Monte Carlo simulation) with the strategic guidance of a tree search.

## The MCTS Algorithm: A Four-Step Loop
MCTS does not build the entire game tree. Instead, it runs thousands or millions of simulations (or "playouts") to gradually grow a search tree, focusing its effort on the most promising parts of the game. Each simulation consists of four main steps:

### 1. Selection
Starting from the root node (the current game state), the algorithm traverses down the existing tree. At each node, it selects the child node that has the highest score according to a selection policy. The most common policy is **UCT (Upper Confidence Bound 1 applied to Trees)**, which balances two goals:
-   **Exploitation**: Choosing moves that have a high win rate so far.
-   **Exploration**: Choosing moves that have been explored less often.

The UCT formula for selecting a child node $i$ from a parent node $p$ is:

$$\text{UCT Score} = \underbrace{\frac{w_i}{n_i}}_{\text{Exploitation (Win Rate)}} + \underbrace{c \sqrt{\frac{\ln N_p}{n_i}}}_{\text{Exploration (Uncertainty)}}$$

Where:
-   $w_i$ is the number of wins for child node $i$.
-   $n_i$ is the number of times child node $i$ has been visited.
-   $N_p$ is the number of times the parent node $p$ has been visited.
-   $c$ is an exploration constant that can be tuned.

This process continues until a leaf node of the current tree is reached.

### 2. Expansion
If the selected leaf node is not a terminal game state (i.e., the game is not over), the algorithm **expands** the tree by creating one or more child nodes representing possible moves from that state.

### 3. Simulation (Rollout)
From one of these new child nodes, the algorithm runs a **simulation**. It plays out the rest of the game by choosing moves for both players until a final outcome (win, loss, or draw) is reached. In a basic MCTS, these simulation moves are chosen **randomly** and very quickly. This is the "Monte Carlo" part of the algorithm.

### 4. Backpropagation (Backup)
The result of the simulation (e.g., +1 for a win, -1 for a loss, 0 for a draw) is then **propagated backwards** up the tree. All the nodes that were on the path from the root to the newly expanded node have their statistics updated:
-   Their **visit count** ($n$) is incremented.
-   Their **win count** ($w$) is updated based on the simulation's outcome.

This entire four-step process is repeated many times. With each simulation, the tree grows, and the win/visit statistics become more reliable estimates of the true value of each move.

## Making a Final Decision
After the allotted time or number of simulations is complete, the AI makes its final move. It looks at the direct children of the root node and chooses the move corresponding to the child that is the most **robust**. This is typically the child with the **highest visit count**, as it has been explored the most and its win rate is the most reliable.

## Example: Conceptual Game of Tic-Tac-Toe
1.  **Simulation 1**:
    -   **Selection & Expansion**: The tree is just the root. We expand it and choose a new node to explore, e.g., placing our 'X' in the center square.
    -   **Simulation**: From this new board state, we play random moves for 'O' and 'X' until the game ends. Let's say 'X' wins.
    -   **Backpropagation**: The result (+1 for a win) is passed back up. The "center square" node now has stats: (1 win / 1 visit). The root has stats: (1 win / 1 visit).
2.  **Simulation 2**:
    -   **Selection**: We start at the root again. The UCT formula might lead us to explore a different, unvisited move, e.g., placing our 'X' in a corner.
    -   **Expansion/Simulation**: A random rollout from this corner move results in a draw.
    -   **Backpropagation**: The "corner" node gets stats: (0 wins / 1 visit). The root's stats are updated to (1 win / 2 visits).
3.  **After thousands of simulations**: The tree will be much larger, with the visit counts reflecting the algorithm's belief about the best moves. The move with the highest visit count from the root will be chosen as the final move.

## Properties and Strengths
-   **Asymmetric Tree Growth**: MCTS does not explore the game tree uniformly. It focuses its computational resources on the more promising branches, creating a lopsided but intelligent search.
-   **Anytime Algorithm**: It can be stopped at any time and will return the best move found so far. The more time it runs, the better its decision becomes.
-   **No Need for an Evaluation Function**: Basic MCTS does not need a complex heuristic function to evaluate non-terminal game states; it only needs to know the result at the end of a random game.
-   **Parallelizable**: The simulation step is independent for each playout, making MCTS highly suitable for parallelization on multi-core processors.

## Applications
1.  **Game AI**: MCTS is the state-of-the-art algorithm for a wide range of board games, especially those with high branching factors. It was the core search component of **AlphaGo**, which famously defeated the world's best Go players. In AlphaGo, the random rollouts were replaced by a deep neural network that acted as a powerful "intuition" to guide the search.
2.  **Robotics**: Used for motion planning and decision-making under uncertainty, where a robot must choose a sequence of actions to reach a goal.
3.  **General Planning Problems**: Applicable to a wide variety of optimization and planning problems that can be modeled as a search through a decision tree, such as in logistics and resource allocation.