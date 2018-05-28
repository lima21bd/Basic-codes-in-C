#include <stdio.h>
void main()
{
    char c1[]="Bangla";
    char c2[]="desh";
    char c3[12];
    int i,j,l1=6,l2=4;
    for(i=0,j=0; i<l1; i++,j++)
        c3[j] = c1[i];
    for(i=0; i<l2; i++,j++)
        c3[j] = c2[i];
    c3[j] = '\0';
    printf ("%s\n",c3);
}
