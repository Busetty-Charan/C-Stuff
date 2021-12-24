// Program to find GCD of two prime numbers and print all co-primes from 2 - 20

#include <stdio.h>

void GCD(int n1, int n2, int coprime_flag)
{
    int rem, x, y;

    x = n1;
    y = n2;
    rem = n1 % n2;

    while (rem > 0)
    {
        n1 = n2;
        n2 = rem;
        rem = n1 % n2;
    }

    if (n2 == 1)
    {
        printf("The numbers %d and %d are co-prime\n", x, y);
    }
    else if (coprime_flag == 0)
    {
        printf("The GCD of %d and %d is %d\n", x, y, n2);
    }
}

void print_coprimes(int num)
{
    int i, j;

    for (i = 2; i <= num; i++)
    {
        for (j = i; j <= num; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                GCD(i, j, 1);
            }
        }
    }
}

int main(int argc, char *argv[])
{
    int a, b;

    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    GCD(a, b, 0);
    print_coprimes(20);
}
