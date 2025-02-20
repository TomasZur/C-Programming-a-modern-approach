#include <stdio.h>

int main()
{
    int i;

    float a, max;
    max = 0;

    for (;;)
    {
        printf("Enter a number: ");
        scanf("%f", &a);
        if (a > max)
        {
            max = a;
        }
        if (a <= 0)
        {
            printf("The largest number entered was: %.2f", max);
            return 0;
        }
    }
}