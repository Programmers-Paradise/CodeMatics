# Social Preferences

## Introduction
**Social preferences** are a core concept in behavioral game theory and behavioral economics that describe why individuals, in strategic situations, often act in ways that cannot be explained by pure self-interest. While classical game theory assumes players are motivated solely by maximizing their own material payoff, social preferences acknowledge that people's utility is often dependent on the outcomes, intentions, and well-being of others. Incorporating concepts like altruism, fairness, and reciprocity provides a much more realistic and psychologically grounded framework for understanding human decision-making.

## Moving Beyond Pure Self-Interest
The traditional model of a rational agent, *homo economicus*, assumes that a player's utility is a function only of their own payoff: $U_i = f(x_i)$. However, decades of experimental evidence have shown that this model is incomplete. Social preferences modify this by assuming that a player's utility also includes the payoffs of others: $U_i = f(x_i, x_j, \dots)$.

## The Main Types of Social Preferences

### 1. Altruism
Altruism is the concern for the welfare of others. A player with altruistic preferences experiences an increase in their own utility when another person's payoff increases. They are willing to incur a personal cost to help someone else.
-   **Evidence**: The **Dictator Game**, where one player (the "Dictator") is given a sum of money and can choose to give any amount to a silent, powerless recipient. The fact that Dictators consistently give a non-zero amount of money, even with no fear of punishment, is considered evidence of pure altruism.

### 2. Fairness and Inequity Aversion
This is a powerful preference for equitable outcomes and a dislike for inequality. People are often willing to sacrifice their own payoff to achieve a fairer distribution.
-   **The Fehr-Schmidt Model**: A famous formalization of inequity aversion. It models a player's utility as:
    $U_i(\mathbf{x}) = x_i - \alpha_i \max(x_j - x_i, 0) - \beta_i \max(x_i - x_j, 0)$
    This means a player's utility is their own payoff ($x_i$), minus a penalty for being behind someone else (envy, weighted by $\alpha$), and a smaller penalty for being ahead of someone else (guilt, weighted by $\beta$).

### 3. Reciprocity
Reciprocity is the tendency to respond to the perceived intentions of others in kind.
-   **Positive Reciprocity**: The desire to be kind to those who have been kind to you. Players will reward cooperative and fair actions, even when it is costly to do so.
    -   **Evidence**: The **Trust Game**. In this game, an Investor can send money to a Trustee. The amount is tripled. The Trustee can then choose to send some of the money back. The fact that many Trustees return a significant portion of the money, even though they could keep it all, is evidence of positive reciprocity.
-   **Negative Reciprocity**: The desire to punish those who have been unkind or unfair, even if the punishment is costly to oneself and provides no material benefit.
    -   **Evidence**: The **Ultimatum Game**. A Proposer offers a split of money, and a Responder can accept or reject. If rejected, both get nothing. The fact that Responders frequently reject low, "unfair" offers is a classic example of negative reciprocity. They are willing to sacrifice their own payoff to punish the Proposer for an unfair action.

### 4. Spite or Envy
The opposite of altruism. A player with spiteful preferences experiences an increase in their utility when another person's payoff decreases. They are willing to pay a cost simply to harm someone else.

## Implications for Game Theory
Incorporating social preferences allows game theory to explain a wide range of behaviors that are anomalies in the classical framework.
-   It explains why people **cooperate** in the Prisoner's Dilemma more often than predicted.
-   It explains why people make and reject **fair/unfair offers** in the Ultimatum Game.
-   It explains why people **contribute to public goods** and are willing to pay to **punish free-riders**.
-   It shows that a "rational" decision depends on a utility function that may include far more than just monetary gain.

## Applications
1.  **Economics**: Building more realistic models of labor markets (the importance of fair wages), public goods contributions, charitable giving, and contract negotiations.
2.  **Machine Learning and AI Ethics**: Designing AI agents that can cooperate effectively with humans. An AI that understands and can respond to social norms like fairness and reciprocity will be more successful and better aligned with human values.
3.  **Management Science**: Understanding employee motivation. A sense of fairness in compensation and treatment can be a more powerful motivator than pure financial incentives.
4.  **Public Policy**: Designing policies that leverage social preferences. For example, publicizing who has contributed to a public good can increase contributions by appealing to a desire for a good reputation.