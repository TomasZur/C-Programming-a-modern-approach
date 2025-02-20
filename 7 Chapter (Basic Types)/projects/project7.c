#include <stdio.h>

int main()
{
    int num1, denom1, num2, denom2, result_num, result_denom,gcd,remainder,temp_num,temp_denom;
    char operator;

    printf("Enter first fraction: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    operator= getchar();
    printf("Enter an operator: ");
    operator= getchar();

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    if (operator== '+')
    {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The sum is %d/%d\n", result_num, result_denom);
    }else if(operator== '-'){
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The subtraction is %d/%d\n", result_num, result_denom);
    }else if(operator=='*'){
        result_num = num1 *  num2;
        result_denom = denom1 * denom2;
        printf("The multiplication is %d/%d\n", result_num, result_denom);
    }else if(operator=='/'){
        result_num = num1 *  denom2;
        result_denom = denom1 * num2;
        printf("The division is %d/%d\n", result_num, result_denom);
    }
    temp_num=result_num;
    temp_denom=result_denom;
    for (;;)
    {
        if (result_num == 0)
        {
            //printf("GCD is: %d\n", result_denom);
            gcd = result_denom;
            break;
        }
        else
        {
            remainder = result_denom % result_num;
            // printf("Remainder: %d\n",remainder);
            result_denom = result_num;
            // printf("M: %d\n",m);
            result_num = remainder;
            // printf("N: %d\n",n);
        }
    }

    

    if(temp_num>temp_denom){
        printf("Lowest in terms: %d %d/%d",temp_num/temp_denom,(temp_num / gcd)-((temp_denom/gcd)*(temp_num/temp_denom)), (temp_denom/ gcd));
    }else{
        printf("Lowest in terms: %d/%d\n", (temp_num / gcd), (temp_denom/ gcd));
    }

    return 0;

}