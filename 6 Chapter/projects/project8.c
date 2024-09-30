#include <stdio.h>

int main(){


    int i,starting_day,days_in_month;

    printf("Enter number of days in month: ");
    scanf("%d",&days_in_month);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d",&starting_day);

    for(i=1;i<starting_day;i++){
        printf("   ");
    }

    for(i=1;i<=days_in_month;i++){
        printf("%3d",i);
        starting_day++;
        if(starting_day==7){
            printf("\n");
            starting_day=1;
        }
        
    }

    return 0;


}