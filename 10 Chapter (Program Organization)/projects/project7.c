#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};
char digits[3][4 * MAX_DIGITS];

int main()
{

    int digit,position=0;
    char ch;
    clear_digits_array();

    printf("Enter a number: ");
   
   do
    {
        ch = getchar();
        if (isdigit(ch))
        {
            digit=ch-'0';
            process_digit(digit,position);
            position++;
        }
        

    } while (ch != '\n');

    print_digits_array();
    return 0;
}

void clear_digits_array(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < (MAX_DIGITS * 4); j++)
        {
            digits[i][j] = ' ';
        }
    }
}

void process_digit(int digit, int position)
{

    int i = 0;
    
    for (i = 0; i < 7; i++)
    {

        if (segments[digit][i] == 1)
        {
            if (i == 0)
            {
                digits[0][(position*4)+1] = '_';
            }
            else if (i == 1)
            {
                digits[1][(position*4)+2] = '|';
            }
            else if (i == 2)
            {
                digits[2][(position*4)+2] = '|';
            }
            else if (i == 3)
            {
                digits[2][(position*4)+1] = '_';
            }
            else if (i == 4)
            {
                digits[2][(position*4)+0] = '|';
            }
            else if (i == 5)
            {
                digits[1][(position*4)+0] = '|';
            }
            else if (i == 6)
            {
                digits[1][(position*4)+1] = '_';
            }
        }
    }
}
void print_digits_array(void){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<(MAX_DIGITS*4);j++){
            printf("%c",digits[i][j]);
        }
        printf("\n");
    }
}