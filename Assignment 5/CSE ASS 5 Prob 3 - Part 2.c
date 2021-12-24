// C prgram to search for an element in an array

#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, check, count = 0;

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
            count++;
        }
    }

    printf("The element was found %d times\n", count);

    return 0;
}
