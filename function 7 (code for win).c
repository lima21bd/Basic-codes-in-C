#include <stdio.h>
int strong(int num);
void main()
{
    int num;
    scanf ("%d",&num);
    strong(num);
}
int strong(int num)
{
    int temp,rem,f,sum=0,i;
    for (temp=num;num!=0;num/=10)
    {
        rem = num%10;
        f=1;
        for (i=1;i<=rem;i++)
        {
            f = f*i;
        }
        sum = sum+f;
    }
        if (sum == temp)
            printf ("The number is strong\n");
        else
           printf ("The number is not strong\n");
}

