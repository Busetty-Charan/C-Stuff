// Program to reverse digits of a number

// Include the required header files
#include <stdio.h>
#include <stdlib.h>

// Execution starts here
int main()
{
    // Var to store the integer
    char intstore[11];

    // Get input from the user
    // {
    printf("Enter an integer : ");
    scanf("%s", intstore);
    // }

    // Print the number in reverse order
    for(int i = sizeof(intstore); i >= 0; i--)
    {
        if(intstore[0] == '-' && i >= sizeof(intstore))
        {
            printf("-");
        }
        else if(intstore[i] == '-')
        {
            continue;
        }
        printf("%c", intstore[i]);
    }

    // Return zero to show success
    return 0;
}