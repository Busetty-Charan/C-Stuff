// Write a C program to calculate Compound Interest
// To instantly test this code, copy it and go over to https://replit.com/languages/c


// Include the input and output helper header file
#include <stdio.h>
// Include the math helper header, we use the power function in this program
#include <math.h>

// Code execution starts here
int main()
{
    // Variables used to store the proncipal, number of years, and rate
    int p, n, r;

    // Get the input from the user and store it in the variables
    // {
    printf("Enter the principal vaue : ");
    scanf("%d", &p);

    printf("\nEnter the number of years : ");
    scanf("%d", &n);

    printf("\nEnter the rate of interest : ");
    scanf("%d", &r);
    // }

    // Calculate the output and dump it into stdout stream
    printf("\nThe compound interest is : %f", p*pow((1+((float)r/100)), n));

    // Exit with value zero to show execution was successful
    return 0;
}
