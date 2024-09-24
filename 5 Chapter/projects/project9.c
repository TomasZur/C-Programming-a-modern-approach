#include <stdio.h>

int main()
{

    int year, month, day, year2, month2, day2;

    printf("Enter first date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &day, &month, &year);

    if (day < 0 || day >= 31)
    {
        printf("Invalid day entered");
        return 0;
    }
    if (month < 0 || month >= 12)
    {
        printf("Invalid month entered");
        return 0;
    }
    if (year < 0 || year >= 9999)
    {
        printf("Invalid year entered");
        return 0;
    }

    printf("Enter second date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &day2, &month2, &year2);

    if (day2 < 0 || day2 >= 31)
    {
        printf("Invalid day entered");
        return 0;
    }
    if (month2 < 0 || month2 >= 12)
    {
        printf("Invalid month entered");
        return 0;
    }
    if (year2 < 0 || year2 >= 9999)
    {
        printf("Invalid year entered");
        return 0;
    }

    if (year == year2)
    {
        if (month == month2)
        {
            if (day == day2)
            {
                printf("The date is the same day");
            }
            else if (day < day2)
            {
                printf("Date1 is sooner");
            }
            else
            {
                printf("Date2 is sooner");
            }
        }
        else if (month < month2)
        {
            printf("Date1 is sooner");
        }
        else
        {
            printf("Date2 is sooner");
        }
    }
    else if (year < year2)
    {
        printf("Date1 is sooner");
    }
    else
    {
        printf("Date2 is sooner");
    }
    return 0;
}