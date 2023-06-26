#include <stdio.h>

int factorial(int n)
{
    if (n == 1) // base case
        return 1;
    else 
        return n * factorial(n - 1); // recursive case
}

int main()
{
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}


/*In this example, the factorial() function is a recursive function that calculates the factorial of a given number. The base case is when n equals 1, in which case the function returns 1. The recursive case is when n is greater than 1, in which case the function calls itself with a smaller argument n - 1.

In the main() function, we call factorial() with a test value of 5 and print out the result.

This is just one example of recursion in C. Recursion can be used to solve many different types of problems, and there are many different ways to write recursive functions depending on the problem at hand.*/