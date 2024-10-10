#include <stdio.h>

int main()
{

    int  i;

    long double result;

    printf("Enter a integer: ");
    scanf("%d", &i);

    result=1;
    for (i; i > 0; --i)
    {
        result = result * i;
    }

    printf("result: %Lf", result);

    return 0;
}

/*
a)n=7
b)n=17
c)n=17
d)n=39
e)n=34
f)n=170
g)neveikia
*/