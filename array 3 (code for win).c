		Static
		
#include <stdio.h>
int main()
{
    int arr[5];
    int i,sum=0;
    
    for (i=0;i<5;i++)
        scanf ("%d",&arr[i]);
    for(i=0;i<5;i++)
        sum = sum + arr[i];

    printf ("%d",sum) ;
    return 0;
}

		Dynamic

#include <stdio.h>
#define MAX_SIZE 100000
int main()
{
    int arr[MAX_SIZE];
    int i,N,sum=0;

    printf ("Enter size of array:");
    scanf ("%d",&N);
    printf ("The %d elements of array are:",N);

    for (i=0;i<N;i++)
        scanf ("%d",&arr[i]);
    for(i=0;i<N;i++)
        sum = sum + arr[i];

    printf ("Sum: %d\n",sum) ;
    return 0;
}
