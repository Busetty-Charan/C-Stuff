// Program to find an element in an array using Binary Search using a function

#include <stdio.h>

int binary_search (int bins_arr[], int first, int last, int checker)
{
    while (last >= first)
    {
        int middle;

        middle = first + (last - first) / 2;

        if (bins_arr[middle] == checker)
        {
            return middle;
        }
        else if (bins_arr[middle] > checker)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }

    return -1;
}

int main (int argc, char *argv[])
{
    int n, checker, bins_result;

    printf("How many elements you would like to pass : ");
    scanf(" %d", &n);

    int bins_arr[n - 1];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf(" %d", bins_arr + i);
    }
    
    printf("Enter what element you would like to check for : ");
    scanf(" %d", &checker);

    bins_result = binary_search(bins_arr, 0, n, checker);

    if (bins_result == -1)
    {
        printf("The entered number was not present in the given array\n");
    }
    else
    {
        printf("The entered numer was found at index : %d\n", bins_result);
    }

    return 0;
}
