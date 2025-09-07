# Belief Learning

## Introduction
**Belief learning** is a major class of learning models in behavioral game theory. These models provide a framework for understanding how players form expectations about their opponents' behavior and how they adapt their own strategies in response. Unlike simpler reinforcement learning models where players just repeat what has worked well in the past, belief learning models portray players as more thoughtful agents who try to "figure out" their opponents and then play a best response to their beliefs. This approach is crucial for explaining how players learn to play equilibria in complex strategic situations.

## The Core Idea: Best Responding to Beliefs
The belief learning process consists of two distinct stages at each step of a repeated interaction:

1.  **Belief Formation**: The player observes the history of their opponents' actions and uses this information to form a belief about what their opponents will do in the next round.
2.  **Action Selection**: The player then chooses the action that is their **best response** to this belief—that is, the action that maximizes their own expected payoff, assuming their belief about the opponent is correct.

There are two main families of belief learning models, which differ in what the player is trying to learn about.

## Two Major Types of Belief Learning Models

### 1. Learning About an Opponent's Strategy (Fictitious Play)
In this type of model, players are trying to learn the **mixed strategy** that their opponent is playing.
-   **Belief Formation**: The player's belief is simply the **empirical frequency** of the opponent's past actions.
-   **Example (Fictitious Play)**: Suppose you are playing a game against an opponent who has played "Rock" 60 times, "Paper" 30 times, and "Scissors" 10 times over the last 100 rounds. Your belief under Fictitious Play is that in the next round, your opponent will play Rock with 60% probability, Paper with 30%, and Scissors with 10%. You would then calculate the expected payoff of your own actions (Rock, Paper, Scissors) against this belief and choose the one that is highest.

### 2. Learning About an Opponent's Type (Bayesian Learning)
In this more sophisticated model, players are trying to learn about an opponent's hidden private information, or their **"type."** A player's type determines their preferences and payoffs.
-   **Belief Formation**: Players start with a **prior** probability distribution over their opponents' possible types. As they observe their opponents' actions, they use **Bayes' Rule** to update this prior into a **posterior** belief.
-   **Action Selection**: The player chooses the action that maximizes their expected utility, averaged over their posterior beliefs about the opponent's type.

## Example: Bayesian Learning in a Coordination Game
**Scenario**: Player 1 is playing a coordination game against Player 2. Player 2 can be one of two types: **Type H** (who strongly prefers to coordinate on High) or **Type L** (who has a slight preference for coordinating on Low). Player 1 does not know Player 2's type.

**1. Initial Beliefs (Prior)**: Player 1 starts with a prior belief that there's a 70% chance Player 2 is Type H and a 30% chance they are Type L.

$$\mu_0(\text{Type H}) = 0.7, \quad \mu_0(\text{Type L}) = 0.3$$

**2. Player 1's Model of Opponent's Strategy (Likelihoods)**: Player 1 has a model of how each type is likely to behave.
-   If Player 2 is Type H: $P(\text{plays H}|\text{Type H}) = 0.8$, $P(\text{plays L}|\text{Type H}) = 0.2$.
-   If Player 2 is Type L: $P(\text{plays H}|\text{Type L}) = 0.4$, $P(\text{plays L}|\text{Type L}) = 0.6$.

**3. Observation**: In the first round, Player 1 observes Player 2 choosing action **H**.

**4. Belief Updating (Posterior)**: Player 1 uses Bayes' Rule to update their belief. First, they calculate the total probability of observing the action H:

$$P(\text{H}) = P(\text{H}|\text{Type H})\mu_0(\text{Type H}) + P(\text{H}|\text{Type L})\mu_0(\text{Type L})$$
$$P(\text{H}) = (0.8)(0.7) + (0.4)(0.3) = 0.56 + 0.12 = 0.68$$

Now, Player 1 updates their belief about Player 2 being Type H:

$$\mu_1(\text{Type H}) = \frac{P(\text{H}|\text{Type H})\mu_0(\text{Type H})}{P(\text{H})} = \frac{0.8 \times 0.7}{0.68} \approx 0.824$$

After seeing Player 2 play H just once, Player 1's belief that the opponent is the H-preferring type has increased from 70% to 82.4%. Player 1 would now use this new, updated belief to guide their own strategy in the next round.

## Properties and Implications
-   **Convergence to Nash Equilibrium**: Under certain conditions, the beliefs and strategies of players using models like Fictitious Play can converge over time to a **Nash Equilibrium** of the game. This provides a dynamic, adaptive story for how rational players might reach an equilibrium through trial and error.
-   **Bounded Rationality**: These models formalize the idea of bounded rationality. Players do not need to perform complex, infinite chains of reasoning; they simply react based on the history they have observed.
-   **Self-Confirming Equilibria**: In some cases, players' beliefs can lead them to play strategies that, in turn, generate observations that confirm their initial (and possibly incorrect) beliefs. This can lead to stable but suboptimal outcomes.

## Applications
1.  **Economics**: Modeling how firms in an oligopoly learn their competitors' pricing strategies over time, or how consumers learn about the quality of a new product.
2.  **Machine Learning**: Designing multi-agent systems where AI agents must learn to predict and respond to the behavior of other agents (human or AI) through repeated interactions.
3.  **Political Science**: Analyzing how political actors update their beliefs about their opponents' intentions or resolve during a negotiation or conflict.
4.  **Behavioral Biology**: Understanding how animals learn to adapt their foraging or mating strategies based on past experiences with competitors.