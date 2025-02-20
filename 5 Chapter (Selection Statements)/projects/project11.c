#include <stdio.h>

int main(){

    int number, first_digit, second_digit;

    printf("Enter a number 1-99: ");

    scanf("%d",&number);

    first_digit = number / 10;
    second_digit = number % 10;

    switch(number){
        case 11:
        printf("Eleven");
        return 0;
        case 12:
        printf("Twelve");
        return 0;
        case 13:
        printf("Thirteen");
        return 0;
        case 14:
        printf("Fourteen");
        return 0;
        case 15:
        printf("Fifteen");
        return 0;
        case 16:
        printf("Sixteen");
        return 0;
        case 17:
        printf("Seventeen");
        return 0;
        case 18:
        printf("Eighteen");
        return 0;
        case 19:
        printf("Nineteen");
        return 0;
    }

    switch(first_digit){
        case 0:
        break;
        case 2:
        printf("Twenty ");
        break;
        case 3:
        printf("Thirty ");
        break;
        case 4:
        printf("Fourty ");
        break;
        case 5:
        printf("Fifty ");
        break;
        case 6:
        printf("Sixty ");
        break;
        case 7:
        printf("Seventy ");
        break;
        case 8:
        printf("Eighty ");
        break;
        case 9:
        printf("Ninety ");
        break;
    }

    switch(second_digit){
        case 0:
        break;
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("Four");
        break;
        case 5:
        printf("Five");
        break;
        case 6:
        printf("Six");
        break;
        case 7:
        printf("Seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("Nine");
        break;
    }
    return 0;
}