# Asymmetric Games

## Introduction
**Asymmetric Games** in Evolutionary Game Theory (EGT) are models of strategic interaction where players have distinct, non-interchangeable **roles**. This stands in contrast to symmetric games, where all players are identical. In an asymmetric game, the strategies available to a player and the payoffs they receive can depend on the specific role they occupy in the interaction. This framework is crucial for realistically modeling a wide range of real-world scenarios, from mating rituals in biology to buyer-seller relationships in economics, where the participants are fundamentally different.

## The Structure of Asymmetric Evolutionary Games
The key departure from symmetric EGT is the structure of the population.
-   In a **symmetric game**, there is a single, large population, and any two individuals can be drawn to play against each other in any position.
-   In an **asymmetric game**, there are two or more distinct populations, one for each role (e.g., a population of "Males" and a population of "Females," or a population of "Incumbents" and a population of "Entrants").
-   Interactions only occur between players from different populations (e.g., a Male only plays against a Female).

This means that strategies are **role-contingent**. Evolution acts on the strategy distribution within each population separately, but the fitness of a strategy in one population depends on the current mix of strategies in the other population.

## The Solution Concept: ESS in Asymmetric Games
The solution concept is still the **Evolutionarily Stable Strategy (ESS)**, but it is now a **pair of strategies**, $(s_1^*, s_2^*)$, one for each role's population. This pair is stable if neither population can be successfully invaded by a small group of "mutants" playing an alternative strategy.

A key result simplifies the analysis:
**A strategy pair is an ESS in an asymmetric game if and only if it is a strict Nash Equilibrium of the stage game.**
A strict Nash Equilibrium is one where any unilateral deviation by a player leads to a *strictly* worse payoff.

## Example: The Hawk-Dove-Bourgeois Game
This is the canonical example that demonstrates the power of asymmetry in resolving conflict.

**1. The Symmetric Hawk-Dove Game:**
-   First, consider a standard Hawk-Dove game where two identical players compete for a resource. If the cost of fighting is greater than the value of the resource, the only ESS is a mixed strategy—a stable population with a certain proportion of aggressive Hawks and passive Doves. Costly fights are frequent.

**2. Introduce an Asymmetry (Ownership):**
-   Now, let's introduce a seemingly irrelevant asymmetry. When two individuals meet, one is assigned the role of "Owner" (it was their territory first) and the other is the "Intruder." This creates two distinct roles.

**3. The "Bourgeois" Strategy:**
-   This asymmetry allows for a new, role-contingent strategy called the **Bourgeois** strategy:
    -   "If I am the Owner, I will play Hawk (fight aggressively)."
    -   "If I am the Intruder, I will play Dove (retreat immediately)."

**4. The ESS Analysis:**
-   Consider a population where everyone has adopted the Bourgeois strategy.
-   When two Bourgeois players meet, one will be the Owner and the other the Intruder. The Owner plays Hawk, the Intruder plays Dove. The conflict is resolved **without a fight**. The Owner gets the resource, and the Intruder retreats without injury. The payoffs are high for both players on average compared to the symmetric Hawk-Dove game.
-   This strategy pair, (Bourgeois, Bourgeois), can be shown to be an **ESS**. It is a strict Nash Equilibrium and is immune to invasion by pure Hawks (who would suffer costly fights when they are Intruders) and pure Doves (who would needlessly give up the resource when they are Owners).

**Conclusion**: The simple, seemingly irrelevant asymmetry of "ownership" allows the population to coordinate on a **social convention** ("respect for property") that completely eliminates costly conflict.

## Properties
-   **Role-Specific Strategies**: A player's strategy is a function of their role in the game.
-   **Pure Strategy Equilibria**: Asymmetry often "purifies" the equilibria. While the symmetric Hawk-Dove game has a mixed strategy ESS, the asymmetric version has a pure strategy ESS (the Bourgeois strategy). This is a common result.
-   **Conventions**: Asymmetric games provide a powerful explanation for the evolution of social conventions that resolve conflicts without resorting to costly fights.

## Applications
1.  **Biology**:
    -   **Territoriality**: The Hawk-Dove-Bourgeois game is the classic model for the evolution of territorial behavior in animals.
    -   **Mating Strategies**: Modeling the different strategies of males and females in courtship and reproduction.
    -   **Parent-Offspring Conflict**: Analyzing the strategic conflict between a parent and its offspring over the level of parental investment.
2.  **Economics**:
    -   **Buyer-Seller Interactions**: Buyers and sellers have distinct roles and strategy sets in any market transaction.
    -   **Principal-Agent Problems**: Modeling the relationship between an employer (principal) and an employee (agent) who have different information and objectives.
    -   **Market Entry**: Analyzing the strategic interaction between an incumbent firm in a market and a potential new entrant.