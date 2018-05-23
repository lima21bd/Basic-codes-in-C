#include <stdio.h>
void main()
{
    int r,s,c,end,k=1;
    scanf ("%d",&end);
    for (r=1;r<=end;r++)
    {
        for (s=end-1;s>=r;s--)
            printf (" ");
        for (c=1;c<=r;c++)
            printf ("%d ",k++);
        printf ("\n");
    }
}
