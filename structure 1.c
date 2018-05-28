#include <stdio.h>
void main()
{
    struct student
    {
        char *name;
        int id;
    };
    struct student one;
    one.id = 1;
    one.name = "Khadija Akter";
    printf ("ID: %d\nName: %s\n",one.id,one.name);
}
