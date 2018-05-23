#include <stdio.h>
void main()
{
    int x=3,y=12,z=15;
    printf ("%d\n",++x);
    y+=(x+1);
    printf ("%d\t%d\n",x,y);
    z=(x--)+ (--y);
    printf ("%d",z++);

}

