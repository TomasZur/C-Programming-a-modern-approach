//mano spėjimas buvo 5, nes galvojau countina kiek kartu nelyginis skaičius
// tačiau programa sudėjo visus lyginius skaičius iki 10 neimtinai
#include <stdio.h>

int main(){

    int sum= 0,i;

    for (i = 0; i < 10; i++) {
        printf("i=%d",i);
        if (i % 2)
            continue;
        sum+= i;
        printf(" Sum prisidejo+1\n");
    }
    printf ( " %d\n", sum) ; 

}