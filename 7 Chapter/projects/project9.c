#include <stdio.h>
#include <ctype.h>


int main()
{

    int hour, minute, time_midnight, temp_time1, temp_time2;
    char ch;

    printf("Enter a 12h time: ");

    scanf("%d:%d", &hour, &minute);
    do{
        ch=getchar();
    }while(isspace(ch));
    //printf("ch->%c\n",ch);
    ch=toupper(ch);
    if(ch=='P'){
        if(hour==12){

        }else{
            hour=hour+12;
        }
    }else if(hour==12){
        hour=hour-12;
    }
    printf("Equivalent 24h time %d:%d",hour,minute);
    return 0;
}