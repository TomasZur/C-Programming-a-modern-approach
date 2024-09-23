#include <stdio.h>

int main()
{

    float income;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income < 750)
    {
        printf("Amount of tax is: %.2f", income * 0.01);
    }
    else if (income <= 2250)
    {
        printf("Amount of tax is: %.2f", 7.5 + income * 0.02);
    }
    else if (income <= 3750)
    {
        printf("Amount of tax is: %.2f", 37.5 + income * 0.03);
    }
    else if (income <= 5250)
    {
        printf("Amount of tax is: %.2f", 82.5 + income * 0.04);
    }
    else if (income <= 7000)
    {
        printf("Amount of tax is: %.2f", 142.5 + income * 0.05);
    }
    else
    {
        printf("Amount of tax is: %.2f", 230 + income * 0.06);
    }
    return 0;
}