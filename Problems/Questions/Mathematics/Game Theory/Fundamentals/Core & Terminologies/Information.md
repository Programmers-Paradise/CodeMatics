# Information

## Introduction
In game theory, **information** refers to the knowledge that each player has when making a decision. This includes knowledge about the structure of the game (the players, strategies, and payoffs) and knowledge about the actions that have been taken by other players. The structure of information is a critical component of any game, as it profoundly influences the strategic challenges players face and the outcomes that can be expected. Analyzing a game begins with understanding "who knows what, and when."

## The Two Primary Axes of Information
Information in game theory is typically classified along two main axes: the knowledge of past actions (perfect vs. imperfect) and the knowledge of the players' motivations (complete vs. incomplete).

### 1. The First Axis: Perfect vs. Imperfect Information
This axis deals with a player's knowledge of the **history of play**.

-   **Perfect Information**: A game has perfect information if, at every decision point, the player whose turn it is to move knows the full history of all previous moves made by all other players. This is the case for sequential-move games where everything is out in the open.
    -   **Examples**: Chess, Checkers, Go, Tic-Tac-Toe.
    -   **Representation**: These games can be fully represented by a simple **game tree**.

-   **Imperfect Information**: A game has imperfect information if at least one player, when making a decision, is not aware of the full history of play. This can arise from:
    1.  **Simultaneous Moves**: Players choose their actions at the same time, unaware of what the others are choosing. (e.g., Rock-Paper-Scissors, Prisoner's Dilemma).
    2.  **Hidden Information**: Some past events are hidden from a player. (e.g., in Poker, you don't know the cards your opponent was dealt).
    -   **Representation**: These games are represented by game trees with **information sets**, which are collections of decision nodes that a player cannot distinguish between.

### 2. The Second Axis: Complete vs. Incomplete Information
This axis deals with a player's knowledge of the **rules of the game** and the other players.

-   **Complete Information**: A game has complete information if all players know the structure of the game and the payoff functions of all other players. In essence, every player knows what motivates their opponents. This is a standard assumption in many classic games.
    -   **Examples**: Prisoner's Dilemma, Chess (assuming both players know the goal is to win).

-   **Incomplete Information (or Bayesian Games)**: A game has incomplete information if at least one player is uncertain about another player's "type," which most often means being uncertain about their payoff function.
    -   **Key Concepts**:
        -   **Types**: The private information a player has (e.g., a high or low valuation for an item in an auction).
        -   **Beliefs**: A player's initial probabilistic assessment of the other players' types (a "prior").
        -   **Bayesian Updating**: Players use the actions they observe during the game to update their beliefs about their opponents' types, using **Bayes' Rule**.
    -   **Solution Concept**: The standard solution concept for these games is the **Bayesian Nash Equilibrium**.

## Example: A Signaling Game (Incomplete Information)
A classic example of incomplete information is a **signaling game** in the job market.
-   **Players**: A job applicant (the "sender") and an employer (the "receiver").
-   **Types**: The applicant has private information about their "type": they are either High-Ability or Low-Ability.
-   **Actions**: The applicant can choose to get an expensive education (a "signal") or not.
-   **Beliefs**: The employer cannot directly observe the applicant's ability. They only see the signal (the education level) and must form a belief about the applicant's type based on this signal.

The employer uses Bayes' Rule to update their prior belief about the applicant's type after observing their action. The updated belief (posterior probability) that an applicant is High-Ability given that they chose to get an education is:

$$P(\text{High Ability} | \text{Education}) = \frac{P(\text{Education} | \text{High Ability})P(\text{High Ability})}{P(\text{Education})}$$

The applicant, knowing this, will choose to get an education only if the benefit (a higher expected wage) outweighs the cost, which might be lower for a high-ability type.

## Key Concepts and Properties
-   **Common Knowledge**: A special kind of information. A fact is common knowledge if all players know it, all players know that all players know it, and so on, ad infinitum. In games of complete information, the rationality of the players and the rules of the game are often assumed to be common knowledge.
-   **Signaling and Screening**: These are key phenomena in games of incomplete information. **Signaling** is when an informed player takes an action to reveal their type. **Screening** is when an uninformed player creates a mechanism (like offering different types of contracts) to get informed players to reveal their types.

## Applications
-   **Economics (Asymmetric Information)**: The study of markets where one party has more or better information than the other (e.g., a seller of a used car knowing more about its quality than the buyer) is entirely based on games of **incomplete information**.
-   **Poker**: A classic example of a game with both **imperfect information** (you don't know your opponent's cards) and **incomplete information** (you don't know your opponent's playing style or "type"—are they a bluffer?).
-   **Auctions**: Bidders know their own valuation for an item but not the valuations of others, making it a game of **incomplete information**.
-   **Cybersecurity**: Modeling interactions between an attacker and a defender is often a game of **impefect and incomplete information**, as neither party knows the other's full capabilities or plans.