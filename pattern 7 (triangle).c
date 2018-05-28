#include <stdio.h>
void main()
{
    int row,space,column,end;
    scanf ("%d",&end);
    for (row=0;row<end;row++)
    {
        for(space=0;space<row;space++)
            printf (" ");
        for (column=end-1;column>=row;column--)
            printf ("* ");
        printf ("\n");
    }
}
