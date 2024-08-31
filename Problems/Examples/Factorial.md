# Factorial

The factorial of a non-negative integer 
𝑛
n is the product of all positive integers less than or equal to 
𝑛

 It is denoted by 𝑛! (read as "n factorial").
                                        
>𝑛 = ∏n = n × (n-1) × (n-2) . . . . .(n-(n-1))

As the call are Recursive ,The base condition is :

> 0! = 1

# Challenge

Create a program for calculating the Factorial of a non-negative integer 

# Solutions 

```C
unsigned long long factorial_recursive(int n) {
    if (n == 0) {
        return 1;  // Base case: 0! = 1
    } else {
        return n * factorial_recursive(n - 1);  
    }
}

int main() {
    int number;
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d (recursive) is %llu.\n", number, factorial_recursive(number));
    }

    return 0;
}
```