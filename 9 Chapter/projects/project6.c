#include <stdio.h>
#include <math.h>


int compute_function(int x);

int main(){


    int x,result;

    printf("Enter a number: ");
    scanf("%d",&x);

    result=compute_function(x);

    printf("%d",result);

    return 0;

}

int compute_function(int x){

    int result;

    result=3*pow(x,5)+2*pow(x,4)-5*pow(x,3)-pow(x,2)+7*x-6;

    return result;

}