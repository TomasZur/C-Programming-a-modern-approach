// su int ir long int tai fail įvyksta ties 46341, su short int 182
#include <stdio.h>

int main()
{
    long int i,m;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        m=i*i;
        if((m)<0){
            printf("Fail because %ld at i=%ld",m,i);
            return 0;
        }else{
            printf("%ld>>>>%ld\n", i,m);
        }
    }

    return 0;
}