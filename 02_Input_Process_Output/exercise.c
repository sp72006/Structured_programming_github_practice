#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time_seconds,time_minutes,time_hours,total_seconds;

    printf("Enter time elasped in seconds:");
    scanf("%d",&total_seconds);

    time_seconds = total_seconds %60;
    time_minutes = (total_seconds %3600)/60;
    time_hours = total_seconds/3600;

    printf("Your exact time is %d:%d:%d",time_hours,time_minutes,time_seconds);
    return 0;
}
