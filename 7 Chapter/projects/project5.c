#include <stdio.h>
#include <ctype.h>

int main()
{

    int ch, value, word_value;

    value = 0;

    word_value = 0;

    printf("Enter a word: ");
    
    ch = getchar();
    while (ch != 10)
    {
        ch=toupper(ch);
        switch (ch)
        {
        case 65:
        case 69:
        case 73:
        case 76:
        case 78:
        case 79:
        case 82:
        case 83:
        case 84:
        case 85:
            value = 1;
            break;
        case 68:
        case 71:
            value = 2;
            break;
        case 66:
        case 67:
        case 77:
        case 80:
            value = 3;
            break;
        case 70:
        case 72:
        case 86:
        case 87:
        case 89:
            value = 4;
            break;
        case 75:
            value = 5;
            break;
        case 74:
        case 88:
            value = 8;
            break;
        case 81:
        case 90:
            value = 10;
            break;
        }
        word_value += value;
        ch = getchar();
    }
    printf("Scrabble value: %d", word_value);
    return 0;
}