#include <stdio.h>
void main()
{
    int i,end,sum=0;
    scanf ("%d",&end);
    for (i=1;i<=end;i++)
    {
        if (i%2 != 0)
        {
            sum = sum+i;
        }
    }
    printf ("%d",sum);
}
