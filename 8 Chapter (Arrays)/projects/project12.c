#include <stdio.h>
#include <ctype.h>

int main()
{

    int ch, word_value;

    int value[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    
    word_value = 0;

    printf("Enter a word: ");
    
    ch = getchar();
    while (ch != 10)
    {
        ch=toupper(ch);
        
        word_value += value[ch-65];
        
        ch = getchar();
        while(ch==' '){
            ch=getchar();
        }
    }
    printf("Scrabble value: %d", word_value);
    return 0;
}