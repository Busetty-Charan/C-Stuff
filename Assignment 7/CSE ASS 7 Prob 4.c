// Program to delete a value from an array based on value

#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n;

    printf("How many elements would you like to have in your array : ");
    scanf(" %d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", arr + i);
    }

    int rem;

    printf("What element would you like to remove : ");
    scanf(" %d", &rem);
    printf("[ ");

    for (int i = 0; i < n; i++)
    {
        if (*(arr + i) == rem)
        {
            continue;
        }

        printf("%d, ", *(arr + i));
    }

    printf("\b\b ]\n");

    return 0;
}
