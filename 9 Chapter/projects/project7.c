#include <stdio.h>

int power(int x, int n);

int main(){

    int x,n,result;
    printf("Enter x and n: ");
    scanf("%d %d",&x,&n);
    result=power(x,n);
    printf("%d",result);
    return 0;
}

int power(int x, int n){

    if(n==0){
        return 1;
    }
    int half=power(x,n/2);
    if(n%2==0){
        return half*half;
    }else{
        return x*power(x,n-1);
    }
}