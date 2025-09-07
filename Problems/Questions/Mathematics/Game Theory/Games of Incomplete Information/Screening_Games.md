# Screening Games

## Introduction
**Screening** is a fundamental concept in the study of games with **asymmetric information**. A screening game models a strategic situation where an **uninformed party** moves first by designing a mechanism or a "menu of contracts" to sort out an **informed party** who has private information. The goal of the uninformed player is to design this menu in such a way that the informed players will self-select based on their private information, thereby revealing their "type." This mechanism is crucial for overcoming problems like adverse selection in economics, contract theory, and labor markets.

## The Core Idea: Screening vs. Signaling
Screening is the direct counterpart to signaling. The key difference is **who moves first**:
-   In a **Signaling Game**: The **informed** party moves first, choosing a costly "signal" (like getting an education) to try to convey their type to the uninformed party.
-   In a **Screening Game**: The **uninformed** party moves first, designing a "screening device" (like a menu of contracts) to get the informed party to reveal their type through their choice.

## The Structure of a Screening Game
1.  **Players**: An **Uninformed Player** (the Principal) and an **Informed Player** (the Agent).
2.  **Sequence of Play**:
    a. Nature chooses the Agent's private "type" (e.g., high-risk or low-risk). The Agent knows their type, but the Principal only knows the probability distribution of types.
    b. The Principal (uninformed party) offers a **menu of contracts** to the Agent.
    c. The Agent (informed party) observes the menu and chooses one contract, or chooses none.
    d. Payoffs are realized based on the contract chosen and the Agent's true type.

## Example: The Insurance Market (A Canonical Example)
**The Problem (Adverse Selection):**
An insurance company (the Principal) wants to sell car insurance. It cannot tell the difference between **High-Risk drivers** and **Low-Risk drivers** (the Agents' types).
-   If the company offers a single policy at an average price, only the High-Risk drivers (who know they are likely to have an accident) will find it a good deal. Low-Risk drivers will find it too expensive and will not buy it.
-   The company will be left with only high-risk customers, lose money, and the market may collapse. This is called **adverse selection**.

**The Screening Solution (A Menu of Contracts):**
To solve this, the insurance company (the uninformed party) moves first by offering two different policies:
1.  **Contract A (for High-Risk types)**: A policy with a **high premium** but a **low deductible**.
2.  **Contract B (for Low-Risk types)**: A policy with a **low premium** but a **high deductible**.

**The Self-Selection Outcome:**
-   **High-Risk drivers**, who have a high probability of getting into an accident, are willing to pay the high premium to avoid the large out-of-pocket cost of a high deductible. They will choose **Contract A**.
-   **Low-Risk drivers**, who believe they are unlikely to have an accident, will prefer to save money with a low premium and are willing to accept the risk of a high deductible. They will choose **Contract B**.

By choosing a contract from the menu, the drivers have credibly revealed their private information (their risk type) to the insurance company. The company has successfully **screened** its customers.

## Key Constraints in Screening Models
For a screening mechanism to work, the menu of contracts offered by the Principal must satisfy two key conditions:

1.  **Participation Constraint (Individual Rationality)**: The contract designed for each type of Agent must offer them at least as much utility as not participating at all. Each type must be willing to accept their respective deal.

2.  **Incentive Compatibility Constraint (Self-Selection)**: The menu must be designed so that each type of Agent finds it optimal to choose the contract intended for them. The High-Risk driver must prefer the high-premium/low-deductible contract over the low-premium/high-deductible one, and vice-versa for the Low-Risk driver.

## Applications
The principle of screening is used to solve problems of asymmetric information in many fields.
-   **Insurance**: The classic application for separating different risk pools.
-   **Airline Pricing**: Airlines offer different ticket classes (e.g., non-refundable economy vs. fully flexible business class) to screen between price-sensitive leisure travelers and time-sensitive business travelers.
-   **Corporate Finance**: A company might offer different types of securities (e.g., debt vs. equity) to screen potential investors who have different beliefs about the firm's risk and future prospects.
-   **Regulation**: A government regulator might offer a menu of contracts to a public utility whose true operating costs are private information, in order to incentivize efficiency.
-   **Labor Markets**: An employer can offer contracts with different pay structures (e.g., high fixed salary vs. low salary with high commission) to screen for high-ability vs. low-ability salespeople.