#include <stdio.h>

int main()
{

    int a, b, c, d;
    int min1, min2, max1, max2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a<b){
        min1=a;
        max1=b;
    }else{
        min1=b;
        max1=a;
    }

    if(c<d){
        min2=c;
        max2=d;
    }else{
        min2=d;
        max2=c;
    }

    if(min1>min2){
        printf("Maziausias skaicius: %d\n",min2);
    }else{
        printf("Maziausias skaicius: %d\n",min1);
    }

    if(max1<max2){
        printf("Didziausias skaicius: %d",max2);
    }else{
        printf("Didziausias skaicius: %d",max1);
    }

    return 0;

}

// Pasinaudota chatgpt pagalba