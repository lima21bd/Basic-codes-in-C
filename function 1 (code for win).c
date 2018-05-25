#include <stdio.h>
int cube(int c);
void main()
{
    int a,b;
    scanf ("%d",&a);
    b = cube(a);
    printf ("%d\n",b);
}

int cube(int c)
{
    int d;
    d = c*c*c;
    return d;
}
