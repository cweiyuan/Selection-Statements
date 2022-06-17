#include <stdio.h>
#include <string.h>

int main ()
{
    int time, minutes, hour, time1, time2, time3, time4, time5, time6, time7, time8;
    
    printf("Depature time\tArrival time\n");
    printf("8:00 a.m.\t 10:16 a.m.\n");
    printf("9:43 a.m.\t 11:52 a.m.\n");
    printf("11:19 a.m.\t 1:31 p.m.\n");
    printf("12:47 p.m.\t 3:00 p.m.\n");
    printf("2:00 p.m.\t 4:08 p.m.\n");
    printf("3:45 p.m.\t 5:55 p.m.\n");
    printf("7:00 p.m.\t 9:20 p.m.\n");
    printf("9:45 p.m.\t 11:58 p.m.\n\n");

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);

    time = (60 * hour) + minutes;
    
    time1 = (8 * 60);
    time2 = (9 * 60) + 43;
    time3 = (11 * 60) + 19;
    time4 = (12 * 60) + 47;
    time5 = (14 * 60);
    time6 = (15 * 60) + 45;
    time7 = (19 * 60);
    time8 = (21 * 60) + 45;

    if (time > time1 && time <= time2)
    {
        if (time - time1 > time2 - time)
        {
            printf("Closest depature time is 9:43 a.m., arriving at 10:16 a.m.");
        }
        else
        {
            printf("Closest depature time is 8:00 a.m., arriving at 11:52 a.m.");
        }
    }
 
    if (time > time2 && time < time3)
    {
        if (time - time2 > time3 - time)
        {
            printf("Closest depature timing is 11:19 a.m., arriving at 1:31 p.m.");
        }
        else
        {
            printf("Closest depature timing is 9:43 a.m., arriving at 10:16 a.m.");
        }
    }
    
    if (time > time3 && time < time4)
    {
        if (time - time3 > time4 - time)
        {
            printf("Closest depature timing is 12:47 p.m., arriving at 3:00 p.m.");
        }
        else  
        {
            printf("Closest depature timing is 11:19p.m., arriving at 1:31 p.m.");
        }
    }

    if (time >= time4 && time < time5)
    {
        if (time - time4 > time5 - time)
        {
            printf("Closest depature timing is 2:00 p.m., arriving at 4:08 p.m.");
        }
        else  
        {
            printf("Closest depature timing is 12:47 p.m., arriving at 3:00 p.m.");
        }
    }
    
    if (time >= time5 && time < time6)
    {
        if (time - time5 > time6 - time)
        {
            printf("Closest depature timing is 3:45 p.m., arriving at 5:55 p.m.");
        }
        else
        {
            printf("Closest depature timing is 2:00 p.m., arriving at 4:08 p.m.");
        }
    }
    
    if (time > time6 && time < time7)
    {
        if (time - time6 > time7 - time)
        {
            printf("Closest depature timing is 7:00 p.m., arriving at 9:20 p.m.");
        }
        else
        {
            printf("Closest depature timing is 3:45 p.m., arriving at 5:55 p.m.");
        }
    }
  
    if (time > time7 && time < time8)
    {
        if (time - time7 > time - time8)
        {
             printf("Closest depature timing is 9:45 p.m., arriving at 11:58 p.m.");
        }
        else
        {
             printf("Closest depature timing is 7:00 p.m., arriving at 9:20 p.m.");
        }         
    }
  
    return 0;
}