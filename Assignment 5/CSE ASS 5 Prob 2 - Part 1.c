// C prgram to search for an element in an array

#include <stdio.h>

int check_element(const int *to_be_checked, int size_of_arr, const int *to_check)
{
    for (int i = 0; i < size_of_arr; i++)
    {
        if (*(to_be_checked + i) == *to_check)
        {
            printf("Element %d found at position %d\n", *to_check, i + 1);
            return 1;
        }
    }

    printf("The element %d couldn't be found\n", *to_check);
    return 0;
}

int main(int argc, char *argv[])
{
    int n, check;

    printf("Enter the number of elements : ");
    scanf(" %d", &n);

    int array[n];

    printf("Enter the elements one by one : ");

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", array + i);
    }

    printf("Enter the element to be checked : ");
    scanf(" %d", &check);

    check_element(array, n, &check);

    return 0;
}
