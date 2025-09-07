# The Trust Game

## Introduction
The **Trust Game** is a foundational experiment in behavioral game theory designed to measure the concepts of **trust** and **trustworthiness (or positive reciprocity)** in strategic interactions. It involves two players who can choose to cooperate for a potential mutual gain or act selfishly. The game's power lies in its ability to elegantly separate these two behaviors and demonstrate that trust and reciprocity are powerful, quantifiable forces in human economic decision-making, often leading to outcomes that starkly contradict the predictions of models based on pure self-interest.

## The Game Setup
The Trust Game is a simple, two-player sequential game.
1.  **Players**: An **Investor** (or Sender) and a **Trustee** (or Receiver).
2.  **The Rules (Sequence of Play)**:
    a. The Investor is endowed with a sum of money, for example, **$10**.
    b. The Investor decides how much of this endowment, $x$ (where $0 \le x \le 10$), to send to the Trustee. The amount not sent, $(10-x)$, is kept by the Investor.
    c. The amount sent is **multiplied** by the experimenter, typically by a factor of 3. The Trustee receives $3x$.
    d. The Trustee now decides how much of this tripled amount, $y$ (where $0 \le y \le 3x$), to send back to the Investor.
3.  **The Final Payoffs**:
    -   **Investor's Final Payoff**: $\pi_I = (\text{Amount Kept}) + (\text{Amount Returned}) = (10 - x) + y$
    -   **Trustee's Final Payoff**: $\pi_T = (\text{Amount Received}) - (\text{Amount Returned}) = 3x - y$

The multiplier creates a potential for a large social gain. Every dollar the Investor gives up can be tripled, creating a larger pie for both players to share if the Trustee is trustworthy.

## The Conflict: Theoretical Prediction vs. Human Behavior

### The "Rational" Prediction (Subgame Perfect Nash Equilibrium)
Classical game theory, assuming both players are perfectly rational and purely self-interested, solves this game using **backward induction**.
1.  **Analyze the Trustee's Choice**: At the final stage, the Trustee has an amount of money, $3x$. To maximize their own payoff, a purely selfish Trustee will choose to return the minimum possible amount. Therefore, the Trustee will always choose **$y=0$**.
2.  **Analyze the Investor's Choice**: The Investor, being rational, anticipates the Trustee's selfish logic. They know that regardless of the amount $x$ they send, the amount returned $y$ will be 0. The Investor's payoff will be $(10-x) + 0$. To maximize this, the Investor should choose the smallest possible value for $x$.
3.  **The Prediction**: The unique Subgame Perfect Nash Equilibrium is for the Investor to **send nothing ($x=0$)**. The Trustee never gets to move, and the game ends with the initial ($10, $0) allocation. No trust is offered, and no wealth is created.

### The Behavioral Finding (How Humans Actually Play)
When the Trust Game is played in experiments, this pessimistic prediction consistently fails.
-   **Investors Trust**: Investors almost always send a positive amount of money, with the average amount sent typically being around **50%** of their initial endowment.
-   **Trustees are Trustworthy**: Trustees, upon receiving money, typically send back a positive amount. Crucially, the amount returned is often correlated with the amount sent—larger acts of trust are rewarded with greater reciprocity. Frequently, the amount returned is enough to make the Investor's initial act of trust profitable.

## What the Trust Game Measures
The game's design provides a clean, quantitative measure of key behavioral concepts:
-   **Trust**: The amount or proportion of the endowment sent by the Investor ($x$) is a direct measure of their trust in an anonymous stranger.
-   **Trustworthiness / Positive Reciprocity**: The amount or proportion of the tripled money returned by the Trustee ($y/3x$) is a direct measure of their trustworthiness and their tendency to engage in **positive reciprocity** (rewarding a kind or trusting action).

## Applications and Implications
-   **Behavioral Economics**: The Trust Game is a cornerstone experiment that provides powerful evidence for the existence of trust and reciprocity in economic decision-making. It demonstrates that these social preferences are essential for the functioning of markets and organizations.
-   **Organizational Dynamics**: The game helps analyze why high-trust environments in teams and companies are more productive. Trust enables delegation and cooperation, leading to greater joint surplus.
-   **Sociology and Anthropology**: Levels of trust and reciprocity in the game have been shown to vary across different cultures, providing insights into the role of social norms in shaping economic behavior.
-   **AI and Reinforcement Learning**: The game serves as a testbed for developing AI agents that can learn to cooperate and build trust with human or other AI partners in strategic environments.