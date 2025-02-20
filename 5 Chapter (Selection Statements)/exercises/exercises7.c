#include <stdio.h>

int main()
{
    int i = -17;

    printf("%d\n", i >= 0 ? i : -i);

    return 0;

    //Output su 17 bus 17 ir jei bus -17 irgi bus 17
}