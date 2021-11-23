// Write a C program to check if a triangle is equilateral, or isosceles or scalene
// To instantly test this code, copy it and go over to https://replit.com/languages/c


// Include the input and output helper header file
#include <stdio.h>

// Code execution starts here
int main()
{
    // Use an array to store sides
    int sides[3];

    // Use a loop to get values of angles
    for (int i = 0; i < 3; i++)
    {
        printf("Enter side length %d : ", i + 1);
        scanf(" %d", sides + i);
    }

    // Check conditions can dump output to stdout
    if ((sides[0] == sides[1]) && (sides[1] == sides[2]))
    {
        printf("The given triangle is an equilateral triangle");
    }
    else if ((sides[0] == sides[1]) || (sides[1] == sides[2]) || (sides[2] == sides[0]))
    {
        printf("The given triangle is an isosceles triangle");
    }
    else
    {
        printf("The given triangle is a scalene triangle");
    }

    // Exit with value zero to show execution was successful
    return 0;
}
