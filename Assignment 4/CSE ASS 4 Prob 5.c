// Program to calculate the electriciy bill

#include <stdio.h>

void bill(int id);
int tarD(int unit);
int tarC(int unit);

int main()
{
    int id, i;

    do
    {
        printf("Enter your customer id of 6 digits\n");
        scanf("%d", &id);

        bill(id);

        printf("\nContinue?\n 1 to continue 0 to end");
        scanf("%d", &i);
    } while (i != 0);
}

void bill(int id)
{
    int tar, charges, punit, nunit, unit;

    printf("\nEnter previous unit and current unit:  ");
    scanf("%d %d", &punit, &nunit);

    unit = nunit - punit;

    printf("\n\nChoose your tariff type \n1-Domestic, 2-Commercial, 3-Industrial\n");
    scanf("%d", &tar);

    switch (tar)
    {
    case 1:
        tarD(unit);
        printf("\nCustomer id: %d\n No. of units consumed: %d\n Bill for this month: %d", id, unit, tarD(unit));

        break;

    case 2:
        tarC(unit);
        printf("\nCustomer id: %d\n No. of units consumed: %d\n Bill for this month: %d", id, unit, tarC(unit));

        break;

    case 3:

        charges = unit * 10;
        printf("\nCustomer id: %d\n No. of units consumed: %d\n Bill for this month: %d", id, unit, charges);

        break;
    }
}

int tarD(int unit)
{
    int charges;

    if (unit > 0 && unit <= 100)
    {
        charges = unit * 2.75;
    }
    else if (unit > 100 && unit <= 500)
    {
        charges = unit * 4.50;
    }
    else
    {
        charges = unit * 5.00;
    }

    return charges;
}

int tarC(int unit)
{
    int charges;

    if (unit > 0 && unit <= 200)
    {
        charges = unit * 5;
    }
    else if (unit > 200 && unit <= 500)
    {
        charges = unit * 5.50;
    }
    else
    {
        charges = unit * 6.00;
    }

    return charges;
}
