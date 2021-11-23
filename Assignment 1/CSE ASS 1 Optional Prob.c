// Write a C program to calculate the area of a circle, trangle and a square
// To instantly test this code, copy it and go over to https://replit.com/languages/c
// All inputs are optional, feel free to just press enter when you don't wanna give an input


// Include the input and output helper header file
#include <stdio.h>
// Include math helper functions
#include <math.h>

// Code execution starts here
int main()
{
    // Use an array to store values
    // {
    int vals[3];
    char labels[3][7] = {"radius\0", "base\0", "height\0"}, temp[8];
    // }

    // Use a loop to get values
    for (int i = 0; i < 3; i++)
    {
        printf("Enter angle %s : ", labels[i]);
        if (sscanf(fgets(temp, 7, stdin), "%d", vals + i) == 1) // Allow the user to just press <enter> when they don't wanna enter a value
        {
        }
        else
        {
            vals[i] = 0;
        }
    }

    // Check what can be calculated and dump the result to stdout
    // {
    if (vals[0] != 0)
    {
        printf("\nThe area of a circle of radius %d is : %f", vals[0], 3.14 * pow((float)vals[0], 2));
    }

    if ((vals[1] != 0) && (vals[2] != 0))
    {
        printf("\nThe area of a triangle of base %d and height %d is : %d", vals[1], vals[2], (vals[1] * vals[2])/2);
    }

    if (vals[1] != 0)
    {
        printf("\nThe area of a square of side %d is : %d", vals[1], (int)pow(vals[1], 2));
    }
    // }

    // Exit with value zero to show execution was successful
    return 0;
}
