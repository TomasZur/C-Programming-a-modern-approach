#include <stdio.h>

int main()
{
    int i, j, k;

    printf("Enter two integers: ");
    scanf("%d %d", &i, &j);

    k = i < j ? -1 : i == j ? 0 : 1;

    printf("%d", k);

    return 0;
}