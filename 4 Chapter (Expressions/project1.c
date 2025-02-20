#include <stdio.h>

int main()
{
    int a, b;
    // čia jei paprastu būdu

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &a, &b);
    printf("Reversal is: %d%d", b, a);

    printf("\nEnter a two digit number: ");
    scanf("%d", &a);
    printf("Reversal is: %d%d", (a % 10), (a / 10));

    return 0;
}