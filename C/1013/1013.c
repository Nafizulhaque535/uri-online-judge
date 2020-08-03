#include<stdio.h>
int main()
{
    int a,b,c,s;
    scanf("%d %d %d",&a,&b,&c);

    s = (a+b+abs(a-b))/2;
    s = (s+c+abs(s-c))/2;
    printf("%d eh o maior\n",s);

return 0;

}
