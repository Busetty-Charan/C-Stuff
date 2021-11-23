// Write a C program to calculate Simple Interest
// To instantly test this code, copy it and go over to https://replit.com/languages/c


// Include the input and output helper header file
#include <stdio.h>

// Code execution starts here
int main()
{
    // Use an array to store angles
    int angles[3];

    // Use a loop to get values of angles
    for (int i = 0; i < 3; i++)
    {
        printf("Enter angle %d : ", i + 1);
        scanf(" %d", angles + i);
    }

    // Check if the angles can make a triangle and dump output to stdout
    if ((*angles + *(angles + 1) + *(angles + 2)) == 180)
    {
        printf("These angles can form a triangle");
    }
    else
    {
        printf("These angles can't form a triangle");
    }

    // Exit with value zero to show execution was successful
    return 0;
}
