#include <stdio.h>
int natural(int a, int b);
void main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum = natural(a,b);
    printf ("%d",sum);
}
int natural(int a, int b)
{
   if (a==b)
        return a;
   else
    return a+natural(a+1,b);
}
