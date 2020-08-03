#include <stdio.h>
int main()
{
    int N, S;
    scanf("%d", &N);
    for (S = 1; S <= N; ++S)
    {
        if (S % 2 ==0)
        {
            printf("%d^2 = %d\n", S, (S * S));
        }
    }
}
