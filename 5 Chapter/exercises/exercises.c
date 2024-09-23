#include <stdio.h>

int main()
{

    // 1 Užduotis
    int i, j, k;
    i = 2;
    j = 3;

    k = i * j == 6;
    printf("k=%d\n", k);
    // Output bus 1
    i = 5;
    j = 10;
    k = 1;
    printf("%d\n", k > i < j);
    // output bus 1
    i = 3;
    j = 2;
    k = 1;
    printf("%d\n", i < j == j < k);
    // output bus 1
    i = 3;
    j = 4;
    k = 5;
    printf("%d", i % j + i < k);
    // output bus 0
}