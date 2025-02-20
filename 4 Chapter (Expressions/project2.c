#include <stdio.h>

int main()
{
    int a, b, c;

    printf("\nEnter a three digit number: ");
    scanf("%d", &a);

    printf("Reversal is: %d|%d|%d", (a % 10), (a % 100) / 10, a / 100);

    printf("\nEnter another three digit number: ");
    scanf("%1d%1d%1d", &a, &b, &c);

    printf("Reversal is %d|%d|%d", c, b, a);

    return 0;
}