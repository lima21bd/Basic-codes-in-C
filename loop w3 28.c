#include <stdio.h>
void main()
{
    int i,j,start,end,sum=0;
    scanf ("%d",&start);
    scanf ("%d",&end);
    for (i=start;i<=end;i++)
    {
       for (j=1;j<i;j++)
       {
           if (i%j==0)
           {
               sum = sum+j;
           }
       }
       if (sum==i)
        printf ("%d ",i);
        sum =0;
    }

}
