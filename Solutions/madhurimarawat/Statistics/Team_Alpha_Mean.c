/*
 * Name: Madhurima Rawat
 * Semester: 7th
 * Description: This program calculates the mean (average) of a dataset provided by the user.
 */

#include <stdio.h>

// Function to calculate the mean of an array
double calculate_mean(double data[], int n)
{
    double sum = 0.0;

    // Summing all the elements in the dataset
    for (int i = 0; i < n; i++)
    {
        sum += data[i];
    }

    // Calculating the mean by dividing the sum by the number of elements
    return sum / n;
}

int main()
{
    // Example dataset
    double data[] = {4, 8, 6, 5, 7};
    int n = sizeof(data) / sizeof(data[0]); // Calculating the number of elements in the dataset

    // Calculating the mean of the dataset
    double mean = calculate_mean(data, n);

    // Output the result
    printf("The mean (average) of the dataset is: %.2f\n", mean);

    return 0;
}
