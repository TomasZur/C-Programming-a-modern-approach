#include <stdio.h>

int main(){

    int i,j=1,l;

    printf("Enter a number: ");
    scanf("%d",&i);


   do{
    l=j*j;
    if((l%2)==0){
        printf("%d\n",l);
    }
    
    j++;
   }while(l<i);
   
   return 0;

}