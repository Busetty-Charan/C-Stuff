// Program to print a pascal triangle

// Include required headers
#include <stdio.h>

// Start program from here
int main()
{
    // Print the pascal triangle
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    // Return zero to show success
    return 0;
}
