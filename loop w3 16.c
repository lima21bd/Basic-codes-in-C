#include <stdio.h>
void main()
{
    int i,end,sum=0;
    scanf ("%d",&end);
    for(i=2;i<=end;i++)
    {
        if (i%2==0)
        {
            sum+=i;
        }
    }
    printf ("%d\n",sum);
}
