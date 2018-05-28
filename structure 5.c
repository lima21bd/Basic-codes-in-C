#include <stdio.h>
void main()
{
    struct nametype
    {
        char first[20];
        char last[20];
    };
    struct studentype
    {
        int id;
        struct nametype name;
    };
    struct studentype student[5];
    int i;
    for (i=0;i<5;i++)
    {
        printf ("Enter student ID for %d: ",i+1);
        scanf ("%d",&student[i].id);
        printf ("Enter the first name of student:");
        scanf ("%s",&student[i].name.first);
        printf ("Enter the last name of student:");
        scanf ("%s",&student[i].name.last);
    }
    for (i=0;i<5;i++)
    {
        printf ("ID: %d\n",student[i].id);
        printf ("Name: %s %s\n",student[i].name.first,student[i].name.last);
    }

}
