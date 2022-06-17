#include <stdio.h>

int main()
{
    int number, first, second;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    first = number / 10;
    second = number % 10;
        
    if( number >= 11 && number <= 19)
    {
        
        switch (second)
        {
            case 1:
                printf("eleven");
                break;

            case 2:
                printf("tweleve");
                break;

            case 3:
                printf("thirteen");
                break;

            case 4:
                printf("fourteen");
                break;

            case 5:
                printf("fifteen");
                break;

            case 6:
                printf("sixteen");
                break;
                
            case 7:
                printf("seventeen");
                break;

            case 8:
                printf("eighteen");
                break;

            case 9:
                printf("nineteen");
                break;
            
            

        }
    }

    else 
    {
        switch(first)
        {
            case 2:
                printf("Twenty");
                break;

            case 3:
                printf("Thirty");
                break;

            case 4:
                printf("Forty");
                break;

            case 5:    
                printf("Fifty");
                break;

            case 6:
                printf("Sixty");
                break;

            case 7:
                printf("Seventy");
                break;

            case 8:
                printf("Eighty");
                break;

           case 9:
                printf("Ninety");
                break;
            
        } 

        switch (second)
        {
            case 1:
                printf("-one");
                break;

            case 2:
                printf("-two");
                break;

            case 3:
                printf("-three");
                break;

            case 4:
                printf("-four");
                break;

            case 5:
                printf("-five");
                break;

            case 6:
                printf("-six");
                break;

            case 7:
                printf("-seven");
                break;

            case 8:
                printf("-eight");
                break;

            case 9:
                printf("-nine");
                break;
        }       
    }
}