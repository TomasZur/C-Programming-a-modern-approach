#include <stdio.h>

int main()
{

    int a;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &a);
    printf("%d%d%d%d%d", (((((a / 8) / 8) / 8) / 8) % 8), ((((a / 8) / 8) / 8) % 8), (((a / 8) / 8) % 8), ((a / 8) % 8), a % 8);
}