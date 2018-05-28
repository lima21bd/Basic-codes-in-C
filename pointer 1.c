#include <stdio.h>
void main()
{
    int x=10;
    int *p;
    printf ("value of x: %d\n",x);

    p = &x;
    *p = 20;

    printf ("value of x: %d\n",x);

    x = 15;
    printf ("value of x: %d\n",x);
    printf ("%x is %d\n",p,*p);
    printf ("%x\n",&x);
    printf ("%x\n",p);

}
