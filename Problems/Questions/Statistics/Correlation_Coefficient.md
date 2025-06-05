# Correlation
Correlation is a statistical measure that describes the strength and direction of a linear relationship between two random variables.


 Unlike covariance, which measures how much two variables change together, correlation standardizes the measure, making it easier to interpret. The
 correlation coefficient, often denoted as 
$r$, ranges from -1 to 1.

- `Positive Correlation`: A positive value of $r$ indicates that as one variable increases, the other also increases.

- `Negative Correlation`: A negative value of $r$ indicates that as one variable increases, the other decreases.

- `No Correlation`: An 
$r$ value close to 0 indicates that there is no linear relationship between the variables.

## Correlation Formula
The Pearson correlation coefficient $r$ between two variables $X$ and $Y$ is calculated as:

$$
r = \frac{\text{Cov}(X, Y)}{\sigma_X \sigma_Y}
$$

Where:

- $Cov(X, Y)$ is the covariance between \( X \) and \( Y \).
- $\sigma_X$ and $\sigma_Y$ are the standard deviations of $X$ and $Y$, respectively.

## Notable Outcomes

- **$r = 1$**: Perfect positive correlation.
- **$r = -1$**: Perfect negative correlation.
- **$r = 0$**: No linear relationship between the variables.

### Example

For example, if you examine the relationship between hours studied and exam scores, a positive correlation would indicate that more hours of study are associated with higher exam scores.

## Challenge

Create a function which finds the correlation between any values(datas).
