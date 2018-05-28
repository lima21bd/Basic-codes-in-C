#include <stdio.h>
void main()
{
    int row,column,end;

    scanf ("%d",&end);

    for (row=0;row<end;row++)
    {
        for (column=0;column<row+1;column++)
        {
           printf ("* ");
        }
        printf ("\n");
    }
}
