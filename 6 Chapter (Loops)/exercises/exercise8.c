//10 5 3 2 1 1 1 1 1 1...

#include <stdio.h>

int main(){
    int i;

    for (i=10;i>=1;i/=2){
        printf("%d ",i++);
    }

    return 0;
}