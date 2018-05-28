#include <stdio.h>
void main()
{
    int row,column,end;
    scanf ("%d",&end);
    for (row=0;row<end;row++)
    {
        for (column=end;column>row;column--)
        {
            printf ("* ");
        }
        printf ("\n");
    }
}
