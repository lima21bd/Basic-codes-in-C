#include <stdio.h>
#include <string.h>
typedef struct
    {
        char first[20];
        char last[20];
    }nametype;
    typedef struct
    {
        int id;
        nametype name;
        char grade[2];
    }studentype;
void calculate_grade(studentype *s,int mark)
{
   if (mark >= 80)
    strcpy (s->grade, "A+");
   else if (mark >= 70)
    strcpy (s->grade, "A");
   else if (mark >= 60)
    strcpy (s->grade, "A-");
   else if (mark >= 50)
    strcpy (s->grade, "B");
   else if (mark >= 40)
    strcpy (s->grade, "C");
   else
    strcpy (s->grade, "F");
}

void main()
{
    studentype student[3];
    int i;
    int marks[3]={40,60,80};
    for(i=0;i<3;i++)
    {
        printf ("Enter the ID for student %d: ",i+1);
        scanf ("%d",&student[i].id);
        printf ("Enter the first name of student: ");
        scanf ("%s",&student[i].name.first);
        printf ("Enter the last name of student: ");
        scanf ("%s",&student[i].name.last);
        strcpy (student[i].grade, "");
        printf ("\n");
    }
    for(i=0;i<3;i++)
        calculate_grade(&student[i],marks[i]);
    for(i=0;i<3;i++)
    {
        printf ("ID: %d\n",student[i].id);
        printf ("Name: %s %s\n",student[i].name.first,student[i].name.last);
        printf ("Grade: %s\n",student[i].grade);
    }
}
