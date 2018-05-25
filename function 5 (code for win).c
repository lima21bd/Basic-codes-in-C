#include <stdio.h>
int prime(int num);
void main()
{
    int num;
    scanf ("%d",&num);
    prime(num);
}
int prime(int num)
{
    int i, flag=0;
    for (i=2;i<=num/2;i++)
    {
        if (num%i==0)
        {
            flag = 1;
            break;
        }
    }
    if (flag==0)
        printf ("The number is prime");
    else
        printf ("The number is not prime");
}


