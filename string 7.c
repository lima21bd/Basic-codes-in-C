#include <stdio.h>
void main()
{
    char arr[100];
    while (NULL != gets(arr))
        printf ("%s\n",arr);
}
