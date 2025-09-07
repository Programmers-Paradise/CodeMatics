# Complete vs. Incomplete Information

## Introduction

In game theory, the structure of **information**—what players know about the game and about each other—is a critical element that defines the strategic landscape. A fundamental distinction is drawn between games of **complete information** and games of **incomplete information**. This classification is based on whether players are certain about the underlying "rules of the game," particularly the motivations and payoffs of their opponents. Understanding this difference is vital for modeling real-world scenarios where information is often asymmetric, such as in auctions, negotiations, and market competition.

## Complete Information: The Rules are Common Knowledge

A game has **complete information** if all players know the fundamental structure of the game. Specifically, each player knows:

1.  The set of all players in the game.
2.  The set of all actions or strategies available to every player.
3.  The payoff function for **every** player, for every possible combination of strategies.

Furthermore, it is assumed that this knowledge is **common knowledge**, meaning everyone knows that everyone knows that everyone knows (and so on) these facts. In a game of complete information, there is no uncertainty about the players' objectives or the rules they are playing by.

  - **Examples**: The Prisoner's Dilemma, the Stag Hunt, Chess, Tic-Tac-Toe. In these games, each player fully understands their opponent's goals and available moves.

## Incomplete Information: Uncertainty About Opponents

A game has **incomplete information** if at least one player is uncertain about some fundamental aspect of the game. Most commonly, this uncertainty is about the **payoff function** of another player. These games are also known as **Bayesian games**.

  - **Types**: A player's private, hidden information is called their "type." For example, in an auction, a bidder's "type" is their true valuation of the item. In a negotiation, a firm's "type" might be its true production cost.
  - **Beliefs**: Players do not know the exact type of their opponents. Instead, they have a **probabilistic belief** (a "prior") about the distribution of possible types.
  - **Bayesian Updating**: As the game unfolds and players observe each other's actions, they can use **Bayes' Rule** to update their beliefs about their opponents' types. An action can serve as a signal that reveals information.
  - **Solution Concept**: The standard solution concept is the **Bayesian Nash Equilibrium (BNE)**. In a BNE, each player chooses a strategy that maximizes their *expected* utility, based on their own private type and their beliefs about the types of the other players.

### Example: A Sealed-Bid Auction

An auction is a classic game of incomplete information.

  - **Players**: Multiple bidders.
  - **Strategies**: Each bidder's strategy is their bidding rule (how much to bid based on their valuation).
  - **Incomplete Information**: Each bidder knows their own true valuation of the item, but they do not know the valuations (types) of the other bidders. They only have a belief, for example, that the other bidders' valuations are drawn from a uniform distribution between $500 and $1000.
  - **Equilibrium**: A bidder's rational strategy is to place a bid that maximizes their expected profit, considering the probability of winning and the price they will pay, given their beliefs about what the other bidders might do.

## Clarifying a Common Confusion: Complete vs. Perfect Information

These two concepts are distinct and often confused. They are orthogonal axes for classifying games.

  - **Complete/Incomplete Information** is about knowing the **rules of the game** (especially payoffs).
  - **Perfect/Imperfect Information** is about knowing the **history of moves** within the game.

| | **Perfect Information**  (All past moves are known) | **Imperfect Information**  (Some past moves are hidden) |
|---|---|---|
| **Complete Information**  (All rules & payoffs are known) | **Chess**: Sequential moves, open board. Players know the goal is to win. | **Prisoner's Dilemma**: Simultaneous moves, but players know each other's payoffs. |
| **Incomplete Information**  (Uncertainty about payoffs/types) | **Sequential Auction**: You see previous bids, but you don't know the other bidders' true valuations. | **Sealed-Bid Auction / Poker**: You don't see other bids/cards, and you don't know others' types. |

## Applications

  - **Economics**: The analysis of **asymmetric information** in markets (where one party knows more than another, e.g., a used car seller) is entirely based on incomplete information games. Auctions are a primary example.
  - **Poker and Bargaining**: In poker, players have incomplete information about their opponents' hands (types) and imperfect information about their past actions (if they folded).
  - **Artificial Intelligence**: Modeling interactions in multi-agent systems where agents have private information and must reason about the beliefs of other agents.
  - **Political Science**: Modeling negotiations or conflicts where each party may be uncertain about the other's true resolve or costs of conflict.

## Conclusion

The distinction between complete and incomplete information is fundamental to game theory's ability to model the real world. While the complete information framework provides a baseline for understanding strategic logic, the theory of Bayesian games and incomplete information allows for a richer and more realistic analysis of situations involving private information, uncertainty, learning, and signaling.