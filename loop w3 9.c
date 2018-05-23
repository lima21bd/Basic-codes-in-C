#include <stdio.h>
void main()
{
    int r,c,end;
    scanf ("%d",&end);
    for (r=0;r<end;r++)
    {
        for (c=0;c<r+1;c++)
            printf ("*");
        printf ("\n");
    }
}
