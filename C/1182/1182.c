#include <stdio.h>
int main()
{
    double M[12][12];
    double z = 0.0;
    char T[2];
    int C, a, b;
    scanf("%d", &C);
    scanf("%s", &T);

    //Condition...
    for(a=0; a<=11; a++){
        for(b=0; b<=11; b++){
        scanf("%lf", &M[a][b]);
        if(b == C)
            z+=M[a][b];
        }
    }
    if(T[0]=='S')
        printf("\n%.1lf\n", z);
    else if(T[0]=='M'){
            z = z/12.0;
        printf("%.1lf\n", z);
    }
return 0;
}
