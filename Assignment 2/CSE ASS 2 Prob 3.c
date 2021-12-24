// Write a C program to calculate sum of `n` number got from the user
// To instantly test this code, copy it and go over to https://replit.com/languages/c

// Include the input and output helper header file
#include <stdio.h>

// Code starts execution from header
int main()
{
    // The number of numbers and sum and temp
    int n, sum, temp;

    // Get the number of numbers the user wants to add
    // {
    printf("Enter the number of numbers you would like to add : ");
    scanf("%d", &n);
    // }

    // Get the inputs and print out the sum
    // {
    sum = 0;

    while (n != 0)
    {
        printf("Enter a number : ");
        scanf("%d", &temp);

        sum += temp;
        n--;
    }

    printf("The sum of all the numbers is : %d", sum);
    // }

    // Return 0 to show successful run
    return 0;
}
