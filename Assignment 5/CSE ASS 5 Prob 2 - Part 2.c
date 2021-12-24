// C prgram to search for an element in an array

#include <stdio.h>

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

    for (int i = 0; i < n; i++)
    {
        if (*(array + i) == check)
        {
            printf("Element %d found at position %d\n", check, i + 1);

            return 1;
        }
    }

    printf("The element %d couldn't be found\n", check);

    return 0;
}
