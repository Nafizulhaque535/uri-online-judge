#include <stdio.h>
int main()
{

    double x, y, z, temp;
    scanf("%lf %lf %lf", &x, &y, &z);

    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if (y < z)
    {
        temp = y;
        y = z;
        z = temp;
    }
    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if (x >= y + z)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (x * x == y * y + z * z)
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (x * x > y * y + z * z)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (x * x < y * y + z * z)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (x == y && y == z)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if (x == y || y == z)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
}
