#include <stdio.h>
void main()
{
   int i,n;
   float s=0.0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
        s+=1/(float)i;
printf("Sum of Series %f \n",s);
}
