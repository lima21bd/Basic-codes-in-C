#include <stdio.h>
void main()
{
    int x=5,y=10,z=-3,d;
    d = x+(y/(++z));
    printf ("%d%d",d,z);
}
