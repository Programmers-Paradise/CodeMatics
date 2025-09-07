# Generalized Second-Price (GSP) Auction

## Introduction
The **Generalized Second-Price (GSP) Auction** is a non-truthful auction mechanism for selling multiple, similar items. It is most famous for being the engine that powered **Google's search advertising system (AdWords)** for many years and remains a foundational concept in online advertising. GSP is designed to solve the problem of simultaneously allocating and pricing multiple ad slots on a search results page. While not theoretically "perfect," it provides a simple, stable, and highly effective solution to this massive, real-time allocation problem.

## The GSP Mechanism
The GSP auction is designed to rank advertisers for multiple slots and determine the price each advertiser pays per click.

### The Setup
-   There are $K$ ad slots available on a page. These slots are not identical; the top slot (Slot 1) is expected to get more clicks than Slot 2, and so on. This is measured by the **Click-Through Rate (CTR)**.
-   Advertisers submit **bids** ($b_i$), which represent their maximum willingness to pay for a single click.

### The Ranking and Payment Rules
In a modern ad auction, ranking is not based on the bid alone. Both the bid and the ad's relevance are considered.

**1. The Allocation Rule (Ranking):**
-   Each ad is assigned a **Quality Score** ($q_i$) by the platform. This score measures the relevance and quality of the ad, keywords, and landing page.
-   Ads are then ranked not by their bid, but by their **Ad Rank**:

$$\text{AdRank}_i = b_i \times q_i$$

-   The ad with the highest Ad Rank gets Slot 1, the second-highest gets Slot 2, and so on until all slots are filled.

**2. The Payment Rule:**
-   The price that the advertiser in position $i$ actually pays per click is determined by the Ad Rank of the advertiser **ranked just below them** (in position $i+1$).
-   The price is the **minimum amount needed to bid to maintain their position** above the advertiser below them.
  
$\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$ $\qquad$  $`\text{Price}_ i = \frac{\text{AdRank}_{i+1}}{q_i} + \text{\$0.01}`$

## Example
**Scenario**: Three advertisers (Apple, Bose, Corsair) are competing for two ad slots for the search query "headphones".

**The Data**:
| Advertiser | Bid ($b_i$) | Quality Score ($q_i$) | **Ad Rank** ($b_i \times q_i$) |
|---|---|---|---|
| Apple | $4.00 | 8 | **32** |
| Bose | $6.00 | 4 | **24** |
| Corsair | $3.00 | 6 | **18** |

**Step 1: Rank the Ads**
1.  **Rank 1**: Apple (Ad Rank = 32) -> Gets **Slot 1**.
2.  **Rank 2**: Bose (Ad Rank = 24) -> Gets **Slot 2**.
3.  **Rank 3**: Corsair (Ad Rank = 18) -> Gets no slot.

**Step 2: Calculate the Price Per Click**
-   **Price for Apple (in Slot 1)**:
    -   To keep its position, Apple's Ad Rank just needs to be slightly higher than Bose's Ad Rank of 24.
    -   Minimum bid needed: $`\text{AdRank}_{\text{Bose}} / q_{\text{Apple}} = 24 / 8 = \$3.00`$.
    -   Apple pays the next smallest increment: **$3.01**. (Profit per click for Apple is based on its true value minus this price).

-   **Price for Bose (in Slot 2)**:
    -   To keep its position, Bose's Ad Rank needs to beat Corsair's Ad Rank of 18.
    -   Minimum bid needed: $`\text{AdRank}_{\text{Corsair}} / q_{\text{Bose}} = 18 / 4 = \$4.50`$.
    -   Bose pays **$4.51**. (Note: even though Bose bid higher than Apple, their lower Quality Score means they rank lower and pay a higher price per click).

## Strategic Properties
-   **Not Truthful (Not Strategy-Proof)**: This is a critical property. Unlike a single-item Vickrey auction, bidding your true value per click is **not** a dominant strategy or a Nash Equilibrium in GSP. Bidders have an incentive to "shade" their bids downwards to optimize their position and payment.
-   **Stable Equilibrium**: GSP does have a locally "envy-free" **Nash Equilibrium**. In this equilibrium, no advertiser has an incentive to unilaterally change their bid. Each advertiser is content with their assigned slot and price, given the bids of the other advertisers.
-   **Comparison to VCG**: The **VCG (Vickrey-Clarke-Groves)** auction is the theoretically "perfect" truthful mechanism for this setting. However, the GSP was historically preferred by platforms like Google because its rules are much simpler for advertisers to understand, and its equilibrium properties are stable and well-behaved.

## Applications
1.  **Search Engine Advertising**: This is the canonical application. GSP and its variants are the foundation of the multi-billion dollar advertising markets run by **Google** and **Microsoft (Bing)**.
2.  **Social Media Advertising**: Used for ranking and pricing sponsored posts or ads in a user's feed on platforms like Facebook, X (Twitter), and LinkedIn.
3.  **E-commerce Marketplaces**: For ranking and pricing "sponsored product" listings that appear at the top of search results on platforms like Amazon and eBay.