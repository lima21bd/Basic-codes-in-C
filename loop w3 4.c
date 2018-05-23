#include <stdio.h>
int main()
{
    int sum=0;
    int i,n,end;
    float avg;
    scanf ("%d",&end);
    for (i=0;i<end;i++)
    {
        scanf ("%d",&n);
        sum += n;
    }
    avg = sum/end;
    printf ("%d\n",sum);
    printf ("%f\n",avg);
    return 0;
}
