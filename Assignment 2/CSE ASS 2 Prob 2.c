// Write a C program to print out `n` fibonacci terms
// To instantly test this code, copy it and go over to https://replit.com/languages/c


// Include the input and output helper header file
#include <stdio.h>

// Code starts execution from header
int main()
{
    // Number of terms, t1, t2, and current value
    int num, t1, t2, curr;

    // Get the number of terms required
    // {
    printf("Enter the number of terms required (num > 3) : ");
    scanf("%d", &num);
    // }

    // Print first two terms
    // {
    t1 = 0;
    t2 = 1;

    printf("Fibonacci Series :\n%d %d", t1, t2);
    // }
    
    // Print out the remaining terms
    while (num - 2 > 0)
    {
        curr = t1 + t2;

        printf(" %d", curr);

        t1 = t2;
        t2 = curr;
        num--;
    }

    // Return 0 to show success
    return 0;
}