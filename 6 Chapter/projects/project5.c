#include <stdio.h>

int main()
{
    int a;
  

    printf("\nEnter a  number: ");
    scanf("%d", &a);
    printf("Number in reverse is: ");
    do{
        printf("%d",a%10);
        a=a/10;
    }while(a!=0);

    return 0;
}