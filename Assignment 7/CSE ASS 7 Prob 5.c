// Program to delete redundant elements

#include <stdio.h>

int main(int argc, char const *argv[])
{

    struct dict
    {
        int value;
        int count;
    };

    int n;

    printf("How many elements would you like in your array : ");
    scanf(" %d", &n);

    struct dict dict_arr[n];
    int temp, found = -1, filled = 0;

    for (int i = 0; i < n; i++)
    {
        dict_arr[i].value = 0;
        dict_arr[i].count = -1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf(" %d", &temp);

        for (int j = 0; j < n; j++)
        {
            if (dict_arr[j].value == temp && dict_arr[j].count > 0)
            {
                dict_arr[j].count++;
                found = -1;
                break;
            }
            else
            {
                found = j - filled;
            }
        }

        if (found != -1)
        {
            dict_arr[found].value = temp;
            dict_arr[found].count = 1;
            filled++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("Value -> %d : Count -> %d\n", dict_arr[i].value, dict_arr[i].count);
    }

    return 0;
}
