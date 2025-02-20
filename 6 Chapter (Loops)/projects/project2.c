#include <stdio.h>

int main()
{

    int n, m, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    for (;;)
    {
        if (n == 0)
        {
            printf("GCD is: %d", m);
            return 0;
        }
        else
        {
            remainder = m % n;
            //printf("Remainder: %d\n",remainder);
            m = n;
            //printf("M: %d\n",m);
            n = remainder;
            //printf("N: %d\n",n);
        }
    }
}