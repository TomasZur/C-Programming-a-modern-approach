#include <stdio.h>

int main()
{

    int n = 1, i, fact;
    fact = 1;

    float e = 1.0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
        e += 1.0 / fact;
    }

    printf("e= %f", e);
    return 0;
}