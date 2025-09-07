# Experience-Weighted Attraction (EWA)

## Introduction
**Experience-Weighted Attraction (EWA)** is a sophisticated **learning model** from behavioral game theory, designed to provide a unified and psychologically plausible framework for how people adapt their strategies in games. Developed by Colin Camerer and Teck-Hua Ho, the EWA model is a flexible hybrid that generalizes and nests the two primary families of learning models: **reinforcement learning** and **belief-based learning**. By doing so, it can capture a wider range of observed human behavior in experimental games, bridging the gap between simpler theories and the complex reality of strategic decision-making.

## The EWA Model: A Hybrid Approach
The core idea of the EWA model is that each player maintains a numerical "attraction score" for every strategy they have available. After each round of play, the attractions for **all** strategies are updated based on the experience of that round, and these updated attractions guide the choice of strategy in the next round.

### 1. The Attraction Score
The central component is the attraction, $A_i^j(t)$, for player $i$'s strategy $j$ at time $t$. This score represents the cumulative appeal of that strategy.

### 2. The Update Process
After round $t$, in which player $i$ played strategy $s_i(t)$ and received a payoff of $\pi_i(t)$, the attraction for every strategy $j$ is updated according to a weighted average of its past attraction and the new payoff information:

$$A_i^j(t) = \frac{\phi \cdot N(t-1) \cdot A_i^j(t-1) + [\delta + (1-\delta)I(s_i^j, s_i(t))] \cdot \pi_i(s_i^j, s_{-i}(t))}{N(t)}$$

Where:
-   $N(t)$ is a measure of the "weight" of past experience, which also updates: $N(t) = \phi \cdot N(t-1) + 1$.
-   $\pi_i(s_i^j, s_{-i}(t))$ is the payoff player $i$ **would have received** by playing strategy $j$ against the opponents' actual moves.
-   $I(\cdot)$ is an indicator function, which is 1 if strategy $j$ was the strategy actually played in round $t$, and 0 otherwise.

### 3. The Key Parameters
The model's behavior is governed by two key psychological parameters:
-   **$\phi$ (phi): The "Forgetting" or Depreciation Factor.** This parameter (between 0 and 1) discounts the weight of past attractions. A high $\phi$ means past experience is heavily weighted, while a low $\phi$ means the player has a short memory and focuses more on recent outcomes.
-   **$\delta$ (delta): The "Imagination" or "What-if" Factor.** This parameter (between 0 and 1) controls the weight given to the payoffs of strategies that were **not** chosen in a round (the "foregone payoffs").

### 4. The Choice Rule
After updating the attractions, the probability of player $i$ choosing strategy $j$ in the next round, $t+1$, is given by a **logit or softmax function**:

$$P_i^j(t+1) = \frac{e^{\lambda \cdot A_i^j(t)}}{\sum_{k=1}^{m} e^{\lambda \cdot A_i^k(t)}}$$

Here, $\lambda$ is a "response sensitivity" parameter that determines how closely players stick to the strategy with the highest attraction.

## Unifying Reinforcement and Belief Learning
The EWA model's main theoretical contribution is its ability to nest the two major classes of learning models as special cases by adjusting the $\delta$ parameter.

-   **Case 1: EWA as Reinforcement Learning (when $\delta=0$)**: If the "imagination" factor is zero, the term for foregone payoffs disappears. The model only updates the attraction of the strategy that was actually played. This is the logic of a simple **reinforcement learning** model, where players only learn from the outcomes of actions they actually take.

-   **Case 2: EWA as Belief-Based Learning (when $\delta=1$)**: If the "imagination" factor is one, the model gives equal weight to the actual payoff and all the foregone payoffs. This means the player considers what they *would have* earned with every possible choice. Under certain conditions for the other parameters, this behavior mimics that of **belief-based models** like Fictitious Play, where players best-respond to a belief formed from the full history of play.

## Conceptual Example
Imagine you are playing a game with two options, A and B. In the first round, you choose A and get a payoff of 10. The payoff you *would have* gotten for choosing B was 2.
-   A **reinforcement model ($\delta=0$)** would strongly increase the attraction of A and leave B's attraction unchanged (or let it decay).
-   A **belief-based model ($\delta=1$)** would increase A's attraction by 10 and also increase B's attraction by 2. It learns from both real and counterfactual outcomes.
-   An **EWA model (with $0 < \delta < 1$)** does a mix of both. It strongly reinforces the chosen action A, but it also gives some smaller weight to the experience of the foregone action B.

## Applications
1.  **Experimental Economics**: The primary application of EWA is for analyzing data from laboratory experiments. It often provides a better statistical fit to the round-by-round choices of human subjects than either pure reinforcement or belief-based models, suggesting that human learning is a hybrid of both processes.
2.  **Agent-Based Modeling**: Used to create more realistic, adaptive agents in computational models for finance (e.g., modeling trader behavior), economics, and social simulations.
3.  **Artificial Intelligence**: The principles of EWA can inform the design of more human-like learning algorithms for AI agents that need to adapt in strategic environments.

## Conclusion
Experience-Weighted Attraction is a landmark model in behavioral game theory. It provides a unified and psychologically plausible framework for understanding how people learn and adapt their strategies in games. By bridging the gap between the simpler theories of reinforcement and belief-based learning, EWA offers a more nuanced and often more accurate account of how real-world strategic behavior evolves through experience.