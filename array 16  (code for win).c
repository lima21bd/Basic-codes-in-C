#include <stdio.h>
#define MAX_SIZE 100

void main()
{
    int array[MAX_SIZE];
    int size, i;
    scanf("%d", &size);
    for(i=0; i<size; i++)
        scanf("%d", &array[i]);

    for(i = size-1; i>=0; i--)
        printf("%d\t", array[i]);
}
