#include <stdio.h>
int main()
{
    int z,n;
    scanf("%d",&z);
    if (z%2==0)
        z++;
    for(n = 0;n < 6;n++)
    {
        printf("%d\n",z);
        z = z + 2;
    }
}
