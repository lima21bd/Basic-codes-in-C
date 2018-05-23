#include <stdio.h>
void main()
{
    int a,b,c;
    scanf ("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
        printf ("%d is Max\n",a);
    else if (b>a && b>c)
        printf ("%d is Max\n",b);
    else
       printf ("%d is Max\n",c);
}
