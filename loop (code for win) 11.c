#include <stdio.h>
void main()
{
    int num;
    scanf ("%d",&num);
    int temp,first,last;
    temp = num;
    last = num%10;
    while (temp>10)
        temp = temp/10;
    first = temp;
    printf ("first: %d\nlast: %d\n",first,last);

}
