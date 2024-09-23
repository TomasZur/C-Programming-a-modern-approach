#include <stdio.h>

int main()
{
    float commission, value, share_number, share_price;

    printf("Enter the number of shares bought and the share price: ");
    scanf("%f %f", &share_number, &share_price);

    value = share_number * share_price;
    printf("Value of trade: %.2f\n", value);

    if (value < 2500)
    {
        commission = 30 + value * (1.7 / 100);
    }
    else if (value < 6250)
    {
        commission = 56 + value * (0.66 / 100);
    }
    else if (value < 20000)
    {
        commission = 76 + value * (0.34 / 100);
    }
    else if (value < 50000)
    {
        commission = 100 + value * (0.22 / 100);
    }
    else if (value < 500000)
    {
        commission = 155 + value * (0.11 / 100);
    }
    else
    {
        commission = 255 + value * (0.09 / 100);
    }

    if (commission < 39)
    {
        commission = 39;
    }

    printf("Commission: $%.2f\n", commission);

    if (share_number < 2000)
    {
        commission = 33 + 0.03 * share_number;
        printf("Rival broker commision: $%.2f\n", commission);
    }
    else
    {
        commission = 33 + 0.02 * share_number;
        printf("Rival broker commision: $%.2f\n", commission);
    }

    return 0;
}