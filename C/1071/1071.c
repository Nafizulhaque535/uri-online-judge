#include <stdio.h>
int main()
{
    int p,q,r=0;
    scanf("%d %d", &p, &q);
    if(p==q)
        printf("%d\n",r);
    else if(p<q)
    {
        for(p=p+1;p<q;p++)
        {
            if(p%2==1||p%2==-1)
                r+=p;
        }
        printf("%d\n",r);
    }
    else if(p>q)
    {
        for(q=q+1;q<p;q++)
        {
            if(q%2==1||q%2==-1)
                r+=q;
        }
        printf("%d\n",r);
    }
}
