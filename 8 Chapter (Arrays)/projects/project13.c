#include <stdio.h>
#include <ctype.h>

int main()
{

    char ch, first_letter;
    int i=0;
    int j=0;
    char lastname[20];

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
        
        lastname[i] = ch;
        i++;
        ch=getchar();;
        

    } while (ch != '\n');
    
    for(j=0;j<i;j++){
        printf("%c",lastname[j]);
    }

    printf(", %c.", first_letter);
    
    return 0;
}
