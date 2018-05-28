#include<stdio.h>

void sort(int a[], int n);

void main()
{
    int n,i,j;

    printf ("How many elements do you want?\n");
    scanf ("%d",&n);

    int a[n];

    printf ("Enter elements of the array : \n\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,n);

    for(j=0;j<n;j++)
        printf("%d  ",a[j]);
}
void sort(int a[],int n)
{
    int y,x,key;
    for(x=1;x<n;x++)
    {
        key=a[x];
        y=x-1;

        while(y>=0 && a[y]<key)
        {
            a[y+1] = a[y];
            y=y-1;
        }

        a[y+1]=key;
    }
}

