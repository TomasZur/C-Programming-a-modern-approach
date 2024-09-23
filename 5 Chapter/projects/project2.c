#include <stdio.h>

int main()
{
    int hour, minute;

    printf("Enter a 24h time: ");

    scanf("%d:%d", &hour, &minute);

    if (hour < 0 || hour >= 24)
    {
        printf("Invalid hour entered");
        return 0;
    }
    if (minute < 0 || minute >= 60)
    {
        printf("Invalid minute entered");
        return 0;
    }

    printf("Equivalent 12 hour time: ");

    if (hour < 12)
    {
        printf("%d:%d AM", hour, minute);
    }

    switch (hour)
    {
    case 13:
        printf("1:%d PM", minute);
        break;
    case 14:
        printf("2:%d PM", minute);
        break;
    case 15:
        printf("3:%d PM", minute);
        break;
    case 16:
        printf("4:%d PM", minute);
        break;
    case 17:
        printf("5:%d PM", minute);
        break;
    case 18:
        printf("6:%d PM", minute);
        break;
    case 19:
        printf("7:%d PM", minute);
        break;
    case 20:
        printf("8:%d PM", minute);
        break;
    case 21:
        printf("9:%d PM", minute);
        break;
    case 22:
        printf("10:%d PM", minute);
        break;
    case 23:
        printf("11:%d PM", minute);
        break;
    }
    return 0;
}