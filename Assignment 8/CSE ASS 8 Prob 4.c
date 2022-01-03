// Program to count the total number of non-zero elements in a matrix

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;

    printf("How many rows : ");
    scanf(" %d", &m);

    printf("How many columns : ");
    scanf(" %d", &n);

    int temp, counter = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element in %d x %d : ", i + 1, j + 1);
            scanf(" %d", &temp);

            if (temp != 0)
            {
                counter++;
            }
        }
    }

    printf("The total number of non-zero elements in the given matrix is : %d\n", counter);

    return 0;
}
