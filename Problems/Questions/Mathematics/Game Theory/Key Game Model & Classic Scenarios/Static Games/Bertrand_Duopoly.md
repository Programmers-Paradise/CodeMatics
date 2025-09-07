# Bertrand Duopoly

## Introduction
The **Bertrand Duopoly** is a foundational model of price competition in economics and game theory. Developed by Joseph Bertrand in 1883 as a critique of the Cournot model, it examines a market where two firms (a duopoly) producing identical goods compete by choosing their **prices** simultaneously. The model yields a striking and powerful conclusion: even with only two firms, price competition can be so intense that it drives the market price down to the level of marginal cost, mirroring the outcome of perfect competition. This result, known as the **Bertrand Paradox**, provides crucial insights into the dynamics of oligopolistic markets.

## The Bertrand Model Setup
The Bertrand model is a **static (simultaneous-move)** game with the following key assumptions:
1.  **Players**: Two firms, Firm 1 and Firm 2.
2.  **Product**: Both firms produce a **homogeneous (identical)** product.
3.  **Strategic Variable**: Each firm simultaneously and independently chooses the **price** for its product, $p_i$.
4.  **Costs**: Both firms have the same, constant marginal cost of production, $c$.
5.  **Demand Rule**: Consumers are perfectly rational and will buy from the firm that offers the lower price.
    -   If $p_1 < p_2$, Firm 1 captures the entire market demand.
    -   If $p_2 < p_1$, Firm 2 captures the entire market demand.
    -   If $p_1 = p_2$, the firms split the market demand equally.

Each firm's objective is to choose a price that maximizes its own profit: $\pi_i = (p_i - c) \cdot q_i$.

## Finding the Nash Equilibrium: The Undercutting Logic
The equilibrium of the Bertrand game can be found by logically eliminating all non-equilibrium outcomes. We are looking for a price pair $`(p_1^*, p_2^*)`$ where neither firm has an incentive to unilaterally change its price.

-   **Case 1: Can prices be above marginal cost ($p_1 > p_2 > c$)?**
    No. In this situation, Firm 1 gets zero sales and zero profit. It has a clear incentive to deviate by setting its price to be just below Firm 2's price (e.g., $`p_1' = p_2 - \epsilon`$). This move would allow Firm 1 to capture the entire market and earn a positive profit.

-   **Case 2: Can prices be equal and above marginal cost ($p_1 = p_2 > c$)?**
    No. Here, the firms are splitting the market. Either firm has an incentive to undercut the other by an infinitesimally small amount. This would almost double its sales (from half the market to the entire market) for nearly the same price, thus doubling its profit. This incentive to undercut will always exist as long as the price is above the cost of production.

-   **Case 3: Can prices be at or below marginal cost?**
    No firm will set a price below marginal cost, as this would guarantee a loss. If a competitor sets a price below cost, the other firm's best response is to set its price at cost ($p=c$) and sell nothing, earning zero profit instead of a loss.

**Conclusion: The Unique Nash Equilibrium**
The undercutting logic continues until no firm can profitably lower its price. This process stops only when the price is equal to the marginal cost. The unique Nash Equilibrium of the Bertrand Duopoly game is:

$$p_1^* = p_2^* = c$$

At this point, both firms earn zero economic profit. If either firm were to lower its price, it would lose money. If either firm were to raise its price, it would lose all its customers to the competitor who is still pricing at cost. Therefore, neither firm has an incentive to deviate.

## The Bertrand Paradox
The result that just two firms competing on price can lead to the perfectly competitive outcome ($P=MC$) is known as the **Bertrand Paradox**. It is paradoxical because in the real world, duopolies and oligopolies often sustain high prices and earn significant profits. The paradox highlights how sensitive market outcomes are to the specific assumptions of the model.

### Resolving the Paradox
The extreme result of the Bertrand model is relaxed when its strict assumptions are changed to better reflect reality:
1.  **Product Differentiation**: If the firms' products are not identical (e.g., Coke vs. Pepsi), a small price cut by one firm will not cause it to capture the entire market. Brand loyalty allows firms to maintain prices above marginal cost.
2.  **Capacity Constraints**: If a firm does not have the production capacity to serve the entire market, the incentive to undercut is diminished, as it cannot fully satisfy the demand it would capture.
3.  **Repeated Interaction (Dynamic Competition)**: If firms compete repeatedly over time, they can learn to implicitly **collude** to keep prices high. A firm might avoid undercutting today for fear of starting a price war that would destroy future profits.

## Applications
-   **Antitrust and Competition Policy**: The Bertrand model provides a theoretical benchmark for the most extreme form of price competition. It is used to analyze markets where products are highly substitutable commodities (e.g., gasoline, basic minerals).
-   **Business Strategy**: It serves as a cautionary tale for businesses about the dangers of engaging in pure price competition with identical products. It highlights the strategic importance of product differentiation, branding, and managing capacity.
-   **Auction Theory**: The logic of undercutting is similar to the bidding dynamics in certain types of auctions.