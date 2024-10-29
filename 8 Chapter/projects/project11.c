#include <stdio.h>

int main(){

    int ch,i;

    int number[15];

    
    printf("Enter a word: ");

    for (i=0;i<15;i++){
        char ch=getchar();
        while(ch=='\n'){
            ch=getchar();
        }
        if(ch !=' '){
            number[i]=ch;
        }else{
            i--;
        }
        
    }
    
    for (i=0;i<15;i++){
        
        //printf("\n->%c\n",number);
        if(number[i]<64){
            printf("%c",number[i]);
        }else if(number[i]<68){
            printf("2");
        }else if(number[i]<71){
            printf("3");
        }else if(number[i]<74){
            printf("4");
        }else if(number[i]<77){
            printf("5");
        }else if(number[i]<80){
            printf("6");
        }else if(number[i]<84){
            printf("7");
        }else if(number[i]<87){
            printf("8");
        }else if(number[i]<90){
            printf("9");
        }else{
            printf("%c",number[i]);
        }
    }

    
    return 0;


}