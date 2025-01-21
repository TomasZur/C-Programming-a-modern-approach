#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    int first_sentence[99],*pointer1,*pointer2;
    char ch;
    bool palindrome = true;
    pointer1=first_sentence;
    pointer2=first_sentence;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && ch!='?' && ch!='!'&& ch!='.')
    {
        while ((ch==' ' || ch < 65 || (ch > 90 && ch < 97) || ch > 122))
        {
        
            ch = getchar();
        }
        

        *pointer1 = tolower(ch);
        pointer1++;

        
    }
    for (pointer1--; pointer1 >= first_sentence; pointer1--)
    {
        if(*pointer1!=*pointer2){
            palindrome = false;
        }
        pointer2++;
    }
    

    if (palindrome)
    {
        printf("The sentence is a palindrome");
    }
    else
    {
        printf("The sentence is not a palindrome");
    }

    printf("\n");

    return 0;
}