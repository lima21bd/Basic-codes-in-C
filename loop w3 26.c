#include <stdio.h>
void main()
{
    int i,end,sum=0,k=1;
    scanf ("%d",&end);
    for (i=1;i<=end;i++)
    {
        sum =sum+k;
        k = (k*10)+1;

    }
    printf ("%d",sum);

}
