// Program to check whether a given number is an Armstrong number

// Required headers
#include <stdio.h>

// Code execution starts here
int main()
{
    // Vars
    int num, copy_of_num, remainder, sum = 0;

    // Get the input and make a copy
    printf("Enter a number : ");
    scanf("%d", &num);

    copy_of_num = num;

    // Compute the cube of each digit and add them
    while (num != 0)
    {
        remainder = num % 10;
        num /= 10;
        sum += remainder * remainder * remainder;
    }

    // Check for armstrong number and print output
    if (sum == copy_of_num)
    {
        printf("The given number is an armstrong number\n");
    }
    else
    {
        printf("The given number is not an armstrong number\n");
    }

    // Return zero to show success
    return 0;
}
