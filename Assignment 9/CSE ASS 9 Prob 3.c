#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, rf, rs, cf, cs;
    printf("Enter the rows and columns of the first matrix: ");
    scanf("%d %d", &rf, &cf);
    printf("\nEnter the rows and columns of the second matrix: ");
    scanf("%d %d", &rs, &cs);
    while (cf != rs)
    {
        printf("\nInvalid matrix, try again: \n");
        printf("\nEnter the rows and columns of the second matrix: ");
        scanf("%d %d", &rs, &cs);
    }
    int mat1[rf][cf], mat2[rs][cs], *prod;
    printf("\nEnter the elements for matrix 1: ");
    for (i = 0; i < rf; i++)
    {
        for (j = 0; j < cf; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter the elements for matrix 2: ");
    for (i = 0; i < rs; i++)
    {
        for (j = 0; j < cs; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    prod = (int *)calloc(rf * cs, sizeof(int));
    for (i = 0; i < rf; i++)
    {
        for (j = 0; j < cs; j++)
        {
            for (k = 0; k < cf; k++)
            {
                prod[i + j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    for (i = 0; i < rf; i++)
    {
        for (j = 0; j < cs; j++)
        {
            printf(" %d ", prod[i + j]);
        }
        printf("\n");
    }
    free(prod);
}
