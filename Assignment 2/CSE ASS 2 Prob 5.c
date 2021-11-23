// Write a C program to find GCD and LCM of two numbers
// To instantly test this code, copy it and go over to https://replit.com/languages/c


// Include the input and output helper header file
#include <stdio.h>

// Code starts execution from header
int main()
{
    // Storage vars
    int num1, num2, gcd, lcm, remainder, numerator, denominator;
 
    // Getting input
    // {
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);
    // }

    // Compute GCD and LCM and print it
    // {
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }

    remainder = numerator % denominator;
    
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    
    gcd = denominator;
    lcm = num1 * num2 / gcd;
    
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
    // }

    // Return 0 to show success
    return 0;
}