#include <stdio.h>
int strong(int a,int b);
void main()
{
    int a,b;
    scanf ("%d%d",&a,&b);
    strong(a,b);
}
int strong(int a,int b)
{
    int j,temp,i,rem,f,lim,sum=0;
    for (j=a;j<=b;j++)
    {
        for (temp=j;j!=0;j/=10)
    {
        rem = j%10;
        f=1;
        for (i=1;i<=rem;i++)
        {
            f = f*i;
        }
        sum = sum+f;
    }
    if (sum == j)
            printf ("%d\n",j);
    }

}

