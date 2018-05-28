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
    int i=0,count;
    while (country[i]!='\0')
    {
        count++;
        i++;
    }
    return i;
}

