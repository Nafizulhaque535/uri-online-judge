#include <stdio.h>
int main()
{
    int x, y, z, num, i;
    scanf("%d", &num);
    x = 0;
    y = 1;
    //condition...
    for(i = 1; i <= num - 1; i++){
        printf("%d ", x);
        z = x + y;
        x = y;
        y = z;
    }
    printf("%d\n", x);
return 0;
}
