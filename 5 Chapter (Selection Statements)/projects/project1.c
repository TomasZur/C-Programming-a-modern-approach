#include <stdio.h>

int main()
{

    int a;

    printf("Enter a number: ");

    scanf("%d", &a);

    if (a < 10)
    {
        printf("The number %d, has 1 digit", a);
    }
    else if (a < 100)
    {
        printf("The number %d, has 2 digits", a);
    }
    else if (a < 1000)
    {
        printf("The number %d, has 3 digits", a);
    }
    else if (a < 10000)
    {
        printf("The number %d, has 4 digits", a);
    }

    return 0;
}
