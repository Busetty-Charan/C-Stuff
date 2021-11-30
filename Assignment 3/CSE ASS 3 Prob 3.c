// Program to add all the digits of a number

// Requuired headers
#include <stdio.h>

// Code execution starts here
int main()
{
    // Vars
    int input, remainder, sum = 0;

    // Get the input from the user
    printf("Enter a number : ");
    scanf("%d", &input);

    // Add the digits
    while (input != 0)
    {
        remainder = input % 10;
        input /= 10;
        sum += remainder;
    }

    // Print output
    printf("The sum of the digits is : %d\n", sum);

    // Return zero to show success
    return 0;
}
