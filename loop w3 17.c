# include <stdio.h>
void main()
{
    int r,s,end,c;
    scanf ("%d",&end);
    for(r=1;r<=end;r++)
    {
        for (s=end;s>r;s--)
            printf (" ");
        for (c=1;c<=r;c++)
            printf ("%d ",r);
        printf ("\n");
    }
}
