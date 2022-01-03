// Program to find the maximum positive and negative number in a given matrix after splitting the terms into two arrays containing positive and negative elements respectively

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m, n;

    printf("How many rows : ");
    scanf(" %d", &m);

    printf("How many columns : ");
    scanf(" %d", &n);

    int matrix[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element in %d x %d : ", i + 1, j + 1);
            scanf(" %d", &matrix[i][j]);
        }
    }

    int pos_elems[m * n], neg_elems[m * n], pos_counter = 0, neg_counter = 0, pos_max = 0, neg_max = -2147483647;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > 0)
            {
                pos_elems[pos_counter] = matrix[i][j];
                pos_counter++;

                if (matrix[i][j] > pos_max)
                {
                    pos_max = matrix[i][j];
                }
            }
            else if (matrix[i][j] < 0)
            {
                neg_elems[neg_counter] = matrix[i][j];
                neg_counter++;

                if (matrix[i][j] > neg_max)
                {
                    neg_max = matrix[i][j];
                }
            }
        }
    }

    printf("The positive array is : { ");

    for (int i = 0; i < pos_counter; i++)
    {
        printf("%d, ", *(pos_elems + i));
    }

    printf("\b\b }\n");

    printf("The negative array is : { ");

    for (int i = 0; i < neg_counter; i++)
    {
        printf("%d, ", *(neg_elems + i));
    }

    printf("\b\b }\n");

    printf("The largest element in the positive array is : %d\n", pos_max);
    printf("The largest element in the negative array is %d\n", neg_max);

    return 0;
}
