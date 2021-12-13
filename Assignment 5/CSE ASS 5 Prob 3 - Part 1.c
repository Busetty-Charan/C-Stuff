// C prgram to count an element in an array

#include <stdio.h>

int count_element (const int *to_be_checked, int size_of_arr, const int *to_check)
{
    int count = 0;

    for (int i = 0; i < size_of_arr; i++)
    {
        if (*(to_be_checked + i) == *to_check)
        {
            count++;
        }
    }

    return count;
}

int main (int argc, char *argv[])
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
    
    printf("Enter the element to be counted : ");
    scanf(" %d", &check);

    printf("This element was found %d times\n", count_element(array, n, &check));

    return 0;
}
