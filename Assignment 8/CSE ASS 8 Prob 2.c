// Program to re-arrange a positive integer array in such a way that the odd numbers preceed the even numbers

#include <stdio.h>

void get_int_input(const char string[], int *invar)
{
    printf("%s", string);
    scanf(" %d", invar);
}

void rearrange(int arr[], const int size)
{
    int replace = 0, new_arr[size];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            new_arr[replace] = arr[i];
            replace++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            new_arr[replace] = arr[i];
            replace++;
        }
    }

    printf("The re-arranged array is : { ");

    for (int i = 0; i < size; i++)
    {
        printf("%d, ", *(new_arr + i));
    }

    printf("\b\b }\n");
}

int main(int argc, char const *argv[])
{
    int n;

    get_int_input("How many elements would you like to have : ", &n);

    int arrarr[n];

    for (int i = 0; i < n; i++)
    {
        get_int_input("", arrarr + i);
    }

    rearrange(arrarr, n);

    return 0;
}
