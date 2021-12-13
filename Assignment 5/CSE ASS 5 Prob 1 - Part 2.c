// Program to insert 10 elements into an array and change 5th element in the array

#include <stdio.h>

int main (int argc, char *argv[])
{
    int array[10];

    printf("Enter elements one by one : \n");

    for (int i = 0; i < 10; i++)
    {
        scanf(" %d", array + i);
    }

    printf("The array was : \n");
    printf("[ ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", *(array + i));
    }

    printf("\b\b ]\n");
    printf("Enter a new number to replace at 5th position : ");
    scanf(" %d", array + 4);
    printf("The new array is : \n");
    printf("[ ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d, ", *(array + i));
    }

    printf("\b\b ]\n");
    printf("\n");

    return 0;
}
