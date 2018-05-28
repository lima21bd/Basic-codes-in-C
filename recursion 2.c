#include <stdio.h>
int fibo(int i);
void main()
{
    int i,n,fibonacci=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fibonacci = fibo(i);
        printf ("%d\t",fibonacci);
    }
}
int fibo(int i)
{
    if (i<2)
        return i;
    else
        return fibo(i-1)+fibo(i-2);
}
