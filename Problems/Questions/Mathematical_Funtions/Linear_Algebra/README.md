# Linear Algebra

## Easy: Matrix Addition

Implement a function to add two matrices.

**Function Signature:**
```c
void matrix_addition(int A[3][3], int B[3][3], int result[3][3]);
```

**Problem Description:**
Write a function that takes two 3x3 matrices as input and returns their sum. The function should perform element-wise addition of the matrices.

**Example:**
```
Input:
A = {{1, 2, 3},
     {4, 5, 6},
     {7, 8, 9}}

B = {{9, 8, 7},
     {6, 5, 4},
     {3, 2, 1}}

Output:
result = {{10, 10, 10},
          {10, 10, 10},
          {10, 10, 10}}
```

## Medium: Matrix Multiplication

Implement a function to multiply two matrices.

**Function Signature:**
```c
void matrix_multiplication(int A[3][2], int B[2][3], int result[3][3]);
```

**Problem Description:**
Write a function that takes two matrices as input and returns their product. The function should perform matrix multiplication, not element-wise multiplication.

**Example:**
```
Input:
A = {{1, 2},
     {3, 4},
     {5, 6}}

B = {{7, 8, 9},
     {10, 11, 12}}

Output:
result = {{27, 30, 33},
          {61, 68, 75},
          {95, 106, 117}}
```

## Hard: Gaussian Elimination

Implement Gaussian Elimination to solve a system of linear equations.

**Function Signature:**
```c
void gaussian_elimination(float A[4][5], float solution[4]);
```

**Problem Description:**
Write a function that takes a matrix representing a system of linear equations and solves it using Gaussian Elimination with partial pivoting.

**Input:**
- A 4x5 matrix A representing a system of 4 equations with 4 unknowns
- The first 4 columns represent the coefficients, and the last column represents the constants

**Output:**
- An array of 4 floats representing the solution to the system of equations

**Example:**
```
Input:
A = {{2, 1, -1, -1, -2},
     {1, 2, -1, -1, -1},
     {1, 1, 1, -1, 1},
     {1, 1, -1, 2, 2}}

Output:
solution = {-1.0, 1.0, 0.0, 2.0}
```

**Algorithm Overview:**
1. Forward elimination: Create an upper triangular matrix
2. Implement partial pivoting for numerical stability
3. Back-substitution: Solve for the variables

For each problem, implement the required function and use the provided main function to test your solution. Good luck!
