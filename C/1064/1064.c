#include <stdio.h>
int main()
{
    int a, b = 0;
    float avg, x, y = 0;
    for (a = 0; a < 6; a++)
    {
        scanf("%f", &x);
        if (x > 0)
        {
            y += x;
            b++;
        }
    }

    avg = y / b;
    printf("%d valores positivos\n", b);
    printf("%0.1f\n", avg);
}
