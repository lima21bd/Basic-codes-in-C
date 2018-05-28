#include <stdio.h>
int even(int a, int b);
int odd(int a, int b);
void main()
{
    int a,b;
    scanf ("%d %d",&a,&b);
    even(a,b);
    odd(a,b);
}
int even(int a, int b)
{
    if (a<=b)
    {
       printf ("%d  ",a);
       even(a+2,b);
    }
}
int odd(int a, int b)
{
    if (a<=b)
    {
       printf ("%d  ",a);
       odd(a+2,b);
    }
}
