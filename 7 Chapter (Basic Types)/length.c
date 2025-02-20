#include <stdio.h>

int main(){
    char ch;
    int len = 0;

    printf("Enter a message: ");
    ch=getchar();
    while (ch!='\n'){
        len++;
        ch=getchar();
    }
    printf("The message contains %d characters",len);

    return 0;
}