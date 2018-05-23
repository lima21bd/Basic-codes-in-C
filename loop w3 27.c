#include <stdio.h>
void main()
{
    int i,end,sum=0;
    scanf ("%d",&end);
    for(i=1;i<end;i++)
    {
        if (end%i==0)
        {
            printf ("%d  \n",i);
            sum += i;
        }

    }
    printf ("Sum: %d\n",sum);
    if (sum==end)
        printf ("The number is perfect\n");
    else
        printf ("The number is not perfect\n");
}
