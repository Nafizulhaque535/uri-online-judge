#include <stdio.h>
int main()
{
    float a, b, c, d, e, x, y, z;
    double avg, average;
    scanf("%f %f %f %f",&a, &b, &c, &d);
    avg = ((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %.1lf\n",avg);
    if ( avg < 5.0 ){
        printf("Aluno reprovado.\n");
    }
    else if( avg >= 7.0 ){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n",e);
        average = (avg+e)/2;
        if ( average >= 5.0 ){
            printf("Aluno aprovado.\n");
        }
        else {printf ("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",average);
    }
}
