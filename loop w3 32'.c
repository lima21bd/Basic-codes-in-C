#include <stdio.h>

void main()

{

    int i,num,x=0;

    scanf ("%d",&num);

    for (i=2;i<=num/2;i++)

    {

            if(num%i==0)

            {

                x=1;

                break;

            }

            else

                x=0;

    }

        if (x==0)

       printf ("%d is prime number\n",num);

}
