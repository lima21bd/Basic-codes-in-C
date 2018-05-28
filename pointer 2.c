#include <stdio.h>
void main()
{
    int x = 10, y;
    int *p, *q;
    p = &x;
    q = &y;
    *p = 15;
    *q = 20;
    printf ("%d\n",x);
    printf ("%d\n",y);
    printf ("%d\n",*p);
    printf ("%d\n",*q);
}
