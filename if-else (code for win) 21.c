#include<stdio.h>
void main()
{
    int unit;
    float amount,surcharge,total;
    scanf ("%d",&unit);
    if (unit<=50)
       amount = unit*.50;
    else if (unit<=150)
        amount = 25 + ((unit - 50)*.75);
    else if (unit<=250)
        amount = 100 + ((unit - 150)*1.2);
    else
        amount = 220 + ((unit - 250)*1.50);
    surcharge = amount * .20;
    total = amount + surcharge;
    printf ("%.2f\n",total);

}
