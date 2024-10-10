#include <stdio.h>

int main()
{

    float number, result;

    char ch;

    printf("Enter an expression: ");
    scanf("%f", &result);
    do
    {
        ch = getchar();
        if (ch == '+')
        {
            scanf("%f", &number);
            result += number;
        }
        else if (ch == '-')
        {
            scanf("%f", &number);
            result -= number;
        }
        else if (ch == '*')
        {
            scanf("%f", &number);
            result *= number;
        }
        else if (ch == '/')
        {
            scanf("%f", &number);
            if(number==0){
                printf("Division from 0 is not allowed");
                return 1;
            }
            result /= number;
        }
        // printf("Loop is loopin->%c\n",ch);
    } while (ch != '\n');

    printf("Result=%.2f", result);
    return 0;
}