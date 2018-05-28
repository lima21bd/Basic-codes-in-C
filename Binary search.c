#include <stdio.h>

int bsearch (int a[],int n,int key,int start,int mid,int end);

void main ()
{
    int n,key,x,i;

    printf ("Enter no of elements of an array : \n");
    scanf ("%d",&n);

    int start = 0;
    int end = n-1;
    int mid = (start+end)/2;

    int a[n];

    printf ("Enter elements of the array : \n\n");

    for (i=start;i<=end;i++)
        scanf ("%d",&a[i]);

    printf ("Which element do you want?\n");
    scanf ("%d",&key);

    x = bsearch (a,n,key,mid,start,end);
    printf ("Position of the element is  %d\n",x);

}

int bsearch (int a[],int n,int key,int start,int mid,int end)
{
    while(start<=end && a[mid]!=key)
    {
        if (key<a[mid])
            end = mid - 1;
        else
            start = mid+1;
        mid = (start+end)/2;
        if (start>end)
            return -1;
    }
    return mid;
}

