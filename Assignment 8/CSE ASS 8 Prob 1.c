// Program to get 5 elements in an array and stitch them together

#include <stdio.h>

int stitch(const int num_arr[], const int size)
{
    int stitched = 0;

    for (int i = 0; i < size; i++)
    {
        stitched = (stitched * 10) + num_arr[i];
    }

    return stitched;
}

int main(int argc, char const *argv[])
{
    int num_arr[5];

    for (int i = 0; i < 5; i++)
    {
        scanf(" %d", num_arr + i);
    }

    printf("The number was : %d", stitch(num_arr, sizeof(num_arr) / 4));

    return 0;
}
