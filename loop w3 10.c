#include <stdio.h>
void main()
{
    int r,end,c;
    scanf ("%d",&end);
    for (r=1;r<=end;r++)
    {
        for (c=1;c<r+1;c++)
            printf ("%d",c);
        printf ("\n");
    }
}
