#include <stdio.h>
#include <string.h>
void main()
{
    struct nametype
    {
        char first[20];
        char last[20];
    };
    struct student
    {
        int id;
        struct nametype name;
    };
    struct student one;
    scanf("%d",&one.id);
    scanf("%s %s",&one.name.first,&one.name.last);
    printf ("ID: %d\n",one.id);
    printf ("Name:%s %s\n",one.name.first,one.name.last);
}
