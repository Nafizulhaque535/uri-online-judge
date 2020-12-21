#include<stdio.h>
int main()
{
    int N[20], z;

    //Condition...
    for(z = 19; 0 <= z; z--){
        scanf("%d", &N[z]);
    }
    for(z = 0; z < 20; z++){
        printf("N[%d] = %d\n", z, N[z]);
    }
return 0;
}
