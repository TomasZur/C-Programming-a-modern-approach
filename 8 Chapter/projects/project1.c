#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10] = {false};
    bool repeated = {false};
    int repeats[10]={0};
    int digit,i;
    long n;

    i=0;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {

        digit = n % 10;

        if (digit_seen[digit])
        {
            repeats[i]=digit;
            i++;
            repeated = true;
        }

        digit_seen[digit] = true;
        n /= 10;
    }

    if (repeated > 0)
    {
        printf("Repeated digit ");
        for(i=0;i<10;i++){
            if(repeats[i]!=0){
                printf("%d ",repeats[i]);
            }
       
        }
        
    }
    else
    {
        printf("No repeated digit\n");
    }

    return 0;
}