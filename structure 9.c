#include <stdio.h>
#include <string.h>
void main()
{
    typedef struct
    {
        char first1[20];
        char last1[20];
        char first2[20];
        char last2[20];
        char first3[20];
        char last3[20];
    }nametype;

    typedef struct
    {
        int day;
        int month;
        int year;
    }datetype;

    typedef struct
    {
        nametype name;
        datetype date;
        int id;
    }alltype;
    alltype info;
    printf ("Enter the first name of voter: ");
    scanf ("%s",&info.name.first1);
    printf ("Enter the last name of voter: ");
    scanf ("%s",&info.name.last1);
    printf ("Enter the first name of father: ");
    scanf ("%s",&info.name.first2);
    printf ("Enter the last name of father: ");
    scanf ("%s",&info.name.last2);
    printf ("Enter the first name of mother: ");
    scanf ("%s",&info.name.first3);
    printf ("Enter the last name of mother: ");
    scanf ("%s",&info.name.last3);
    printf ("Enter date in day-month-year: ");
    scanf ("%d %d %d",&info.date.day,&info.date.month,&info.date.year);
    printf ("Enter ID no: ");
    scanf ("%d",&info.id);
    printf ("\n");
    printf ("Name: %s %s\n",info.name.first1,info.name.last1);
    printf ("Father's Name: %s %s\n",info.name.first2,info.name.last2);
    printf ("Mother's Name: %s %s\n",info.name.first3,info.name.last3);
    printf ("Date: %d-%d-%d\n",info.date.day,info.date.month,info.date.year);
    printf ("ID: %d\n",info.id);
}
