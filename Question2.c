#include <stdio.h>

int main ()
{
    int hour, minute;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 12)
    {
        hour -= 12;
        
    }
    
    printf("Equivalent 12-hour minute: %d:%02d", hour, minute);

    return 0; 
}