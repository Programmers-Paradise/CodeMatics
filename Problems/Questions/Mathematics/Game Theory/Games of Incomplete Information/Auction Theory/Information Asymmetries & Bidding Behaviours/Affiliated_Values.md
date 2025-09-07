# Affiliated Values in Auction Theory

## Introduction
In auction theory, **affiliated values** describe a scenario where bidders' private information about an item's worth is positively correlated. This stands in contrast to the simpler Independent Private Values (IPV) model, where each bidder's valuation is entirely independent of the others. The concept of affiliation provides a more realistic framework for many real-world auctions, as bidders often draw upon common sources of information, leading their estimates to be linked. Understanding affiliation is crucial as it significantly impacts optimal bidding strategies and, most importantly, leads to the breakdown of the famous **Revenue Equivalence Theorem**.

## Defining Affiliated Values
The core idea of affiliation is that "good news for me is good news for you."
-   A set of bidders' valuations are **affiliated** if a bidder learning that their own private valuation is high should also lead them to believe that their competitors' valuations are likely to be higher as well.

This captures a formal notion of positive correlation. For example, if several art experts are bidding on a painting, their individual assessments of its quality are private, but they are affiliated because a positive assessment by one expert makes it more likely that other experts also noticed positive qualities.

### Contrast with Other Value Models
-   **Independent Private Values (IPV)**: My valuation gives me **no information** about your valuation.
-   **Common Value**: My estimate gives me direct (though noisy) information about the **same single true value** that you are also trying to estimate.
-   **Affiliated Values**: A general model of positive dependence that includes both IPV (as the case of zero correlation) and the common value model as special cases.

## The Impact on Bidding Strategy
The assumption of affiliation has a profound impact on bidding behavior, particularly in auctions where the payment depends on the bid.

-   **English and Second-Price (Vickrey) Auctions**: The optimal strategy in these formats is to bid truthfully (or stay in until the price reaches your valuation). This dominant strategy **does not change** under affiliation, as a player's payment is determined by others' bids, not their own.

-   **First-Price and Dutch Auctions**: This is where affiliation has a significant effect. A bidder must strategically "shade" their bid below their true value. Under affiliation, a bidder with a high valuation thinks, "My value is high, which means my competitors' values are also likely to be high. Therefore, I must bid more aggressively (shade my bid less) to have a chance of winning." This effect is known as the **Linkage Principle**—the link between bidders' values forces them to bid more competitively.

## The Key Result: The Breakdown of Revenue Equivalence
The Revenue Equivalence Theorem, which states that all four major auction formats yield the same expected revenue, relies on the assumption of independent private values. **With affiliated values, this theorem no longer holds.**

Instead, a new revenue ranking emerges:
$$\text{English Auction} \ge \text{Second-Price Auction} > \text{First-Price / Dutch Auction}$$

**Why?**
-   The English auction (and its strategic equivalent, the Second-Price auction) benefits most from affiliation. Bidders are forced to compete until one drops out. Affiliation makes each bidder believe that their competitors are likely strong, compelling them to bid higher and stay in the auction longer, which directly drives up the final (second-highest) price.
-   In a First-Price auction, affiliation also encourages more aggressive bidding, but this effect is not strong enough to overcome the revenue-generating power of the second-price rule in an affiliated environment. The open format of the English auction is particularly good at extracting revenue as it allows bidders to update their beliefs and compete more fiercely.

## Conceptual Example: An Art Auction
**Scenario**: An auction is held for a painting by a promising new artist. Two expert bidders, Alice and Bob, are participating. Their valuations are affiliated because they are both based on assessing the same underlying (but uncertain) fundamentals of the artist's quality and future market potential. Alice's valuation is $1000, and Bob's is $800.

-   **Second-Price Auction**: Alice bids $1000, Bob bids $800. Alice wins and pays **$800**.
-   **First-Price Auction**:
    -   *If values were independent*, Alice might shade her bid significantly, perhaps to $600, hoping Bob's value is low.
    -   *With affiliated values*, Alice reasons, "My $1000 valuation is very high, which suggests this artist is genuinely good. Bob, being an expert too, has probably also seen this and likely has a high valuation as well." This fear of a strong competitor forces her to bid more aggressively, perhaps at **$750**.
-   **Result**: The revenue from the Second-Price auction ($800) is higher than from the First-Price auction ($750). Affiliation allowed the second-price rule to extract more revenue.

## Applications
1.  **Natural Resource Auctions**: When companies bid for timber tracts or mineral rights, their geological surveys are based on common underlying data, making their value estimates affiliated.
2.  **Initial Public Offerings (IPOs)**: Investors have different private information, but their estimates of a company's long-term value are often correlated.
3.  **Real Estate**: Bidders for a house may have different personal tastes (private value), but their estimates of its future resale value (a common component) are often affiliated, based on shared information about the neighborhood and market trends.