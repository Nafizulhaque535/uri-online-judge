#include<stdio.h>
int main()
 {
    int year, month, day, s;

    scanf("%d", &s);
    year = s / 365;
    month = s % 365 / 30;
    day = s % 365 % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);
 }
