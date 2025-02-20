#include <stdio.h>
#include <stdbool.h>

int main()
{

    int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int occurances[10] = {0};
    int digit, i;
    long n;


    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {

        digit = n % 10;

        occurances[digit]++;
        n /= 10;
    }

    printf("\n");
    printf("Digit:");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", numbers[i]);
    }
    printf("\n");
    printf("Pasik:");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", occurances[i]);
    }
    printf("\n");

    return 0;
}