#include <stdio.h>

void pay_amount(int dollars, int *twenty, int *ten, int *five, int *one);

int main()
{

    int money, twenty, ten, five, one;


    printf("Enter an amount of money: ");
    scanf("%d", &money);
    pay_amount(money,&twenty,&ten,&five,&one);
    
    printf("$20 bills: %d\n", twenty);
    
    printf("$10 bills: %d\n", ten);
    
    printf("$5 bills: %d\n", five);
    
    printf("$1 bills: %d\n", one);

  
    return 0;
}

void pay_amount(int dollars, int *twenty, int *ten, int *five, int *one){
    *twenty = dollars / 20;
    dollars = dollars - *twenty * 20;
    *ten = dollars / 10;
    dollars = dollars - *ten * 10;
    *five = dollars / 5;
    dollars = dollars - *five * 5;
    *one = dollars / 1;
    dollars = dollars - *one * 1;
}
