#include <stdio.h>
void main()
{
    int x=4,y=4,z=5;
    y=--x; // x deccrement so x &y = 3
    x+=10; //now x=x+10 so 3+10 so x=13
    z=x++; //z = x. so z=13 and x++ so x=14
    printf ("%d\n%d\n%d\n",x,y,z);
    printf ("%d\n",x++); //now x print kore erpor inc so 14 print korbe erpor 1 bere 15
    printf ("%d\n",++x); // ekhon age 1 barbe erpor print korbe so 15
}
