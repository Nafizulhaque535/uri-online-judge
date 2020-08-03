#include <stdio.h>
int main()
{
    int z, n, s;
    int in = 0;
    int out = 0;
    scanf("%d", &z);
    for (s = 0; s < z; ++s)
    {
        scanf("%d", &n);
        if (n >= 10 && n <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
}
