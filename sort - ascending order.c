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
    int i,j,x;
    for(i=1;i<n;i++)
    {
        x = a[i];
        j = i-1;

        while(j>=0 && a[j]>x)
        {
            a[j+1] = a[j];
            j=j-1;
        }

        a[j+1] = x;
    }
}
