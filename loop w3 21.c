#include <stdio.h>
void main()
{   long int n,i,k=9;
	int sum =0;
	scanf("%ld",&n);
	for (i=1;i<=n;i++)
	{ sum +=k;
	if (i<n)
    {
        printf("%ld + ",k);
	  k=k*10+9;
    }
    else if (i==n)
    {
	  printf("%ld\n",k);
	  k=k*10+9;
	}
	}
	printf("The sum of the series = %d \n",sum);
}
