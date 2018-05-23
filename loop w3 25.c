#include <stdio.h>
void main()
{
    int i,end,square,sum=0;
    scanf ("%d",&end);
    for(i=1;i<=end;i++)
    {
        square = i*i;
        sum = sum+square;
    }
    printf ("%d",sum);
}
