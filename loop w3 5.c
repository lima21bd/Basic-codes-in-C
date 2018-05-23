#include <stdio.h>
void main()
{
    int i,end,n,cube;
    scanf ("%d",&end);
    for (i=0;i<end;i++)
    {
        scanf ("%d",&n);
        cube = n*n*n;
        printf ("cube of the number is: %d\n",cube);
    }
}
