# English Auction (Ascending Bid)
## Introduction
The **English Auction**, also known as the ascending-bid or open-outcry auction, is the most familiar and widely recognized auction format. It is a dynamic process where bidders incrementally increase the price for an item until only one bidder remains. This mechanism is fundamental to auction theory and is used extensively in real-world scenarios, from fine art auctions at Sotheby's and online marketplaces like eBay to government procurement processes. Its primary characteristics are its transparency and its simple, intuitive bidding strategy.

## The Rules of the English Auction
The game is defined by a clear set of rules for the players (the bidders).

1.  **Bidding Process**: An auctioneer starts the bidding at a low price (or a pre-announced reserve price). Bidders then call out successively higher prices. Bidding continues as long as there are at least two participants willing to pay the current price.

2.  **The Winner**: A bidder drops out of the auction when the current price exceeds their maximum willingness to pay (their private valuation). The auction ends when only one bidder is left. This last remaining bidder is the winner.

3.  **The Payment Rule**: The winner does **not** pay the amount of their final, winning bid. Instead, the winner pays a price equal to the amount of the **second-highest bid** (i.e., the price at which the second-to-last bidder dropped out), plus one minimum bid increment. For theoretical purposes, this is simplified to the winner paying the second-highest valuation.

## Optimal Strategy: Why You Bid Your True Value
The English auction has a simple and powerful optimal strategy for all bidders.

**The dominant strategy for every bidder is to continue bidding as long as the current price is below their true valuation, and to drop out as soon as the price meets or exceeds their valuation.**

-   **Why not bid above your valuation?** If you bid above your true value, you risk winning the item but paying more than it is worth to you, which would result in a loss (negative utility).
-   **Why not drop out below your valuation?** If you drop out while the price is still below your true value, you risk allowing someone else to win the item for a price you would have been willing to pay. This means you miss out on a potential profit (consumer surplus).

Because of this logic, the English auction incentivizes "truthful" bidding behavior.

## Example
**Scenario**: An antique clock is for sale in an English auction. There are three bidders with the following private valuations:
-   Alice: $100
-   Bob: $120
-   Charles: $150

**The Bidding Process**:
1.  The auctioneer starts the bidding at, say, $50. All three bidders are active.
2.  The price rises incrementally: $60, $70, $80, $90... All three remain in the auction because the price is below all of their valuations.
3.  When the bidding exceeds **$100**, Alice (whose valuation is $100) will drop out. The auction continues with only Bob and Charles.
4.  The price continues to rise: $110, $115...
5.  When the bidding exceeds **$120**, Bob (whose valuation is $120) will drop out.
6.  **End of Auction**: Charles is the last remaining bidder and wins the clock.

**The Outcome**:
-   **Winner**: Charles, the bidder with the highest valuation.
-   **Price Paid**: Charles pays a price equal to the last bid before Bob dropped out, plus one increment. For simplicity, we say the price is **$120** (the value of the second-highest valuation).
-   **Charles's Profit**: Charles's consumer surplus is the difference between his valuation and the price he paid: $150 - $120 = $30.

## Key Properties
-   **Allocative Efficiency**: The English auction is **efficient**. The item is always sold to the bidder who has the highest valuation for it.
-   **Strategic Equivalence to the Vickrey Auction**: The English auction is strategically equivalent to the **Second-Price Sealed-Bid (Vickrey) Auction**. Both formats have the same dominant strategy (bidding truthfully up to one's valuation), and they produce the same outcome: the highest-valuation bidder wins and pays the second-highest valuation.
-   **Information Revelation**: As an open, dynamic auction, it reveals information during the process. Bidders can observe how many competitors they have and get a sense of their valuations. This can sometimes be a disadvantage if bidders wish to keep their interest or valuation private.
-   **Collusion Risk**: The open format can make it easier for bidders to coordinate and engage in collusive behavior (e.g., using signals to agree not to bid against each other).

## Applications
1.  **Art and Collectibles**: The classic and most visible application, used by auction houses like Christie's and Sotheby's.
2.  **Online Marketplaces**: The standard format for consumer-to-consumer platforms like eBay.
3.  **Livestock and Produce Auctions**: Used globally for selling agricultural goods.
4.  **Real Estate**: A common method for selling property.