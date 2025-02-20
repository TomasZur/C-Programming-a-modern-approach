#include <stdio.h>

int main()
{

    int year, month, day, year2, month2, day2, year_min, month_min, day_min;
    year2 = 0;
    month2 = 0;
    day2 = 0;

    printf("Enter second date (dd/mm/yyyy):");
    scanf("%d/%d/%d", &day2, &month2, &year2);

    if (day2 < 0 || day2 > 31)
    {
        printf("Invalid day entered");
        return 0;
    }
    if (month2 < 0 || month2 > 12)
    {
        printf("Invalid month entered");
        return 0;
    }
    if (year2 < 0 || year2 >= 9999)
    {
        printf("Invalid year entered");
        return 0;
    }

    for (;;)
    {
        printf("Enter a date (dd/mm/yyyy):");
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

        if (year == 0 && month == 0 && day == 0)
        {
            printf("Earliest date is %d/%d/%d", day2, month2, year2);
            return 0;
        }

        if (year2 > year)
        {
            year2 = year;
            month2 = month;
            day2 = day;
        }
        else if (year2 == year)
        {
            if (month2 > month)
            {
                month2 = month;
                day2 = day;
            }
            else if (month2 == month)
            {
                if (day2 > day)
                {
                    day2 = day;
                }
            }
        }

    }
    return 0;
}