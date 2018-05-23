#include <stdio.h>
void main()
{
    int A[5]={2,5,7,6,9},i;
    for (i=0;i<5;i++)
    {
        A[i]=A[i]*i;
    }
    for (i=0;i<5;i++)
    {
        printf ("A[%d]=%d\n",i,A[i]);
        if(i%3==0)
        {
            printf ("A[%d]=%d\n",i,A[i]);
            continue;
            printf ("Hello World");
        }
    }
}


