#include <stdio.h>

int main()
{

    int hour, minute, time_midnight, temp_time1, temp_time2;

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

    time_midnight = hour * 60 + minute;

    printf("time from midnight in minutes: %d\n", time_midnight);

    // 480 583 679 767 840 945 1140 1305
    if (time_midnight < 480)
    {
        printf("Closest departure time is 8:00AM, arriving at 10:16AM");
        return 0;
    }
    if (480 < time_midnight && time_midnight < 583)
    {
        temp_time1 = time_midnight - 480;
        temp_time2 = 588 - time_midnight;
        if (temp_time1 < temp_time2)
        {
            printf("1Closest departure time is 8:00AM, arriving at 10:16AM");
            return 0;
        }
        else
        {
            printf("Closest departure time is 9:43AM, arriving at 11:52AM");
            return 0;
        }
    }
    if (538 < time_midnight && time_midnight < 679)
    {
        temp_time1 = time_midnight - 538;
        temp_time2 = 679 - time_midnight;
        if (temp_time1 < temp_time2)
        {
            printf("Closest departure time is 9:43AM, arriving at 11:52AM");
            return 0;
        }
        else
        {
            printf("Closest departure time is 11:19AM, arriving at 1:31PM");
            return 0;
        }
    }
    if (679 < time_midnight && time_midnight < 767)
    {
        temp_time1 = time_midnight - 679;
        temp_time2 = 767 - time_midnight;
        if (temp_time1 < temp_time2)
        {
            printf("Closest departure time is 11:19AM, arriving at 1:31PM");
            return 0;
        }
        else
        {
            printf("Closest departure time is 12:47AM, arriving at 3:00PM");
            return 0;
        }
    }
    if (767 < time_midnight && time_midnight < 840)
    {
        temp_time1 = time_midnight - 767;
        temp_time2 = 840 - time_midnight;
        if (temp_time1 < temp_time2)
        {
            printf("Closest departure time is 12:47AM, arriving at 3:00PM");
            return 0;
        }
        else
        {
            printf("Closest departure time is 2:00PM, arriving at 4:08PM");
            return 0;
        }
    }
    if (840 < time_midnight && time_midnight < 945)
    {
        temp_time1 = time_midnight - 840;
        temp_time2 = 945 - time_midnight;
        if (temp_time1 < temp_time2)
        {
            printf("Closest departure time is 2:00PM, arriving at 4:08PM");
            return 0;
        }
        else
        {
            printf("Closest departure time is 3:00PM, arriving at 5:08PM");
            return 0;
        }
    }
    if (945 < time_midnight && time_midnight < 1140)
    {
        temp_time1 = time_midnight - 945;
        temp_time2 = 1140 - time_midnight;
        if (temp_time1 < temp_time2)
        {
            printf("Closest departure time is 3:00PM, arriving at 5:08PM");
            return 0;
        }
        else
        {
            printf("Closest departure time is 7:00PM, arriving at 8:08PM");
            return 0;
        }
    }
    if (1140 < time_midnight && time_midnight < 1305)
    {
        temp_time1 = time_midnight - 1140;
        temp_time2 = 1305 - time_midnight;
        if (temp_time1 < temp_time2)
        {
            printf("Closest departure time is 7:00PM, arriving at 8:08PM");
            return 0;
        }
        else
        {
            printf("Closest departure time is 9:00PM, arriving at 10:08PM");
            return 0;
        }
    }

    return 0;
}