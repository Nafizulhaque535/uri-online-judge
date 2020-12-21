#include <stdio.h>
int main(){
    int a = 0, b = 0, c, x, y, z;

    //Loop starting...
    for(c=1; c<=100; c++){
        scanf("%d", &x);
        a++;
        if(x > b){
            z = a;
            b = x;
        }
    }
    printf("%d\n", b);
    printf("%d\n", z);
return 0;
}
