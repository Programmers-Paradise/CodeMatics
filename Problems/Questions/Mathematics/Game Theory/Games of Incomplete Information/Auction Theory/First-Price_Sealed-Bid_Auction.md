# First-Price Sealed-Bid Auction

## Introduction
The **First-Price Sealed-Bid** auction is one of the four major types of single-item auctions. In this format, participants submit their bids secretly (in a "sealed envelope"), and the highest bidder wins the item. It is a strategically complex mechanism that is widely used for real-world resource allocation, from government procurement contracts and treasury bill sales to private real estate tenders. Understanding this format is crucial for analyzing market dynamics where bidders must make decisions with incomplete information about their competitors.

## The Rules of the Auction
The First-Price Sealed-Bid auction is a **static (simultaneous-move) game of incomplete information**. Its rules are simple:
1.  Each of the $n$ bidders simultaneously and secretly submits a single bid, $b_i$.
2.  The bids are opened, and the bidder with the highest bid wins the item.
3.  The winner pays the price they bid.

The payoff (or utility) for a bidder $i$ with a true private valuation of $v_i$ is:

$$u_i(\text{bids}) = \begin{cases} v_i - b_i & \text{if } b_i \text{ is the highest bid} \\
0 & \text{otherwise} \end{cases}$$

## The Strategic Dilemma: Bid Shading
The core strategic challenge for a bidder is the trade-off between the probability of winning and the profit they receive if they win.
-   Bidding your true valuation ($b_i = v_i$) is **irrational**, as it guarantees a profit of zero even if you win.
-   Bidding higher increases your chance of winning but reduces your potential profit.
-   Bidding lower increases your potential profit but reduces your chance of winning.

A rational bidder will therefore engage in **"bid shading"**, which is the strategy of bidding an amount that is **less** than their true valuation. The optimal amount to shade your bid depends critically on your beliefs about the number of competitors and the likely distribution of their valuations.

## Bayesian Nash Equilibrium Strategy
Finding the optimal bid is a problem solved using the concept of a **Bayesian Nash Equilibrium (BNE)**. For the standard case where there are $n$ bidders whose private valuations are independently drawn from a uniform distribution on the interval $[0, V_{max}]$, the symmetric BNE bidding strategy for a player with valuation $v_i$ is:

$$b_i(v_i) = \left(\frac{n-1}{n}\right)v_i$$

**Interpretation:**
-   You always bid a fraction of your true value.
-   As the number of bidders, $n$, increases, the fraction $\frac{n-1}{n}$ gets closer to 1. This means that with more competition, you must bid more aggressively (closer to your true value) to have a chance of winning.

## Example
**Scenario**: You are one of two bidders ($n=2$) for an item. Your private valuation is $v_{you} = \$100$. You believe your opponent's valuation is uniformly distributed between $0 and $100.

**The Trade-off (Intuitive):**
-   If you bid $90, your potential profit is $10. You will win if your opponent's valuation (and thus their bid) is less than yours.
-   If you bid $60, your potential profit is much higher ($40), but your probability of winning is lower.

**The Equilibrium Solution:**
Using the BNE formula, your optimal shaded bid is:

$$b(\$100) = \left(\frac{2-1}{2}\right) \times \$100 = \frac{1}{2} \times \$100 = \$50$$

Your rational strategy is to bid $50, which perfectly balances the probability of winning against the profit you make if you do win.

## Key Properties
-   **Strategic Equivalence to the Dutch Auction**: The First-Price Sealed-Bid auction is strategically identical to the **Dutch (descending) auction**. In both formats, a bidder's decision is made in isolation, and the winner is the one willing to pay the highest price. A rational bidder will use the same bid-shading strategy in both.
-   **Revenue Equivalence Theorem**: Under standard assumptions, the First-Price auction yields the **same expected revenue** for the seller as the English and Second-Price (Vickrey) auctions. The lower bids from shading are offset by the fact that the winner pays their own (higher) bid rather than the second-highest bid.
-   **Allocative Efficiency**: In the standard private values model, this auction is efficient, as the bidder with the highest valuation will still place the highest bid (even after shading) and win the item.
-   **Not Truthful**: Unlike the Second-Price auction, this format does not incentivize bidders to reveal their true valuations.

## Applications
1.  **Government Procurement**: When governments solicit bids for public works projects, companies submit sealed bids, and the *lowest* bidder typically wins the contract. This is a "reverse" first-price auction.
2.  **Treasury Auctions**: Many governments sell treasury bills and bonds using a first-price sealed-bid format.
3.  **Real Estate**: Sometimes used for selling property, especially in competitive markets.
4.  **Art and Collectibles**: While the English auction is more common, this format is also used.