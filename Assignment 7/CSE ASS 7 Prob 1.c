// Program to insert a value into a sorted array

#include <stdio.h>

int insertkey(int arr[], int n, int x, int capacity)
{
    if (n >= capacity)
    {
        return n;
    }

    int i;

    for (i = n - 1; (i >= 0 && arr[i] > x); i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = x;

    return (n + 1);
}

int main()
{
    int i, n, x;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to be inserted: ");
    scanf("%d", &x);

    n = insertkey(arr, n, x, 10);

    printf("\nThe array after insertion: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
