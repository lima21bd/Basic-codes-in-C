#include <stdio.h>
void main()
{
    int i,s,e,temp,sum=0,r;
    scanf ("%d%d",&s,&e);
    for (i=s;i<=e;i++)
        {
            sum = 0;
            for (temp=i;temp!=0;temp/=10)
        {
           r = temp%10;
           sum = sum + (r*r*r);
        }
        if (sum==i)
            printf ("%d\n",i);
    }
}
