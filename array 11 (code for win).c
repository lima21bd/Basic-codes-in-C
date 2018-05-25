#include <stdio.h>
void main()
{
    int arr[100], arr2[100];
    int size, i, j, count;
    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
        arr2[i] = -1;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr2[j] = 0;
            }
        }
       if(arr2[i] != 0)
        arr2[i] = count;
    }
    for(i=0; i<size; i++)
    {
        if(arr2[i] != 0)
            printf("%d occurs %d times\n", arr[i], arr2[i]);
    }

    return 0;
}
