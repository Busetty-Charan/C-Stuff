// Program to determine if a given number is a palindrome

// Required headers
#include <stdio.h>

// Code execution starts here
int main()
{
    // Vars
    int input, copy_of_input, rev, remainder;

    // Get the input and copy input to another var
    printf("Enter a number to check palindrome : ");
    scanf("%d", &input);

    copy_of_input = input;

    // Compute the reverse of input
    while (input != 0)
    {
        remainder = input % 10;
        input /= 10;
        rev = (rev * 10) + remainder;
    }

    // Check for palindrome
    if (copy_of_input == rev)
    {
        printf("The given number is a palindrome\n");
    }
    else
    {
        printf("The given number was not a palindrome\n");
    }

    // Return zero to show success
    return 0;
}
