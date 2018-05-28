#include <stdio.h>
int natural (int a, int b);
void main()
{
    int a,b;
    scanf ("%d %d",&a,&b);
    natural(a,b);
}
int natural (int a, int b)
{
    if(a<=b)
    {
        printf ("%d\n",a);
        natural(a+1,b);
    }
}
