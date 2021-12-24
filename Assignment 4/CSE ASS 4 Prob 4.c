// Program to calcuate car price in the showroom

#include <stdio.h>

int main(int argc, char *argv[])
{
    int next;

    do
    {
        int car_price, road_tax, discount, gst;

        printf("Enter the price of the car : ");
        scanf("%d", &car_price);

        printf("Enter the amount of road tax : ");
        scanf("%d", &road_tax);

        printf("Enter the disount percentage : ");
        scanf("%d", &discount);

        if (car_price < 500000)
        {
            gst = 8 * (car_price / 100);
        }
        else if (car_price >= 500000 && car_price < 1000000)
        {
            gst = 18 * (car_price / 100);
        }
        else
        {
            gst = 28 * (car_price / 100);
        }

        printf("The on-road price of this car is : %d\n", (car_price + road_tax + gst) - (discount * (car_price / 100)));

        printf("Enter '1' if you want to continue : ");
        scanf("%d", &next);

        if (next != 1)
        {
            next = 0;
        }
    } while (next);

    return 0;
}
