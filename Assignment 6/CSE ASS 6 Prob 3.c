// Program to find an element in an array using Binary Search using recursion

#include <stdio.h>

int main (int argc, char *argv[])
{
    int last, checker, middle = -1, first = 0;

    printf("How many elements you would like to pass : ");
    scanf(" %d", &last);

    int bins_arr[last - 1];

    for (int i = 0; i < last; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf(" %d", bins_arr + i);
    }
    
    printf("Enter what element you would like to check for : ");
    scanf(" %d", &checker);

    while (last >= first)
    {
        middle = first + (last - first) / 2;

        if (bins_arr[middle] == checker)
        {
            break;
        }
        else if (bins_arr[middle] > checker)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }

        middle = -1;
    }

    if (middle != -1)
    {
        printf("The entered numer was found at index : %d\n", middle);
    }
    else
    {
        printf("The entered number was not present in the given array\n");
    }

    return 0;
}
