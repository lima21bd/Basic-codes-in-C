#include <stdio.h>

int lsearch (int a[], int n, int key);

void main()
{
    int n,key,x,i;

    printf ("Enter no of elements of an array : \n");
    scanf ("%d",&n);

    int a[n];

    printf ("Enter elements of array : \n\n");

    for (i=0;i<n;i++)
        scanf ("%d",&a[i]);

    printf ("Which element do you want?\n");
    scanf ("%d",&key);

    x = lsearch (a,n,key);
    printf ("Position of the element is %d\n",x);
}

int lsearch (int a[], int n, int key)
{
    int i;
    for (i =0;i<n;i++)
    {
        if (a[i]==key)
            return i;
    }
    return -1;
}


