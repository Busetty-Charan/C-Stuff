// Program to find if the given number is an Adam number

#include <stdio.h>

int reverse(int a)
{    
    int i = 0, rem;
    
    while (a != 0)
    {
        rem = a % 10;
        a = a / 10;
        i = (i * 10) + rem;
    }

    return i;
}

int main()
{
    int a, b = 0, c = 0, d = 0;

    printf("Input the number to be tested: ");
    scanf("%d", &a);
    
    b = reverse(a);
    
    printf("The number and it's reverse is %d => %d", a,b);
    
    c = a * a;
    d = b * b;
    
    printf("\nThe square of the number and it's reverse is %d => %d", c,d);
    
    if (c == reverse(d))
    {
        printf("\nThe given number %d is an Adam's number\n", a);
    }
    else 
    {
        printf("\nThe given number %d is not an Adam's number\n", a);
    }
}
