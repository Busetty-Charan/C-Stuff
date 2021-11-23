// Write a C program to calculate Simple Interest
// To instantly test this code, copy it and go over to https://replit.com/languages/c


// Include the input and output helper header file
#include <stdio.h>
// Include Math functions
#include <math.h>

// Code execution starts here
int main()
{
    // Variables used to store principal, number of years and rate are declared here
    int p, n, r;

    // Getting the values and putting them into variables
    // {
    printf("Enter the principal value : ");
    scanf("%d", &p);

    printf("\nEnter the number of years : ");
    scanf("%d", &n);

    printf("\nEnter rate of interest : ");
    scanf("%d", &r);
    // }

    // Calculate the output and dump it into stdout stream
    // {
    printf("\nThe simple interest is : %d", (p * n * r)/100);
    printf("\nThe compound interest is : %f", p * pow((1+((float)r/100)), n));
    // }

    // Exit with value zero to show execution was successful
    return 0;
}
