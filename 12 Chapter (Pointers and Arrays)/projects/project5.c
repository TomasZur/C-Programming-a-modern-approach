#include <stdio.h>

int main()
{

    char sentence[100]={' '};
    char ch;

    int i = 0;
    int j = 0;
    int k = 1;

    printf("Enter a sentence: ");
    ch = getchar();
    do
    {
        
        sentence[i++] = ch;
        ch = getchar();

    } while (ch != '!' && ch != '.' && ch != '?');

    
    
    for (i;0<=i;i--){
        j++;
    
        if(sentence[i]==' '){
            for(k=1;k<j;k++){
                printf("%c",sentence[i+k]);
            }
            printf(" ");
            j=0;
            k=1;
        }
    }

    do{
        printf("%c",sentence[i++]);
    }while(sentence[i]!=' ');
    
    printf("%c",ch);
    return 0;
}