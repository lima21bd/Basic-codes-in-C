#include <stdio.h>
int perfect (int num);
void main()
{
    int num;
    scanf ("%d",&num);
    perfect (num);
}
int perfect (int num)
{
    int i,sum=0;
    for (i=1;i<num;i++)
    {
        if(num%i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        printf ("The number is perfect");
    else
        printf ("The number is not perfect");

}

