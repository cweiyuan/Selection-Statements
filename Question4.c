#include <stdio.h>

int main()
{
    float income, taxDue;

    printf("Income\t\t\tAmount of tax\n\n");
    printf("Not over $750\t\t1%% of income\n");
    printf("$  750 -   $  2,250\t$7.50\t\tplus 2%% of amount over $  750\n");
    printf("$  2,250 - $  3,750\t$37.50\t\tplus 3%% of amount over $  2,250\n");
    printf("$  3,750 - $  5,250\t$82.50\t\tplus 4%% of amount over $  3,750\n");
    printf("$  5,250 - $  7,000\t$142.50\t\tplus 5%% of amount over $  5,250\n");
    printf("Over $7,000\t\t$230.00\t\tplus 6%% of amount over $  7,000\n");

    printf("Enter your income\n: ");
    scanf("%f", &income);

    if (income < 750)
    {
        taxDue = 750.00f + (.02f / income);
    }
    else if (income >= 750.00f && income <= 2250)
    {
        taxDue = 37.50f + (.03f / income);
    }
    else if (income >= 2250.00f && income <= 3750.00f)
    {
        taxDue = 82.50f + (.04f / income);
    }
    else if (income >= 5250.00f && income <= 7000.00f)
    {
        taxDue = 142.50f + (.05f / income);
    }
    else if ( income > 7000.00f)
    {
        taxDue = 230.00f + (.06f / income);
    }
        printf("Your tax due is %.2f", taxDue);

    return 0;
}

