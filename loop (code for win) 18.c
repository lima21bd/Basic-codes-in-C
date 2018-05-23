#include <stdio.h>
void main()
{
    int num,temp,i,f[10],r;
    scanf ("%d",&num);
    for (i=0;i<10;i++)
        f[i]=0;
    for (temp=num;num!=0;num/=10)
    {
        r = num%10;
        for (i=0;i<10;i++)
        {
            if (r == i)
                f[i]++;
        }
    }
    for (i=0;i<10;i++)
        printf("frequency of %d is %d\n",i,f[i]);
}
