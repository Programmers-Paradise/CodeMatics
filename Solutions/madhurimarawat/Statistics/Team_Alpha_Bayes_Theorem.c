/*
 * Name: Madhurima Rawat
 * Semester: 7th
 * Team: Team Alpha
 * Description: This program calculates the posterior probability using Bayes' Theorem, given prior probability, likelihood, and marginal likelihood values.
 */

#include <stdio.h>

double bayes_theorem(double prior_A, double likelihood_B_given_A, double marginal_B)
{
    // Calculate the posterior probability using Bayes' Theorem
    double posterior_A_given_B = (likelihood_B_given_A * prior_A) / marginal_B;
    return posterior_A_given_B;
}

int main()
{
    // Example values
    double prior_A = 0.01;             // P(A), the probability of having the disease
    double likelihood_B_given_A = 0.9; // P(B|A), the probability of a positive test result given the disease
    double marginal_B = 0.11;          // P(B), the overall probability of a positive test result

    // Calculate the posterior probability P(A|B)
    double posterior_A_given_B = bayes_theorem(prior_A, likelihood_B_given_A, marginal_B);

    // Output the result
    printf("The probability of having the disease given a positive test result is %.4f\n", posterior_A_given_B);

    return 0;
}
