#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denonimator);

int main()
{
    int numerator, denominator,reduced_numerator,reduced_denominator;

    printf("Enter a fraction (x/x): ");
    scanf("%d/%d", &numerator, &denominator);
    reduce(numerator,denominator,&reduced_numerator,&reduced_denominator);

    printf("Lowest in terms: %d/%d", reduced_numerator,reduced_denominator);
    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denonimator){

    int temp_n, temp_m, remainder, gcd;
    temp_m=denominator;
    temp_n=numerator;

    for (;;)
    {
        if (numerator == 0)
        {
            printf("GCD is: %d\n", denominator);
            gcd = denominator;
            break;
        }
        else
        {
            remainder = denominator % numerator;
            // printf("Remainder: %d\n",remainder);
            denominator = numerator;
            // printf("M: %d\n",m);
            numerator = remainder;
            // printf("N: %d\n",n);
        }
    }
    *reduced_numerator=temp_n/gcd;
    *reduced_denonimator=temp_m/gcd;
}
