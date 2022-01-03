// Program to extract a substring

#include <stdio.h>

void print_chars(const char str[], int start, int end)
{
    if (start < end)
    {
        for (int i = start; i < end; i++)
        {
            printf("%c", *(str + i));
        }
    }
    else
    {
        for (int i = start - 1; i > end - 1; i--)
        {
            printf("%c", *(str + i));
        }
    }

    printf("\n");
}

int main(int argc, char const *argv[])
{
    char instr[100];
    int start, end;

    printf("Enter a string : ");
    fgets(instr, 100, stdin);

    printf("Initial position of slice : ");
    scanf(" %d", &start);

    printf("Number of characters to slice off : ");
    scanf(" %d", &end);

    end += start;

    print_chars(instr, start, end);
    print_chars(instr, end, start);

    return 0;
}
