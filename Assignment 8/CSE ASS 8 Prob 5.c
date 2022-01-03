// Program to convert 'CEASER' to 'HJFXJW'

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ceaser[7] = "CEASER";

    for (int i = 0; i < 6; i++)
    {
        printf("%c", ceaser[i] + 5);
    }

    return 0;
}
