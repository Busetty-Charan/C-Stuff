// Write a C program to calculate the factorial
// To instantly test this code, copy it and go over to https://replit.com/languages/c

// Include the input and output helper header file
#include <stdio.h>

// Code starts execution from header
int main()
{
    // Store the number and the final value storage
    int num, fact;

    // Get input and store it in the var
    // {
    printf("Enter the number to find factorial : ");
    scanf("%d", &num);
    // }

    // Find the factorial and print it out
    // {
    fact = 1;

    if (num == 0 || num == 1)
    {
    }
    else
    {
        while (num != 1)
        {
            fact *= num;
            num--;
        }
    }

    printf("The factorial was : %d", fact);
    // }

    // Return 0 to indicate code ran with no errors
    return 0;
}
