#include <stdio.h>
#include <ctype.h>

int main()
{

    char ch, first_letter;

    printf("Enter your first and last name: ");

    do
    {
        first_letter = getchar();
    } while (isspace(first_letter));

    printf("First letter ->%c\n",first_letter);

    do
    {
        ch = getchar();
    } while (ch != ' ');

    do
    {
        ch = getchar();
    } while (isspace(ch));

    do
    {
        if(ch==' '){
            break;
        }
        printf("%c", ch);
        ch = getchar();

    } while (ch != '\n');

    printf(", %c.", first_letter);
    return 0;
}
