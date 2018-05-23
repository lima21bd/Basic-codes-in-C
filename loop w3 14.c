#include <stdio.h>
void main()
{
    int i,end,f=1;
    scanf ("%d",&end);
    for (i=1;i<=end;i++)
    {
        f=f*i;
    }
    printf ("%d",f);
}
