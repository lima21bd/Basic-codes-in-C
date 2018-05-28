#include <stdio.h>
#include <string.h>
void main()
{
    typedef struct
    {
        char first[30];
        char last[30];
    }nametype;
    typedef struct
    {
        nametype name;
        float price;
        int page;
    }booktype;
    booktype book[3];
    int i;
    for (i=0;i<3;i++)
    {
        printf ("Enter info for book %d>\n",i+1);
        printf ("Enter the first name of book: ");
        scanf ("%s",&book[i].name.first);
        printf ("Enter the last name of book: ");
        scanf ("%s",&book[i].name.last);
        printf ("Enter the price: ");
        scanf ("%f",&book[i].price);
        printf ("Enter the page: ");
        scanf ("%d",&book[i].page);
        printf ("\n");

    }
    for (i=0;i<3;i++)
    {
        printf ("Book Name: %s %s\n",book[i].name.first,book[i].name.last);
        printf ("Price: %f\n",book[i].price);
        printf ("Page: %d\n",book[i].page);
        printf ("\n");
    }
}
