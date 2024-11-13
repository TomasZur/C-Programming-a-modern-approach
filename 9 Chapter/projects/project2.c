#include <stdio.h>

double tax(double income);

int main()
{

    double income;

    printf("Enter your income: ");
    scanf("%lf", &income);
    printf("Amount of tax that is due is: %.2lf",tax(income));
    return 0;
}

double tax(double income)
{
    int threshold[5] = {750, 2250, 3750, 5250, 7000 };
    int i=0;
    double tax[6] = {0,7.5, 37.5, 82.5, 145.5, 230};
    double tax_percentage[6]={0.01,0.02,0.03,0.04,0.05,0.06};
    double tax_due;

    for (i = 0; i < 5; i++)
    {
        if (income < threshold[i])
        {   
            break;
        }
    }
    tax_due=tax[i]+income*tax_percentage[i];
    /*printf("->i=%d\n",i);
    printf("tax->%.2lf\ntax_percentage->%.2lf\n",tax[i],tax_percentage[i]);
    printf("Amount of tax is: %.2f",tax[i]+income*tax_percentage[i]);*/
    return tax_due;

}