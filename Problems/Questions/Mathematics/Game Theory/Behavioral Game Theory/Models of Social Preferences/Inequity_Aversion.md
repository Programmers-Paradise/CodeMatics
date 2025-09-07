# Inequity Aversion

## Introduction
**Inequity Aversion** is a key concept in behavioral game theory that formalizes the human preference for fairness and the dislike of unequal outcomes. It challenges the classical assumption of pure self-interest by proposing that an individual's well-being depends not only on their own material payoff, but also on how that payoff compares to the payoffs of others. This concept is crucial for explaining why people often deviate from the predictions of traditional game theory in real-world scenarios, such as rejecting "unfair" offers in negotiations or choosing to cooperate when selfishness would seem more profitable.

## The Formal Model: Fehr-Schmidt Inequity Aversion
The most influential model of inequity aversion was developed by Ernst Fehr and Klaus Schmidt. It defines a player's utility as their own material payoff, minus a psychological "cost" or "disutility" for any inequality that exists. The model cleverly distinguishes between being behind and being ahead.

For a player $i$ in a two-player game with a payoff allocation $(x_i, x_j)$, their utility is:

$$U_i(x_i, x_j) = x_i - \alpha_i \max(x_j - x_i, 0) - \beta_i \max(x_i - x_j, 0)$$

The components are:
-   $x_i$: The player's own material payoff.
-   $\alpha_i \max(x_j - x_i, 0)$: The disutility from **disadvantageous inequality** (often called **envy**). This term is only active when the other player has more ($x_j > x_i$). The parameter $\alpha_i$ measures how much player $i$ dislikes being behind.
-   $\beta_i \max(x_i - x_j, 0)$: The disutility from **advantageous inequality** (often called **guilt**). This term is only active when player $i$ has more ($x_i > x_j$). The parameter $\beta_i$ measures how much player $i$ dislikes being ahead.

The model makes two key assumptions about these parameters based on experimental evidence:
1.  **Envy outweighs Guilt ($\alpha_i \ge \beta_i$)**: People dislike being behind more than they dislike being ahead.
2.  **No pleasure from being ahead ($0 \le \beta_i < 1$)**: People do not enjoy inequality that benefits them, but they also don't dislike it so much that they would give away everything to eliminate it.

## Example: Explaining Rejection in the Ultimatum Game
Inequity aversion provides a powerful explanation for the results of the **Ultimatum Game**.
**The Scenario**: A Proposer (P) offers a split of $10 to a Responder (R). If R accepts, the money is split. If R rejects, both get nothing.
-   **The Classical Prediction**: A purely self-interested Responder should accept any offer greater than zero.
-   **The Behavioral Finding**: Responders frequently **reject** low offers (e.g., an offer where R gets $2 and P gets $8).

**The Inequity Aversion Explanation:**
Let's analyze the Responder's choice when offered $2, using the Fehr-Schmidt utility function.
-   **If the Responder ACCEPTS the offer:**
    -   Their material payoff is $x_R=2$. The Proposer's is $x_P=8$.
    -   The Responder is suffering from disadvantageous inequality ($x_P > x_R$). Their utility is:
        $U_R(\text{Accept}) = x_R - \alpha_R(x_P - x_R) = 2 - \alpha_R(8 - 2) = \mathbf{2 - 6\alpha_R}$
-   **If the Responder REJECTS the offer:**
    -   Their material payoff is $x_R=0$. The Proposer's is $x_P=0$.
    -   The outcome is perfectly equal. Their utility is:
        $U_R(\text{Reject}) = 0 - \alpha_R(0) - \beta_R(0) = \mathbf{0}$

**The Rational Decision:** The Responder will reject the offer if the utility from rejecting is higher than the utility from accepting.

$$U_R(\text{Reject}) > U_R(\text{Accept}) \implies 0 > 2 - 6\alpha_R$$
$$6\alpha_R > 2 \implies \alpha_R > \frac{1}{3}$$

This analysis shows that if a Responder is sufficiently averse to being behind (if their "envy" parameter $\alpha$ is greater than 1/3), it is perfectly **rational** for them to reject the "unfair" $2 offer. The act of rejecting is not irrational; it is a rational choice made by an individual whose utility function includes a preference for fairness.

## Properties and Implications
-   **Explains "Irrational" Behavior**: Inequity aversion demonstrates how actions that seem irrational from a purely financial perspective (like rejecting free money) can be rational once social preferences are included in the utility function.
-   **Heterogeneity**: The parameters $\alpha$ and $\beta$ can vary between individuals, explaining why some people are more sensitive to fairness than others and why outcomes are not always uniform.
-   **Predictive Power**: By including these preferences, game theory can make much more accurate predictions of behavior in bargaining, social dilemmas, and labor market contexts.

## Applications
1.  **Economics**: Building more realistic models of **wage setting** (workers may withdraw effort or quit if they perceive their wage as unfair compared to others), **public goods contributions**, and **negotiations**.
2.  **Machine Learning and AI Ethics**: For designing AI agents that need to interact and cooperate with humans. An AI system that makes allocations or decisions that humans perceive as fair (i.e., that don't produce high inequity) will be more trusted and effective. This is a key concern in **AI Safety and Alignment**.
3.  **Behavioral Science**: The Fehr-Schmidt model is a primary theoretical tool for quantifying and studying fairness, envy, and guilt in human interactions.
4.  **Management**: Understanding that employees are motivated by fairness can inform more effective compensation structures and management policies within an organization.