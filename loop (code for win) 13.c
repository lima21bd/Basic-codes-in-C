#include <stdio.h>
void main()
{
    int num;
    scanf ("%d",&num);
    int temp,first,last,swap;
    temp = num;
    last = num%10;
    while (temp>10)
        temp = temp/10;
    first = temp;
    printf ("first: %d\nlast: %d\n",first,last);

    first = temp;
    swap = first;
    first = last;
    last = swap;

    printf ("After swap : %d\n%d\n",first,last);
}
