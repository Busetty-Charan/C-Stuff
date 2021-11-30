// Program to reverse the digits of a number

// Required headers
#include <stdio.h>

// Execution starts here
int main()
{
    // Vars
    int num, rev = 0, remainder;

    // Get the input
    printf("Enter a number to be reversed : ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        num /= 10;
        rev = (rev * 10) + remainder;
    }

    // Print output
    printf("The reverse is : %d\n", rev);

    // Return zero to show success
    return 0;
}
