#include <stdio.h>
int main()
{
    int r,end,c,k=1;
    scanf ("%d",&end);
    for (r=1;r<=end;r++)
    {
        for (c=1;c<r+1;c++)

            printf ("%d ",k++);
        printf ("\n");
    }
    return 0;
}
