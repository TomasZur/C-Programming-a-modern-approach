#include <stdio.h>

int main()
{
    int i, j, k;
    i = 3;
    j = 4;
    k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);
    // outpput bus 1 3 5 5 ( buvo 1 3 4 5)
    i = 7;
    j = 8;
    k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);
    // output bus 1 7 8 9 (buvo 0 7 8 9)
    i = 7;
    j = 8;
    k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);
    // output bus 1 8 8 9
    i = 1;
    j = 1;
    k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);
    // output bus 1 2 1 1
    return 0;
}