#include <stdio.h>



int main(){

    int n,i;
    printf("How many numbers you want to reverse?");
    scanf("%d",&n);
    int a[n];

    printf("Enter %d numbers: ",n);
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("In reverse order:");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;

}