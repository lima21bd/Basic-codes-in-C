#include <stdio.h>
int max(int n1, int n2,int n3);
void main()
{
    int n1,n2,n3,maximum;
    scanf ("%d %d %d",&n1,&n2,&n3);
    maximum = max (n1,n2,n3);
    printf ("Maximum value: %d\n",maximum);
}
int max(int n1, int n2, int n3)
{
    if (n1>n2 && n1>n3)
        return n1;
    else if (n2>n1 && n2>n3)
        return n2;
    else
        return n3;

}


