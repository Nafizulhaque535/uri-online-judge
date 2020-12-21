#include<stdio.h>
int main()
{
    int a, b, c;
    int d = 0, e = 0, f = 0, g = 0;
    scanf("%d", &a);

    //Condition...
    for(b = 0; b < a; b++){
        scanf("%d", &c);
        if(c % 2 == 0)d++;
        if(c % 3 == 0)e++;
        if(c % 4 == 0)f++;
        if(c % 5 == 0)g++;
    }
    printf("%d Multiplo(s) de 2\n", d);
    printf("%d Multiplo(s) de 3\n", e);
    printf("%d Multiplo(s) de 4\n", f);
    printf("%d Multiplo(s) de 5\n", g);
return 0;
}
