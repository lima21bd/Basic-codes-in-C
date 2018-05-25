#include <stdio.h>
#include <math.h>
 
int armstrong(int num);
void main()
{
    int num;
    scanf ("%d",&num);
    armstrong(num);
}
int armstrong(int num)
{
 
    int temp,rem,p,sum=0,count=0;
 
    for (temp=num;temp!=0;temp/=10)
 
    {
 	count++;
    }
 
    for (temp=num;temp!=0;temp/=10)
 
    {
 
      rem = temp%10;
 
      p = pow(rem,count);
 
      sum += p;
 
    }
 
    if (sum == num)
 
        printf ("The number is armstrong number");
 
    else
 
        printf ("The number is not armstrong number");
 
}
