// Write a C program to check whether the given input character is an alphabet,
// or a number or a special character using ASCII value

// To instantly test this code, copy it and go over to https://replit.com/languages/c


// Include the input and output helper header file
#include <stdio.h>

// Code execution starts here
int main()
{
    // Variable used to store the character passed
    char inp;

    // Getting input and converting it to an ASCII value
    // {
    printf("Enter a character : ");
    scanf("%c", &inp);

    inp = (int) inp;
    // }

    // Perform checks with ASCII values and dump a response to stdout
    // {
    if (inp > 47 && inp < 58)
    {
        printf("It's a number");
    }
    else if ((inp > 96 && inp < 123) || (inp > 64 && inp < 91))
    {
        printf("It's an alphabet");
    }
    else if ((inp > 32 && inp < 126))
    {
        printf("It's a special character");
    }
    else
    {
        printf("It's probably not an ASCII character");
    }
    // }

    // Exit with the value 0 to show that the program exited with zero errors
    return 0;
}
