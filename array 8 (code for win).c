#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int first[MAX_SIZE], second[MAX_SIZE];
    int i, size;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &first[i]);
    }
    for(i=0; i<size; i++)
    {
        second[i] = first[i];
        printf("%d ", second[i]);
    }

    return 0;
}
