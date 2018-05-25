#include <stdio.h>
int even_odd(int num);
void main()
{
    int num;
    scanf ("%d",&num);
    even_odd(num);
}
int even_odd(int num)
{
    if (num%2 == 0)
       printf ("%d is even\n",num);
    else
       printf ("%d is odd\n",num);
}
