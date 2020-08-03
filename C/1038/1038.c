#include <stdio.h>
int main()
{
    int A,B;
    float cost;
    scanf("%d %d", &A, &B);

    if (A == 1)
    {
        cost = (4.00 * B);
    }
    else if (A == 2)
    {
        cost = (4.50 * B);
    }
    else if (A == 3)
    {
        cost = (5.00 * B);
    }
    else if (A == 4)
    {
        cost = (2.00 * B);
    }
    else if (A == 5)
    {
        cost = (1.50 * B);
    }
    printf("Total: R$ %0.2f\n", cost);
return 0;
}
