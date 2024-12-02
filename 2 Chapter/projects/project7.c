#include <stdio.h>

int main(){

    int money,twenty,ten,five,one;

    printf("Enter an amount of money: ");
    scanf("%d",&money);
    twenty=money/20;
    money=money-twenty*20;
    printf("$20 bills: %d\n",twenty);
    ten=money/10;
    money=money-ten*10;
    printf("$10 bills: %d\n",ten);
    five=money/5;
    money=money-five*5;
    printf("$5 bills: %d\n",five);
    one=money/1;
    money=money-one*1;
    printf("$1 bills: %d\n",one);
    
    if(money==0){
        printf("Teisinga");
    }
    return 0;
}