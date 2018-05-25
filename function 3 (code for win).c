#include <stdio.h>
int max(int n1, int n2);
void main()
{
    int n1,n2,maximum;
    scanf ("%d %d",&n1,&n2);
    maximum = max (n1,n2);
    printf ("Maximum value: %d\n",maximum);
}
int max(int n1, int n2)
{
    if (n1>n2)
        return n1;
    else
        return n2;

}

