# Bayesian Games

## Introduction
**Bayesian Games** are the primary framework in game theory for analyzing strategic situations with **incomplete information**. They extend the classical game-theoretic model to scenarios where players are uncertain about key aspects of the game, most commonly the "type" or payoffs of their opponents. This framework, developed by Nobel laureate John Harsanyi, is essential for modeling a vast range of real-world interactions involving asymmetric information, from auctions and negotiations to military conflicts and market signaling.

## The Components of a Bayesian Game
A Bayesian game is formally defined by five key components:

1.  **Players ($N$)**: A finite set of rational decision-makers.
2.  **Actions ($A$)**: A set of all possible actions. Each player $i$ has a set of available actions $A_i$.
3.  **Types ($T$)**: This is the crucial element. Each player $i$ has a "type" $t_i$ which is drawn from a set of possible types $T_i$. A player's type is their **private information** and it determines their payoff function.
4.  **Beliefs / Common Prior ($P$)**: Players do not know the exact types of their opponents. Instead, it is assumed that all players share a **common prior probability distribution** over the combination of all possible types. From this common prior, each player can use Bayes' rule to form conditional beliefs about the types of their opponents, given their own type.
5.  **Payoff Functions ($u$)**: The payoff for each player depends on the actions taken by all players *and* the types of all players: $u_i(a_1, \dots, a_n, t_1, \dots, t_n)$.

## Strategies and the Bayesian Nash Equilibrium (BNE)

-   **Strategy**: In a Bayesian game, a player's strategy is not a single action, but a complete **contingency plan** that specifies which action to take for **every possible type** that player could be. A strategy for player $i$ is a function $s_i(t_i)$ that maps their type to an action.

-   **Expected Payoff**: Since players are uncertain about their opponents' types, they make decisions to maximize their **expected payoff**. This is calculated by averaging the payoffs from each possible outcome, weighted by the player's beliefs about the likelihood of their opponents' types.

-   **Bayesian Nash Equilibrium (BNE)**: A strategy profile is a BNE if no player, for any of their possible types, can improve their expected payoff by unilaterally changing their strategy, given the strategies of all other players. It is a state of mutual best response under uncertainty.

## Example: A Battle of the Sexes with Incomplete Information
**Setup:**
-   **Players**: A couple, Pat and Chris, want to go out together to either the **Opera (O)** or a **Football game (F)**.
-   **Chris's Type**: Chris is known to prefer the Football game but wants to be with Pat. Their type is common knowledge.
-   **Pat's Type (Incomplete Information)**: Pat can be one of two types: "Likes Chris" (wants to be with Chris) or "Dislikes Chris" (wants to avoid Chris). Pat knows their own type, but Chris does not.
-   **Belief (Common Prior)**: Chris believes that Pat "Likes Chris" with probability $p=0.5$ and "Dislikes Chris" with probability $1-p=0.5$.

**Payoff Matrices:**
If Pat **Likes** Chris (wants to coordinate):
| | **Chris** | |
|---|---|---|
| | **Opera** | **Football**|
|**Pat** **Opera** | (3, 2) | (0, 0) |
| **Football**| (0, 0) | (2, 3) |

If Pat **Dislikes** Chris (wants to anti-coordinate):
| | **Chris** | |
|---|---|---|
| | **Opera** | **Football**|
|**Pat** **Opera** | (0, 2) | (3, 0) |
| **Football**| (2, 0) | (0, 3) |

**Analysis to find a BNE:**
1.  **Pat's Strategy**: Pat's strategy is a plan for each type.
    -   If Pat is "Likes Chris", their best response is to go where Chris goes.
    -   If Pat is "Dislikes Chris", their best response is to go where Chris is not.

2.  **Chris's Strategy**: Chris must choose an action (Opera or Football) to maximize their *expected* payoff, averaging over Pat's possible types.
    -   **Expected Payoff for Chris to choose Football**:
        $E[\pi_C(\text{Football})] = P(\text{Pat Likes}) \cdot \pi_C(\text{F,F}) + P(\text{Pat Dislikes}) \cdot \pi_C(\text{F,F})$
        If Pat's strategy is (Go F if Likes, Go O if Dislikes), then this is:
        $= 0.5 \cdot (3) + 0.5 \cdot (0) = 1.5$.
    -   **Expected Payoff for Chris to choose Opera**:
        $E[\pi_C(\text{Opera})] = P(\text{Pat Likes}) \cdot \pi_C(\text{O,O}) + P(\text{Pat Dislikes}) \cdot \pi_C(\text{O,O})$
        If Pat's strategy is (Go F if Likes, Go O if Dislikes), then this is:
        $= 0.5 \cdot (0) + 0.5 \cdot (2) = 1.0$.

3.  **The BNE**: In this case, Chris's best response is to choose Football (since 1.5 > 1.0). The BNE is the strategy profile:
    -   **Pat's Strategy**: "If I Like Chris, I will go to the Football game. If I Dislike Chris, I will go to the Opera."
    -   **Chris's Strategy**: "I will go to the Football game."

## Relationship to Other Concepts
For **dynamic** games of incomplete information (where players move sequentially), the BNE concept is refined into the **Perfect Bayesian Equilibrium (PBE)**, which adds requirements for sequential rationality and belief updating at every stage of the game.

## Applications
1.  **Economics**: The primary framework for analyzing **auctions** (where bidders have private valuations), **signaling games** (where an informed party tries to credibly reveal their type, e.g., in the job market), and **mechanism design**.
2.  **Political Science**: Modeling negotiations or conflicts where each party is uncertain about the other's true capabilities, costs, or resolve.
3.  **Machine Learning**: Used in **multi-agent reinforcement learning** where agents must learn to act optimally while holding only probabilistic beliefs about the other agents' goals or types.
4.  **Biology**: Modeling animal contests where an individual may be uncertain about the strength (type) of a rival.