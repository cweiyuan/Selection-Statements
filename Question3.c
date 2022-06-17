#include <stdio.h>

int main()
{
    int wind;

    printf("Speed (knots)\tDescription\n");
    printf("Less than 1\tCalm\n");
    printf("1-3\t\tLight air\n");
    printf("4-27\t\tBreeze\n");
    printf("28-47\t\tGale\n");
    printf("48-63\t\tStorm\n");
    printf("Above 63\tHurricane\n");

    printf("Enter the wind speed: ");
    scanf("%d", &wind);

    if (wind < 1)
    {
        printf("The weather discription is: Calm");
    }
    else if (wind >= 1 && wind <= 3)
    {
        printf("The weather discription is: Light air");
    }
    else if (wind >= 4 && wind <= 27 )
    {
        printf("The weather discription is: Breeze");
    }
    else if (wind >= 28 && wind <= 47)
    {
        printf("The weather discription is: Gale");
    }
    else if (wind >= 48 && wind <= 63)
    {
        printf("The weather discription is: Storm");
    }
    else if (wind > 63)
    {
        printf("The weather discription is: Hurricane");
    }
    
    return 0;
}