# Learning Models

## Introduction
**Learning models** in behavioral game theory provide a dynamic framework for understanding how players choose and adapt their strategies over time. While classical game theory often assumes players can instantly deduce the optimal (equilibrium) strategy, behavioral game theory recognizes that humans typically learn through experience. Learning models formalize this process, describing how players update their strategies based on the history of play and the payoffs they receive. This provides a crucial bridge between the static predictions of equilibrium analysis and the dynamic, adaptive nature of real human behavior in strategic situations.

## The Two Main Families of Learning Models
Learning models move away from the assumption of perfect, deductive rationality and instead model players as boundedly rational agents who learn inductively. There are two primary families of these models, based on what information players use to adapt.

### 1. Reinforcement Learning
Reinforcement models are based on the simple psychological principle that people tend to repeat actions that have led to good outcomes.
-   **Core Idea**: "Actions that were successful in the past are more likely to be chosen in the future."
-   **Mechanism**: Players maintain a numerical "propensity" or "attraction score" for each of their available strategies. After each round of the game, the propensity of the strategy that was actually played is increased (reinforced) by the payoff that was received. Strategies that were not chosen are sometimes "forgotten" or have their propensities decay over time.
-   **Choice Rule**: In the next round, the probability of choosing a particular strategy is an increasing function of its current propensity.
-   **Example (Simple Q-Learning Update)**: A simple reinforcement update for the value (Q-value) of taking action $a$ in state $s$ after receiving a reward $R$ is:

$$Q(s, a) \leftarrow Q(s, a) + \alpha(R - Q(s, a))$$


   where $\alpha$ is the learning rate. This is a foundational concept in the field of Reinforcement Learning in AI.

### 2. Belief-Based Learning
Belief-based models assume players are slightly more sophisticated. They try to form explicit beliefs about what their opponents will do, and then they choose their own best response to those beliefs.
-   **Core Idea**: "I will try to figure out your strategy, and then I'll play my best move against it."
-   **Mechanism**: Players keep track of the historical frequency of their opponents' past actions. They then use this history to form a belief about their opponents' strategy in the next round.
-   **Choice Rule**: The player calculates the expected payoff for each of their own actions against this belief and chooses the action that maximizes their expected payoff.
-   **Example (Fictitious Play)**: A well-known belief-based model where a player's belief about their opponent's next move is simply the empirical frequency of their opponent's past moves. If an opponent has played "Rock" 60 times out of 100, the player assumes the opponent will play "Rock" with 60% probability in the next round.

## Conceptual Example: A Coordination Game
Consider a simple coordination game where two players must choose Left (L) or Right (R), and the payoffs for coordinating are (L,L) -> (2,1) and (R,R) -> (1,2).

-   **A Reinforcement Learner**: A player using reinforcement learning might start by choosing randomly. If they happen to play (L,L) and receive a payoff of 2, the "propensity" to play L is strongly reinforced. Over time, whichever equilibrium is reached first by chance will tend to become "locked in" as the reinforced actions become more and more likely to be chosen.

-   **A Belief-Based Learner**: A player using fictitious play will watch their opponent. If their opponent has played L in 3 of the last 4 rounds, the player will form a belief that the opponent is likely to play L again. Their best response to this belief is to also play L to coordinate. This can also lead to convergence on an equilibrium.

## Key Concepts and Properties
-   **Bounded Rationality**: Learning models are the primary way of formalizing bounded rationality in dynamic settings. They do not require players to have complete knowledge of the game or unlimited computational power.
-   **Convergence to Equilibrium**: A key finding is that, under certain conditions, the strategies of players using these learning models can converge over time to a **Nash Equilibrium** of the stage game. This provides a dynamic, adaptive justification for the equilibrium concept, suggesting how players might arrive at a stable outcome through trial and error.
-   **Exploration vs. Exploitation**: A central trade-off, especially in reinforcement models. Players must balance trying out new strategies to see if they are better (**exploration**) with sticking to the strategies that have performed well so far (**exploitation**).

## Hybrid Models: Experience-Weighted Attraction (EWA)
More advanced models have been developed that combine the features of both reinforcement and belief-based learning. **Experience-Weighted Attraction (EWA) learning** is a sophisticated hybrid model that often provides a better fit to experimental data from human subjects. It maintains propensities for all strategies (even those not chosen) and includes a "forgetting" factor for past experiences.

## Applications
1.  **Economics**: Primarily used in **experimental economics** to explain how real human subjects learn to play games in a laboratory setting. They can explain convergence towards, or sometimes away from, Nash equilibria.
2.  **Machine Learning**: The entire field of **Reinforcement Learning (RL)** is a sophisticated application of learning models. Algorithms like Q-Learning and modern deep reinforcement learning are used to train AI agents to master complex games (like Go or video games) and solve control problems (like robotics) through trial-and-error learning.
3.  **Evolutionary Biology**: To model how individual organisms might learn and adapt their behavior within their own lifetime, as opposed to the generational timescale of evolutionary game theory.