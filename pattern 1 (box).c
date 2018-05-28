#include <stdio.h>
void main()
{
    int row,column,start,end;
    scanf ("%d",&end);
    for (row=0;row<end;row++)
    {
        for (column=0;column<end;column++)
        {
           printf ("* ");
        }
        printf ("\n");
    }
}
