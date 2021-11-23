// Write a C program to convert decimal to binary, octal and hexadecimal
// To instantly test this code, copy it and go over to https://replit.com/languages/c


// Include the input and output helper header file
#include <stdio.h>

// Code starts execution from header
int main()
{
    // User input, choice and array
    int num, choice, arr[11] = {0, 0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0, 0};

    // Get the value and choice
    // {
    printf("Enter a value : ");
    scanf("%d", &num);
    printf("Enter a choice (1, 2, 3) : ");
    scanf("%d", &choice);
    // }

    // Compute equivalent based on choice
    switch (choice)
    {
        case 1: // Convert to binary

            for (int i = 31; i >= 0; i--)
            {
                if ((num >> i) & 1)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }

            break; 

        case 2: // Convert to Octal

            for (int i = 0; num != 0; i++)
            {
                arr[i] = num % 8;
                num /= 8;
            }

            for (int j = 10; j >= 0; j--)
            {
                printf("%d", arr[j]);
            }

            break;
        
        case 3: // Convert to Hex
        
            for (int i = 0; num != 0; i++)
            {
                arr[i] = num % 16;
                num /= 16;
            }

            for (int j = 7; j >= 0; j--)
            {
                char map[] = "ABCDEF";

                if (arr[j] / 10 > 0)
                {
                    printf("%c", map[(arr[j] % 9) - 1]);
                }
                else
                {
                    printf("%d", arr[j]);
                }
            }

            break;
    }

    // Return 0 to show success
    return 0;
}