#include <stdio.h>
void main()
{
    char choice;
    scanf ("%c",&choice);

    if (choice>= 'a' && choice<='z')
        printf ("Lower case\n");
    else if (choice>= 'A' && choice<='Z')
        printf ("Upper case\n");
    else if (choice>='0' && choice<='9')
        printf ("Digit\n");
    if ((choice>= 'a' && choice<='z')||(choice>= 'A' && choice<='Z'))
        printf ("Alphabet\n");
    if (choice == 'a'|| choice == 'e' || choice == 'i'|| choice == 'o'||
        choice == 'u'||choice == 'A'||choice == 'E'||choice == 'I'||choice == 'O'||choice == 'U')
            printf ("Vowel\n");
}
