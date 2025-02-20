#include <stdio.h>

int main()
{

    int hour, minute, time_midnight, temp_time1, temp_time2;

    int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arrival[8] = {616, 712, 811, 900, 968, 1028, 1208, 1328};

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

    for (int i = 0; i < 9; i++)
    {
        if (time_midnight < departure[i])
        {

            temp_time1 = time_midnight - departure[i];
            temp_time2 = departure[i + 1] - time_midnight;

            if (time_midnight < 720)
            {
                if (temp_time1 < temp_time2)
                {
                    printf("Closest departure time is %d:%dAM, arriving at %d:%dAM",departure[i]/60,departure[i]%60,arrival[i]/60,arrival[i]%60);
                    return 0;
                }
                else
                {
                    printf("Closest departure time is %d:%dAM, arriving at %d:%dAM",departure[i+1]/60,departure[i+1]%60,arrival[i+1]/60,arrival[i+1]%60);
                    return 0;
                }
            }else{
                if (temp_time1 < temp_time2)
                {
                    printf("Closest departure time is %d:%dPM, arriving at %d:%dPM",departure[i]/60,departure[i]%60,arrival[i]/60,arrival[i]%60);
                    return 0;
                }
                else
                {
                    printf("Closest departure time is %d:%dPM, arriving at %d:%dPM",departure[i+1]/60,departure[i+1]%60,arrival[i+1]/60,arrival[i+1]%60);
                    return 0;
                }
            }
        }
    }

    return 0;
}