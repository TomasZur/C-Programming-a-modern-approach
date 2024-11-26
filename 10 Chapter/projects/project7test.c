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
    
    
    int digit = 9;
    int i = 0;
    int j = 0;
    for(i=0;i<3;i++){
        for(j=0;j<(MAX_DIGITS*4);j++){
            digits[i][j]='.';
        }
        printf("\n");
    }

    for (i = 0; i < 7; i++)
    {

        if (segments[digit][i] == 1)
        {
            if (i == 0)
            {
                digits[0][1] = '_';
            }
            else if (i == 1)
            {
                digits[1][2] = '|';
            }
            else if (i == 2)
            {
                digits[2][2] = '|';
            }
            else if (i == 3)
            {
                digits[2][1] = '_';
            }
            else if (i == 4)
            {
                digits[2][0] = '|';
            }
            else if (i == 5)
            {
                digits[1][0] = '|';
            }
            else if (i == 6)
            {
                digits[1][1] = '_';
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<(MAX_DIGITS*4);j++){
            printf("%c",digits[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}