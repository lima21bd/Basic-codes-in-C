		Static

#include <stdio.h>
int main()
{
    int arr[5];
    int i,min;
    for (i=0;i<5;i++)
        scanf ("%d",&arr[i]);
    min = arr[0];
    for (i=0;i<5;i++)
    {
        if (arr[i]<min)
            min = arr[i];
    }
    printf ("Min = %d",min);
    return 0;
}

		Dynamic

#include <stdio.h>
# define MAX_SIZE 100000
int main()
{
    int arr[MAX_SIZE];
    int i,N,min;

    printf ("Enter the size of array:");
    scanf ("%d",&N);
    printf ("Enter the elements of array:");

    for (i=0;i<N;i++)
        scanf ("%d",&arr[i]);
    min = arr[0];
    for (i=0;i<N;i++)
    {
        if (arr[i]<min)
            min = arr[i];
    }
    printf ("Min = %d",min);
    return 0;
}
