#include<stdio.h>
void main()
{
    int num,product=1,remainder,temp;
    scanf ("%d",&num);
    for (temp=num;num!=0;num/=10)
    {
       remainder = (num%10);
       product = product * (num%10);
    }
    printf ("%d\n",product);

}
