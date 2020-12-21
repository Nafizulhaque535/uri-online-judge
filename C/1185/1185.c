#include <stdio.h>
int main()
{
    double sum = 0.0;
    double N[12][12];
    char O[2];
    scanf("%s", &O);
    int num = 1;
    int a, b;

    //Condition...
    for(a = 0;a < 12;a++){
        for(b = 0; b < 12; b++){
            scanf("%lf", &N[a][b]);
        }
    }
    for(a = 10; a >= 0; a--){
        for(b = 0; b < num; b++){
            sum += N[a][b];
        }
        num++;
    }
    if (O[0] == 'S'){
        printf("%.1lf\n", sum);
    }
    else{
        printf("%.1lf\n", sum/ 66.0);
    }
    return 0;
}
