#include <stdio.h>
void main()
{
    int i,j,end,x=0;
    scanf ("%d",&end);
    for (i=2;i<=end;i++)
    {
        for (j=2;j<=i/2;j++)
	{
            if (i%j==0)
            {
                x=1;
                break;
            }
            else
                x=0;
        }
        if(x==0)
            printf ("%d\n",i);
    }
}
