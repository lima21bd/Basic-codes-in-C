#include <stdio.h>
#define SIZE 100
int main()
{
    int arr1[100][100],arr2[100][100],arr3[100][100];
    int i,j,row,column;

    printf ("How many row? = ");
    scanf ("%d",&row);
    printf ("How many column? = ");
    scanf ("%d",&column);

    printf ("Take entries for matrix A:");
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            scanf ("%d",&arr1[i][j]);
        }
    }

    printf ("Take entries for matrix B:");
    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            scanf ("%d",&arr2[i][j]);
        }
    }

    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (i=0;i<row;i++)
    {
        for (j=0;j<column;j++)
        {
            printf ("Sum of matrix A & B is = %d",arr3[i][j]);
        }
         printf ("\n");
    }

    return 0;
}
