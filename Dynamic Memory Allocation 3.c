#include <stdio.h>
void main()
{
    int *b[5],i;
    for(i=0;i<5;i++)
        b[i] = (int *)malloc(sizeof(int)*10);
    printf ("b = %u\n",b);
    printf ("(b+1) = %u\n",(b+1));
    printf ("(b+2) = %u\n",(b+2));
    printf ("*(b+2) = %u\n",*(b+2));
    printf ("*(b+2)+3 = %u\n",*(b+2)+3);
    *(*(b+2)+3) = 5;
    printf ("b[2][3] = %u\n",b[2][3]);
}
