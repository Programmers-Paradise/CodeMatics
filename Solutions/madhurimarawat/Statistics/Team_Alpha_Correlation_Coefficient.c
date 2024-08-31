/*
 * Name: Madhurima Rawat
 * Semester: 7th
 * Team Name: Team Alpha
 * Description: This program calculates the Pearson correlation coefficient (r)
 * between two datasets X and Y.
 */

#include <stdio.h>
#include <math.h>

// Function to calculate the Pearson correlation coefficient
double pearson_correlation(double X[], double Y[], int n)
{
    // Initialize sums to zero
    double sum_X = 0, sum_Y = 0, sum_XY = 0;
    double sum_X_sq = 0, sum_Y_sq = 0;

    // Calculate the required sums
    for (int i = 0; i < n; i++)
    {
        sum_X += X[i];           // Sum of X values
        sum_Y += Y[i];           // Sum of Y values
        sum_XY += X[i] * Y[i];   // Sum of product of X and Y values
        sum_X_sq += X[i] * X[i]; // Sum of squares of X values
        sum_Y_sq += Y[i] * Y[i]; // Sum of squares of Y values
    }

    // Calculate the numerator and denominator for the Pearson formula
    double numerator = (n * sum_XY) - (sum_X * sum_Y); // Numerator of r
    double denominator = sqrt((n * sum_X_sq - sum_X * sum_X) *
                              (n * sum_Y_sq - sum_Y * sum_Y)); // Denominator of r

    // Avoid division by zero by checking if the denominator is zero
    if (denominator == 0)
    {
        return 0; // Return 0 if denominator is zero
    }

    // Return the Pearson correlation coefficient
    return numerator / denominator;
}

int main()
{
    // Example data sets
    double X[] = {1, 2, 3, 4, 5};     // Array of X values
    double Y[] = {2, 4, 6, 8, 10};    // Array of Y values
    int n = sizeof(X) / sizeof(X[0]); // Number of elements in X (and Y)

    // Calculate the Pearson correlation coefficient
    double r = pearson_correlation(X, Y, n);

    // Output the result
    printf("The Pearson correlation coefficient (r) is: %.4f\n", r);

    return 0;
}
