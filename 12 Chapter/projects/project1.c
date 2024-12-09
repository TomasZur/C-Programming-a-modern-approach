#include <stdio.h>

#define N 10

int main(void){
    int a[N], *p;
    char ch;

    printf("Enter a sentence: ");
    do{
        
        p=a;
        ch=getchar();
        *p=ch;
        printf("p=%d",*p);
        p++;

    }while(ch!='\n' && p<a+N);

    
    printf("In reverse order:");
    for (p=a+N-1;p>=a;p--)
        printf(" %c",*p);
    printf("\n");

    return 0;
}