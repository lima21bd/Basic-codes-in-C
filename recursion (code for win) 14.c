#include <stdio.h>
int sum (int a, int b);
void main()
{
    int a,b,s;
    scanf ("%d %d",&a,&b);
    s = sum(a,b);
    printf ("Sum: %d\n",s);
}
int sum(int a, int b)
{
    if (a<=b)
        return a+sum(a+2,b);
    else
        return 0;
}
