#include <stdio.h>
#include <stdlib.h>
typedef struct mylist
{
    int data;
    struct mylist *next;
}node;

void main()
{
    node *a = (node *)malloc(sizeof (node));
    node *b = (node *)malloc(sizeof (node));
    node *c = (node *)malloc(sizeof (node));

    a->next = NULL;
    b->next = NULL;
    c->next = NULL;

    printf ("a data = ");
    scanf ("%d",&a->data);
    printf ("b data = ");
    scanf ("%d",&b->data);
    printf ("c data = ");
    scanf ("%d",&c->data);

    a->next = b;
    b->next = c;

    printf ("\n");

    while(a!=NULL)
    {
        printf ("%d->",a->data);
        a = a->next;
    }

    printf ("NULL\n");
}
