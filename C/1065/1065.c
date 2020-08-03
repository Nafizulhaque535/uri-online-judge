#include <stdio.h>
int main()
{
    int a, b, c = 0;
    for (a = 0; a < 5; a++){
        scanf("%d", &b);
    if (b % 2 == 0) c++;
    }
    printf("%d valores pares\n", c);
}
