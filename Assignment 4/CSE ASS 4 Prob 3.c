// Program to calculate perimeter of an n-sided polygon based on user input

#include <stdio.h>

void perimeter(const int *choice)
{
    switch (*choice)
    {
    case 1:
    {
        int side;

        printf("Enter the length of the side : ");
        scanf("%d", &side);

        printf("The perimeter of the square is : %d\n", 4 * side);

        break;
    }
    case 2:
    {
        int l, b;

        printf("Enter the length of the rectangle : ");
        scanf("%d", &l);

        printf("Enter the breadth of the rectangle : ");
        scanf("%d", &b);

        printf("The perimeter of the rectangle is : %d\n", 2 * (l + b));

        break;
    }
    case 3:
    {
        int side, perimeter = 0;

        for (int i = 1; i != 4; i++)
        {
            printf("Enter the length of side%d : ", i);
            scanf(" %d", &side);

            perimeter += side;
        }

        printf("The perimeter of the triangle is : %d\n", perimeter);

        break;
    }
    case 4:
    {
        int side, n, perimeter = 0;

        printf("Enter the number of sides : ");
        scanf("%d", &n);

        for (int i = 1; i != n + 1; i++)
        {
            printf("Enter the length of side%d : ", i);
            scanf("%d", &side);

            perimeter += side;
        }

        printf("The perimeter of the polygon is : %d\n", perimeter);

        break;
    }
    }
}

int main(int argc, char *argv[])
{
    int choice;

    printf("Perimeter Calculator\n\n1. Square\n2. Rectangle\n3. Triangle\n4. Polygon\n\nEnter your choice : ");
    scanf("%d", &choice);

    perimeter(&choice);

    return 0;
}
