#include <stdio.h>
void main()
{
    int row, column, space,end;
    scanf ("%d",&end);
    for(row=0;row<end;row++)
    {
        for (space=end-1;space>row;space--)
            printf (" ");
        for(column=0;column<=row;column++)
            printf ("* ");
        printf ("\n");
    }
}
