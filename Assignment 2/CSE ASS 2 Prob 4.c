// Write a C program to print out the divisors of a number `n`
// To instantly test this code, copy it and go over to https://replit.com/languages/c

// Include the input and output helper header file
#include <stdio.h>

// Code starts execution from header
int main()
{
    // Number
    int n;

    // Get the input
    // {
    printf("Enter a number : ");
    scanf("%d", &n);
    // }

    // Print the factors
    // {
    printf("Factors :\n1");

    for (int i = 2; i != n; i++)
    {
        if (n % i == 0)
        {
            printf(" %d", i);
        }
    }

    printf(" %d", n);
    // }

    // Return 0 to show success
    return 0;
}
