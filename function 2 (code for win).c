#include <stdio.h>
# define PI 3.1416
float diameter(float r);
float circumference(float r);
float area(float r);
void main()
{
    float radius,c,d,a;
    scanf ("%f",&radius);
    d = diameter (radius);
    c = circumference (radius);
    a = area (radius);
    printf ("diameter: %f\ncircumference: %f\narea: %f\n",d,c,a);

}
float diameter(float r)
{
    float result;
    result = 2*r;
    return result;
}
float circumference(float r)
{
    float result1;
    result1 = 2*PI*r;
    return result1;
}
float area(float r)
{
    float result2;
    result2 = PI*r*r;
    return result2;
}
