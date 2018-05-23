#include <stdio.h>
void main()
{
    int r,c,end,p,q;
    scanf ("%d",&end);
    for (r=1;r<=end;r++)
    {
        if(r%2==0)
        {
            p=0;
            q=1;
        }
        else
        {
            p=1;
            q=0;
        }
        for (c=1;c<r+1;c++)
        {
            if (c%2==0)
                printf ("%d",q);
            else
                printf ("%d",p);
        }
            printf ("\n");


    }
}
