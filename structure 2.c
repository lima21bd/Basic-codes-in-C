#include <stdio.h>
void main()
{
    struct student
    {
        int id;
        char name[100];
    };
    struct student one;
    one.id = 1;
    strcpy(one.name,"Khadija Akter");
    printf ("ID: %d\nName: %s\n",one.id,one.name);
}
