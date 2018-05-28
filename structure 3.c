#include <stdio.h>
#include <string.h>
void main()
{
    struct student
    {
        int id;
        char name[100];
    };
    struct student one;
    gets(one.name);
    scanf ("%d",&one.id);
    printf ("ID: %d\nName: %s\n",one.id,one.name);
}
