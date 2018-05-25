#include <stdio.h>
int min(int n1, int n2,int n3);
void main()
{
    int n1,n2,n3,minimum;
    scanf ("%d %d %d",&n1,&n2,&n3);
    minimum = min (n1,n2,n3);
    printf ("Minimum value: %d\n",minimum);
}
int min(int n1, int n2, int n3)
{
    if (n1<n2 && n1<n3)
        return n1;
    else if (n2<n1 && n2<n3)
        return n2;
    else
        return n3;

}


