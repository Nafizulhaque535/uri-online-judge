#include <stdio.h>
#include <math.h>
int main()
{
    float z;
    scanf("%f", &z);

    if (z >= 0 && z <= 25)
        printf("Intervalo [0,25]\n");
    else if (z > 25 && z <= 50)
        printf("Intervalo (25,50]\n");
    else if (z > 50 && z <= 75)
        printf("Intervalo (50,75]\n");
    else if (z > 75 && z <= 100)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");
return 0;
}
