#include <stdio.h>
#define MAX 3
int main ()
{
    int arr[3]={10,100,200};
    int *p[MAX];
    int i;
    p[3] = &arr[3];
    for(i=0;i<MAX;i++)
    {
       p[i] = &arr[i];
       printf ("%x\n",p[i]);
    }
    for(i=0;i<MAX;i++)
    {
       printf ("%d\n",*p[i]);
    }
    printf ("%x\n",arr);
    return 0;
}
