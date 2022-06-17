#include <stdio.h>

int main ()
{
    int num, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (0 <= num && num <= 9)
    {
        digit = 1;
 
    }
    else if (10 <= num && num <= 99)
    {
        digit = 2;
    }
    else if (100 <= num && num <= 999)
    {
        digit = 3;

    }

     printf("The number %d has %d digit", num, digit); 
    
     return 0;
}