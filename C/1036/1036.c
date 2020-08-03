#include <stdio.h>
#include <math.h>
int main()
{
    float A, B, C, x, y, z;
    scanf("%f %f %f", &A, &B, &C);
    x = (B * B) - (4 * A * C);
    if (x < 0)
        printf("Impossivel calcular\n");

    else if (A == 0)
        printf("Impossivel calcular\n");

    else
    {
        y = (-B + sqrt(x)) / (A + A);
        z = (-B - sqrt(x)) / (A + A);

        printf("R1 = %.5f\n", y);
        printf("R2 = %.5f\n", z);
    }
return 0;
}
