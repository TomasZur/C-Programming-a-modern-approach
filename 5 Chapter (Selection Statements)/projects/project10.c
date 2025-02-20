#include <stdio.h>

int main()
{

    int grade, first_digit;

    printf("Enter a numerical grade 0-100: ");
    scanf("%d", &grade);

    if (grade < 0 || 100 < grade)
    {
        printf("The grade is invalid");
        return 0;
    }

    first_digit = grade / 10;

    switch (first_digit)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Letter grade: F");
        break;
    case 6:
        printf("Letter grade D");
        break;
    case 7:
        printf("Letter grade C");
        break;
    case 8:
        printf("Letter grade B");
        break;
    case 9:
    case 10:
        printf("Letter grade A");
        break;
    }

    printf("\nfirst digit: %d", first_digit);

    return 0;
}