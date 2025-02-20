#include <stdio.h>

int main()
{
    // 1 uzduotis
    // a)
    int i = 5;
    int j = 3;

    printf("%d,%d\n", i / j, i % j);

    // output bus: 1,2 (Teisinga)

    // b)
    i = 2;
    j = 3;

    printf("%d\n", (i + 10) % j);

    // output bus: 0 (Teisinga)

    // c)
    i = 7;
    j = 8;
    int k = 9;

    printf("%d\n", (i + 10) % k / j);

    // output bus: 0 (Neteisinga buvo 1), gaunasi (17)%9 ir tik tada dalyba is j

    // d)

    i = 1;
    j = 2;
    k = 3;

    printf("%d", (i + 5) % (j + 2) / 2);

    //output bus 1 (teisingai)


    // 2 uzduotis Nėra skirtumo nes vis tiek bus dalyba iš neigiamo skaičiaus

    return 0;
}