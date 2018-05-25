		Static

#include <stdio.h>
int main()
{
    int arr[5];
    int i,max;
    for (i=0;i<5;i++)
        scanf ("%d",&arr[i]);
    max = arr[0];
    for (i=0;i<5;i++)
    {
        if (arr[i]>max)
            max = arr[i];
    }
    printf ("Max = %d",max);
    return 0;
}

		Dynamic

#include <stdio.h>
# define MAX_SIZE 100000
int main()
{
    int arr[MAX_SIZE];
    int i,N,max;

    printf ("Enter the size of array:");
    scanf ("%d",&N);
    printf ("Enter the elements of array:");

    for (i=0;i<N;i++)
        scanf ("%d",&arr[i]);
    max = arr[0];
    for (i=0;i<N;i++)
    {
        if (arr[i]>max)
            max = arr[i];
    }
    printf ("Max = %d",max);
    return 0;
}
