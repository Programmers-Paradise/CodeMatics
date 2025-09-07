# Cognitive Hierarchy and Level-k Thinking
## Introduction
**Cognitive hierarchy** and **level-k thinking** are influential frameworks in behavioral game theory that model how people reason strategically. These models depart from the classical assumption of perfect rationality, where players are assumed to instantly compute a complex Nash Equilibrium. Instead, they propose that strategic thinking is an iterative process of finite depth, where players form beliefs based on their predictions of what lower-level reasoners will do. This approach provides a more psychologically plausible and often more accurate account of human behavior in novel strategic situations.

## The Foundational Model: Level-k Thinking
The level-k model formalizes the idea that players differ in their "depth" of strategic thought. It describes a hierarchy of player types.

-   **Level-0 (L0) Players**: These are the anchor of the hierarchy. They are **non-strategic** and do not reason about the game at all. Their actions are based on a simple, instinctive rule, often assumed to be a **random (uniform) choice** over their available actions.

-   **Level-1 (L1) Players**: These players believe that **all other players are Level-0**. They then choose the action that is their **best response** to the random behavior of the L0 players.

-   **Level-2 (L2) Players**: These players believe that **all other players are Level-1**. They anticipate what an L1 player will do and then play their best response to that anticipated action.

-   **Level-k (Lk) Players**: In general, a Level-k player believes that **all other players are Level-(k-1)** and chooses their best response accordingly.

## A Refinement: The Cognitive Hierarchy (CH) Model
The Cognitive Hierarchy model is a more sophisticated version of the level-k model. It relaxes the rigid assumption that an Lk player thinks everyone is L(k-1).

-   **The CH Innovation**: The CH model assumes that a Level-k player best-responds to a **distribution** of all lower-level types (L0, L1, ..., L(k-1)), not just L(k-1).
-   **The Distribution of Types**: The model assumes the population is composed of a mix of these different levels, often following a Poisson distribution. This typically provides a better statistical fit to experimental data than the simpler level-k model.

## Example: The "Beauty Contest" Game
This is the canonical game for illustrating level-k thinking.
**The Game**: A large group of people simultaneously chooses a number from 0 to 100. The winner is the person whose number is closest to a target value, which is **2/3 of the average** of all numbers chosen.

**The Reasoning Cascade:**
-   **Level-0 (Non-strategic) thinking**: "I don't know what to do, so I'll pick a number at random." The average of random numbers between 0 and 100 is **50**.

-   **Level-1 thinking**: "I assume everyone else is a Level-0 player, so they will all choose randomly, and the average will be 50. My target is 2/3 of that average. So I will choose **(2/3) * 50 ≈ 33**."

-   **Level-2 thinking**: "I assume everyone else is a Level-1 player, so they will all choose 33. The average will therefore be 33. My target is 2/3 of that average. So I will choose **(2/3) * 33 ≈ 22**."

-   **Level-3 thinking**: "I assume everyone else is a Level-2 player, so they will all choose 22. My target is 2/3 of that average. So I will choose **(2/3) * 22 ≈ 15**."

This process of iterative reasoning continues, with the choices getting closer and closer to zero.

### The Nash Equilibrium vs. The Behavioral Finding
-   **The Nash Equilibrium**: The only Nash Equilibrium of this game is for **every player to choose 0**. If everyone chooses 0, the average is 0, and 2/3 of the average is 0. No one can do better by deviating.
-   **The Behavioral Finding**: In real experiments, the winning number is never 0. The distribution of guesses usually peaks around 22 and 33. This provides strong evidence that most people engage in only one or two levels of reasoning, making the level-k model a much better predictor of human behavior than the Nash Equilibrium concept in this context.

## Properties and Implications
-   **Bounded Rationality**: These are premier models of boundedly rational strategic thinking. They capture the idea that cognitive effort is limited.
-   **Explains Initial Play**: They are particularly powerful for explaining behavior in the **first round** of a game, before players have had a chance to learn from experience.
-   **Predictive Power**: In many experimental games, especially those involving coordination or guessing, level-k and CH models predict the actual outcomes far better than the standard Nash Equilibrium.

## Applications
1.  **Economics**: Explaining behavior in financial markets (where investors are trying to guess what other investors will guess about a stock's value), auctions, and bargaining games.
2.  **Political Science**: Modeling how voters or politicians might reason about the choices of others in an election.
3.  **Machine Learning**: Designing more human-like AI agents for strategic games. An AI that can model its human opponent as a level-k thinker might be more effective than one that assumes a perfectly rational (Nash Equilibrium) opponent.
4.  **Management**: Understanding how managers in a company might make decisions based on their predictions of what other departments or competing firms will do.