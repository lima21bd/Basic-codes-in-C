#include <stdio.h>
void main()
{
    int c ='A';
    int *p,**q;
    p = &c;
    q = &p;
    **q = 'B';
    printf ("%c %c %c",c,*p,**q);
}
