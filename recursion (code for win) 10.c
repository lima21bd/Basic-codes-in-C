#include <stdio.h>
long power (int base,int pow);
void main()
{
    int base,pow;
    long result;
    scanf ("%d %d",&base,&pow);
    result = power(base,pow);
    printf ("%ld\n",result);
}
long power (int base,int pow)
{
    if (pow==1)
        return base;
    else if (pow==0)
        return 1;
    else if (pow>1)
        return base*power(base,pow-1);
}
