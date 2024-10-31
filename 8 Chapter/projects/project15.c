#include <stdio.h>

int main()
{

    int message[80];
    char ch;

    int letter,shift, i, j;

    printf("Enter a message to be encrypted: ");

    do
    {
        ch = getchar();
        message[i] = ch;
        i++;
    } while (ch != '\n');

    printf("Enter shift amount(1-25): ");
    scanf("%d", &shift);

    for (j = 0; j < i; j++)
    {
        if(message[j]>64 && message[j]<96){
            letter=((message[j]-'A')+shift)%26+'A';
            printf("%c",letter);
        }else if(message[j]>96 && message[j]<123){
            letter=((message[j]-'a')+shift)%26+'a';
            printf("%c",letter);
        }else{
            printf("%c",message[j]);
        }
    }
    return 0;
}