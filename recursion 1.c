#include <stdio.h>
int rec(int a);
void main()
{
    int a,f;
    scanf ("%d",&a);
    f = rec(a);
    printf ("%d\n",f);
}
int rec(int a)
{
    if (a == 1)
        return 1;
    else
        return a*rec(a-1);

}
