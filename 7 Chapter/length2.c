#include <stdio.h>

int main(){
    char ch;
    int len = 0;

    printf("Enter a message: ");
    while(getchar()!= '\n')
        len++;
    printf("The message contains %d characters",len);

    return 0;
}