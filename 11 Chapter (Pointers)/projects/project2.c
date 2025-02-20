#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main()
{

    int hour, minute, time_midnight,departure_time,arrival_time;
    int departure_time_hour,departure_time_minute;
    int arrival_time_hour,arrival_time_minute;


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

    find_closest_flight(time_midnight,&departure_time,&arrival_time);

    departure_time_hour=departure_time/60;
    departure_time_minute=departure_time%60;
    arrival_time_hour=arrival_time/60;
    arrival_time_minute=arrival_time%60;

    if(departure_time>720){
        printf("Closest departure time is %02d:%02dPM, arriving at %02d:%02dPM",departure_time_hour,departure_time_minute,arrival_time_hour,arrival_time_minute);
    }else if(arrival_time>720){
        printf("Closest departure time is %02d:%02dAM, arriving at %02d:%02dPM",departure_time_hour,departure_time_minute,arrival_time_hour,arrival_time_minute);
    }else{
        printf("Closest departure time is %02d:%02dAM, arriving at %02d:%02dAM",departure_time_hour,departure_time_minute,arrival_time_hour,arrival_time_minute);
    }


    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
    int temp_time1,temp_time2;

if (desired_time < 480)
    {
        *departure_time=480;
        *arrival_time=616;
        return;
    }
    if (480 < desired_time && desired_time < 583)
    {
        temp_time1 = desired_time - 480;
        temp_time2 = 583 - desired_time;
        if (temp_time1 < temp_time2)
        {
            *departure_time=480;
            *arrival_time=616;
            return;
        }
        else
        {
            *departure_time=583;
            *arrival_time=712;
            return;
        }
    }
    if (538 < desired_time && desired_time < 679)
    {
        temp_time1 = desired_time - 538;
        temp_time2 = 679 - desired_time;
        if (temp_time1 < temp_time2)
        {
            *departure_time=583;
            *arrival_time=712;
            return;
        }
        else
        {
            *departure_time=679;
            *arrival_time=811;
            return;
        }
    }
    if (679 < desired_time && desired_time < 767)
    {
        temp_time1 = desired_time - 679;
        temp_time2 = 767 - desired_time;
        if (temp_time1 < temp_time2)
        {
            *departure_time=679;
            *arrival_time=811;
            return;
        }
        else
        {
            *departure_time=767;
            *arrival_time=900;
            return;
        }
    }
    if (767 < desired_time && desired_time < 840)
    {
        temp_time1 = desired_time - 767;
        temp_time2 = 840 - desired_time;
        if (temp_time1 < temp_time2)
        {
            *departure_time=767;
            *arrival_time=900;
            return;
        }
        else
        {
            *departure_time=840;
            *arrival_time=968;
            return;
        }
    }
    if (840 < desired_time && desired_time < 945)
    {
        temp_time1 = desired_time - 840;
        temp_time2 = 945 - desired_time;
        if (temp_time1 < temp_time2)
        {
            *departure_time=840;
            *arrival_time=968;
            return;
        }
        else
        {
            *departure_time=945;
            *arrival_time=1028;
            return;
        }
    }
    if (945 < desired_time && desired_time < 1140)
    {
        temp_time1 = desired_time - 945;
        temp_time2 = 1140 - desired_time;
        if (temp_time1 < temp_time2)
        {
            *departure_time=945;
            *arrival_time=1028;
            return;
        }
        else
        {
            *departure_time=1140;
            *arrival_time=1208;
            return;
        }
    }
    if (1140 < desired_time && desired_time < 1305)
    {
        temp_time1 = desired_time - 1140;
        temp_time2 = 1305 - desired_time;
        if (temp_time1 < temp_time2)
        {
            *departure_time=1140;
            *arrival_time=1208;
            return;
        }
        else
        {
            *departure_time=1305;
            *arrival_time=1328;
            return;
        }
    }


}