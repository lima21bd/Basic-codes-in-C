#include <stdio.h>
#define SIZE 100
int Array (int ar[],int start,int n);
void main()
{
    int ar[SIZE];
    int i,n,s;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&ar[i]);
    s = Array (ar,0,n);
    printf ("Sum: %d\n",s);
}
int Array (int ar[],int start,int n)
{
    if(start>=n)
        return 0;
    else
        return ar[start]+Array (ar,start+1,n);
}
