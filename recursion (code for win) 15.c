#include<stdio.h>
int reverse(int num);
void main()
{
    int num,rev;
    scanf("%d",&num);
    rev = reverse(num);
    printf ("%d\n",rev);
}
int sum=0,rem;
int reverse(int num)
{
    if(num==0)
        return sum;
    else
    {
        rem = num%10;
        sum = (sum*10) + rem;
        reverse(num/10);
    }
    return sum;
}
