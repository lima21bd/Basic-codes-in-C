#include <stdio.h>
void main()
{
    float a,b,c;
    scanf ("%f %f %f",&a,&b,&c);
    float root1,root2,discriminant,i;
    discriminant = (b*b)-(4*a*c);
    if (discriminant>0)
    {
        root1 = (-b + (sqrt(discriminant)))/(2*a);
        root2 = (-b - (sqrt(discriminant)))/(2*a);
        printf ("%.2f\n%.2f\n",root1,root2);
    }
    else if(discriminant==0)
    {
        root1 = root2 = -b/(2*a);
        printf ("%.2f\n%.2f\n",root1,root2);
    }
    else if (discriminant==0)
    {
        root1 = root2 = -b/(2*a);
        i = (-sqrt(discriminant))/ (2 * a);
        printf ("%.2f+i%.2lf\n %.2f-i%.2lf\n",root1,i,root2,i);

    }

}
