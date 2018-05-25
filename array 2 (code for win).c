		Static

#include <stdio.h>
int main()
{
    int arr[5];
    int i;
    for (i=0;i<5;i++)
        scanf ("%d",&arr[i]);
    for (i=0;i<5;i++)
        {
            if (arr[i]<0)
                printf ("%d\n",arr[i]);
        }

    return 0;
}

		Dynamic

#include <stdio.h>
#define MAX_SIZE 100000
int main()
{
    int arr[MAX_SIZE];
    int i,N;

    printf ("Enter the size of array:");
    scanf ("%d",&N);
    printf ("Enter %d elements:",N);

    for (i=0;i<N;i++)
        scanf ("%d",&arr[i]);
    printf ("Negative elements:");
    for (i=0;i<N;i++)
        {
            if (arr[i]<0)
                printf ("%d\n",arr[i]);
        }

    return 0;
}

