		Static

#include <stdio.h>
int main()
{
    int arra[10];
    int i;
    for (i=0;i<10;i++)
        scanf ("%d",&arra[i]);
    for (i=0;i<10;i++)
        printf ("%d\n",arra[i]);
    return 0;
}

		Dynamic

#include <stdio.h>
#define MAX_SIZE 100000

int main()
{
    int arra[MAX_SIZE];
    int i,N;

    printf("Enter size of array:");
    scanf("%d",&N);
    printf("Enter %d elements in the array : ", N);

    for(i=0; i<N; i++)
        scanf("%d", &arra[i]);
    printf ("The elements in array are:");
    for(i=0; i<N; i++)
        printf("%d\n", arra[i]);

    return 0;
}
