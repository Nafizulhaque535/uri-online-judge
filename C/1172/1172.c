#include <stdio.h>
int main()
{
    int a, b, num[10];

    //Condition...
    for(a=0; a<10; a++)
        scanf("%d", &num[a]);
    for(a=0; a<10; a++){
        if(num[a]<= 0)
            num[a] = 1;
    }
    for(a=0; a<10; a++){
        printf("X[%d] = %d\n", a, num[a]);
    }
return 0;
}
