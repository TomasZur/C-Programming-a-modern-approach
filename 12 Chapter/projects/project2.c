#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    int first_sentence[99], i = 0, j = 0;
    char ch;
    bool palindrome = true;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && ch!='?' && ch!='!'&& ch!='.')
    {
        while ((ch==' ' || ch < 65 || (ch > 90 && ch < 97) || ch > 122))
        {
        
            ch = getchar();
        }
        

        first_sentence[i] = ch;
        i++;
    }

    i--;

    for (j = 0; j <= i; j++)
    {
        
        if (tolower(first_sentence[j]) != tolower(first_sentence[i--]))
        {

            palindrome = false;
        }
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