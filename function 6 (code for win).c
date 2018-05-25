#include <stdio.h>
int prime (int start,int end);
void main ()
{
    int start,end;
    scanf ("%d %d",&start,&end);
    prime (start,end);
}
int prime (int start,int end)
{
    int i,j,flag=0;
    for (i=start;i<=end;i++)
    {
        for (j=2;j<=i/2;j++)
        {
            if (i%j == 0)
            {
                flag = 1;
                break;
            }
            else
                flag = 0;
        }
        if (flag==0)
            printf ("%d\n",i);
    }
}

