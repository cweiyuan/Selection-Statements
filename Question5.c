#include <stdio.h>

int main()
{
    int q, w, e, r, bigger, smaller, bigger1, smaller1, biggest, smallest;
    
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &q, &w, &e, &r);

    // Sub problem 1
    if (q > w)
    {
        bigger = q;
        smaller = w;
    }
    else 
    {
        bigger = w;
        smaller = q;
    }

    // Sub problem 2
    if (e > r)
    {
        bigger1 = e;
        smaller1 = r;
    }
    else
    {
        bigger1 = r; 
        smaller1 = e;
    }

    //Sub problem 3
    if (bigger > bigger1)
    {
        biggest = bigger;
    }
    else 
    {
        biggest = bigger1;
    }
    
    //Sub problem 4
    if (smaller < smaller1)
    {
        smallest = smaller;
    }
    else
    {
        smallest = smaller1;
    }

    printf("Largest: %d\n", biggest);
    printf("Smallest: %d", smallest);

    return 0;
}