#include <stdio.h>
int main()
{
    double S[12][12];
    double a = 0.0;
    char T[2];
    int C, b, d, e, f = 0;
    scanf("%s", &T);

    //Condition...
    for(b=0; b<=11; b++){
        for(d=0; d<=11; d++)
            scanf("%lf", &S[b][d]);
    }
    for(e=1; e<=11;e++){
        for(C=0; C<=f; C++)
            a+=S[e][C];
        f++;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M'){
        a =a/66.0;
        printf("%.1lf\n",a);
    }
return 0;
}
