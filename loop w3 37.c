#include <stdio.h>
void main()
{
    int num,k,remainder,sum=0;
    scanf ("%d",&num);
    for (k=num;num!=0;num/=10)
    {
        remainder = num%10;
        sum = sum*10+remainder;
    }
    printf ("The reverse of the number: %d",sum);
}
