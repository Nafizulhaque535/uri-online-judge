#include <stdio.h>
#include <string.h>
int main()
{
   int S;
   scanf("%d", &S);
   while(S--){
      char str[15];
      char str1[3], str2[4], str3[3];
      int x = 0, y = 0, z = 0, a, l;
      int sum = 0, num1 = 0, num2 = 0, num3 = 0;

      scanf("%s", str);
      l = strlen(str);

//Condition...
    for (a = 0; a < l; a++)
    {
        if(a>= 2 && a<= 3)
        {
            str1[x] = str[a];
            x++;
            continue;
        }
        else if(a>= 5 && a<= 7)
        {
            str2[y] = str[a];
            y++;
            continue;
        }
        else if(a>= 11 && a<= 12)
        {
            str3[z] = str[a];
            z++;
            continue;
        }
    }
    str1[x] = '\0';
    str2[y] = '\0';
    str3[z] = '\0';

    num1 = 0;
    num2 = 0;
    num3 = 0;
    sum = 0;

    num1 = atoi(str1);
    num2 = atoi(str2);
    num3 = atoi(str3);
    sum = num1 + num2 + num3;
    printf("%d\n", sum);
}
return 0;
}
