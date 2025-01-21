#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], *p;
    char ch;
    p = a;

    printf("Enter a sentence: ");
    do
    {

        ch = getchar();
        *p = ch;
        p++;
    } while (ch != '\n' && p < a + N);

    printf("In reverse order:\n");
    for (p--; p >= a; p--)
    {
        printf("%c", *p);
    }

    printf("\n");

    return 0;
}