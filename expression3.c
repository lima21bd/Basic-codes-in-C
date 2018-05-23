#include <stdio.h>
void main()
{
    int i;
    for(i=1;i<=9;i++)
    {
        if (i%3==0)
        {
           printf ("\nDivided by 3");
           continue;
           printf("\nPrint again");
        }
        printf ("\nIndex is %d",i);
    }
}
