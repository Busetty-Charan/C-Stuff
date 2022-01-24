// Program to return an array from a function making use of pointers

#include <stdio.h>
#include <stdlib.h>

int *arr_return(const int *inarr, int size)
{
    int *outarr, counter = 1;

    outarr = (int *)calloc(1, sizeof(int));
    *outarr = 1;

    for (int i = 0; i < size; i++)
    {
        if (*(inarr + i) > 0)
        {
            counter += 1;
            outarr = (int *)realloc(outarr, counter);
            *outarr = counter;
            *(outarr + counter - 1) = *(inarr + i);
        }
    }

    return outarr;
}

int main(int argc, char const *argv[])
{
    int n;

    printf("How many elements would you like : ");
    scanf(" %d", &n);

    int elem_list[n], *returning_arr;

    printf("Enter the elements one by one : ");

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", elem_list + i);
    }

    returning_arr = arr_return(elem_list, n);

    for (int i = 1; i < *returning_arr; i++)
    {
        printf("%d ", *(returning_arr + i));
    }

    printf("\n");
    free(returning_arr);

    return 0;
}
