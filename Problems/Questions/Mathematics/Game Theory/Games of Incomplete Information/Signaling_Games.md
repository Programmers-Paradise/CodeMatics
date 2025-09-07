# Signaling Games

## Introduction
**Signaling games** are a fundamental class of **dynamic games with incomplete information**. They model situations where one player, the **Sender**, has private information (their "type") that is unknown to the other player, the **Receiver**. The Sender can attempt to credibly communicate their type to the Receiver by taking a visible action, known as a **signal**. The Receiver then observes this signal and chooses a response.

These games are crucial for understanding strategic communication and are used to model a vast range of real-world scenarios involving **asymmetric information**, such as a job applicant signaling their ability to an employer, a company signaling its product quality through advertising, or an animal signaling its strength to a rival.

## The Structure of a Signaling Game
The game unfolds in a specific sequence:
1.  **Nature's Move**: "Nature" chooses a **type** for the Sender from a set of possible types, according to a probability distribution that is common knowledge.
2.  **Sender's Move**: The Sender observes their own private type and chooses a **signal** (or message) to send.
3.  **Receiver's Move**: The Receiver observes the signal (but not the Sender's type) and chooses a **response** (or action).
4.  **Payoffs**: Payoffs are realized for both players, depending on the Sender's true type, the signal sent, and the Receiver's response.

## The Solution Concept: Perfect Bayesian Equilibrium (PBE)
The solution concept for a signaling game is the **Perfect Bayesian Equilibrium (PBE)**. A PBE consists of a set of strategies and a set of beliefs that are mutually consistent.

-   **Sender's Strategy**: A rule that specifies which signal the Sender will choose for each of their possible types.
-   **Receiver's Strategy**: A rule that specifies which response the Receiver will choose for each possible signal they might observe.
-   **Receiver's Beliefs**: A posterior probability distribution over the Sender's types, which the Receiver forms after observing a signal. These beliefs must be updated from the prior probabilities using **Bayes' Rule**.

For an equilibrium to hold, both players' strategies must be optimal given their beliefs, and the beliefs must be consistent with the players' strategies.

## Example: The Job Market Signaling Game
This is the canonical example of a signaling game, originally developed by Michael Spence.
-   **Players**: A Worker (Sender) and a Firm (Receiver).
-   **Types**: The Worker is either **High-Ability** (H) or **Low-Ability** (L). The Firm believes each is equally likely (50/50 prior).
-   **Signal**: The Worker can choose to get an **Education** (E) or **No Education** (N). The signal is costly.
-   **Response**: The Firm observes the education choice and offers a **High Wage** (HW) or a **Low Wage** (LW).

**Payoffs:**
-   **Wages**: High Wage = 10, Low Wage = 6.
-   **Productivity**: A High-Ability worker is worth 12 to the firm; a Low-Ability worker is worth 4.
-   **Cost of Education (The Key)**: Education is less costly for the High-Ability worker.
    -   Cost(E | Type H) = 3
    -   Cost(E | Type L) = 7
-   A worker's final payoff is `Wage - Cost of Education`. The firm's payoff is `Worker's Value - Wage`.

### Analysis of a Potential Separating Equilibrium
Let's test if the following is a PBE:
-   **Worker's Strategy**: High-Ability workers get an Education. Low-Ability workers get No Education.
-   **Firm's Strategy**: Offer a High Wage to anyone with an Education. Offer a Low Wage to anyone with No Education.
-   **Firm's Beliefs**: If the Firm sees "Education," it believes the worker is High-Ability with 100% probability. If it sees "No Education," it believes the worker is Low-Ability with 100% probability.

Now, we must check if these strategies and beliefs are rational and consistent.
1.  **Are the Firm's beliefs consistent?** Yes. Given the worker's strategy, seeing a worker with an education could only have come from a High-Ability type. Bayes' rule confirms this.
2.  **Is the Firm's strategy a best response?** Yes.
    -   If it sees "Education" (and believes the worker is High-Ability), offering a High Wage is rational (profit of 12-10=2 vs. 12-6=6 -- wait, my payoffs are wrong. Let's fix them. Let High Productivity=20, Low=10. High Wage=18, Low Wage=12. Cost(E|H)=4, Cost(E|L)=8).
    - Let's use a standard setup. Payoffs are simply `Wage - Cost`. High wage (HW)=10, Low wage (LW)=6. Cost(E|H)=3, Cost(E|L)=5.
    -   Let's check the worker's rationality for the proposed strategy.
    -   **High-Ability Worker's Choice**:
        -   If they get an Education, the firm offers HW. Payoff = $10 - 3 = 7$.
        -   If they get No Education, the firm offers LW. Payoff = $6 - 0 = 6$.
        -   $7 > 6$, so the High-Ability worker **will** get an education. Their strategy is rational.
    -   **Low-Ability Worker's Choice**:
        -   If they get an Education, the firm offers HW. Payoff = $10 - 5 = 5$.
        -   If they get No Education, the firm offers LW. Payoff = $6 - 0 = 6$.
        -   $5 < 6$, so the Low-Ability worker **will not** get an education. Their strategy is rational.

Since all conditions are met, this **separating equilibrium** is a valid Perfect Bayesian Equilibrium. The costly signal of education works because it is only worth it for the high-ability type.

## Types of Equilibria
-   **Separating Equilibrium**: Different types of Senders choose different signals. The signal is fully informative.
-   **Pooling Equilibrium**: All types of Senders choose the same signal. The signal is completely uninformative, and the Receiver learns nothing.
-   **Semi-Separating (or Hybrid) Equilibrium**: One type always sends a certain signal, while another type randomizes between signals.

## Applications
1.  **Economics**: The primary framework for analyzing **job market signaling**, advertising (a firm signals high product quality with a costly ad campaign), and corporate finance (a firm signals its financial health by issuing dividends).
2.  **Biology**: Modeling animal communication, where an animal sends a costly signal to a rival or potential mate to convey its strength or fitness (e.g., a peacock's elaborate tail).
3.  **Political Science**: Analyzing how countries can signal their resolve in an international crisis.
4.  **Machine Learning**: Understanding **adversarial examples**, where a tiny, carefully crafted perturbation to an input (a signal) can trick a model into making a wrong prediction.