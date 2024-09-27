#include <stdio.h>

int main()
{
    int n, m, temp_n, temp_m, remainder, gcd;

    printf("Enter a fraction (x/x): ");
    scanf("%d/%d", &n, &m);
    temp_m=m;
    temp_n=n;

    for (;;)
    {
        if (n == 0)
        {
            printf("GCD is: %d\n", m);
            gcd = m;
            break;
        }
        else
        {
            remainder = m % n;
            // printf("Remainder: %d\n",remainder);
            m = n;
            // printf("M: %d\n",m);
            n = remainder;
            // printf("N: %d\n",n);
        }
    }

    printf("Lowest in terms: %d/%d", (temp_n / gcd), (temp_m / gcd));
    return 0;
}