// Program to insert values in positions which are multiples of 3

#include <stdio.h>

int main(int argc, char const *argv[]) {

    int n;

    printf("How many elements would you like to insert : ");
    scanf(" %d", &n);

    int noob_array[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %d", noob_array + i);
    }

    printf("The new array would be :\n[ ");

    for (int i = 0; i < n; i++)
    {
        printf("0, 0, %d, ", *(noob_array + i));
    }

    printf("\b\b ]\n");

    return 0;
}
