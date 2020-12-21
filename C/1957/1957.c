#include<stdio.h>
int main()
{
    long int z;

    //Loop starting...
    while(scanf("%ld", &z)!= EOF){      //EOF = "predefined MACRO"
        printf("%X\n",z);
    }
return 0;
}
