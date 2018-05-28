#include <stdio.h>
char string_length(char country[]);
void main()
{
   char country[100];
   int length;
   while (1==scanf ("%s",&country))
   {
       length = string_length(country);
       printf ("length: %d\n",length);
   }
}
char string_length(char country[])
{
    int i,count=0;
    for (i=0;country[i]!='\0';i++)
        count++;
    return count;
}
