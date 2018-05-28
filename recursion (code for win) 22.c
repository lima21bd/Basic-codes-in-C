#include <stdio.h>
#define SIZE 100
int Array(int ar[],int start,int n);
void main()
{
    int ar[SIZE],i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf ("%d",&ar[i]);
    Array(ar,0,n);
}
int Array(int ar[],int start,int n)
{
    if(start >= n)
        return 0;
    else
    {
        printf("%d ",ar[start]);
        return Array(ar,start+1,n);
    }
}
