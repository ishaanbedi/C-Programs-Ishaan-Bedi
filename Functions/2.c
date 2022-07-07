#include <stdio.h>

double diameter(double radius)
{
    return (2 * radius);
}

double circumference(double radius)
{
    return (2 * 3.14 * radius);
}
double area(double radius)
{
    return (3.14 * 3.14 * radius);
}

int main()
{
    float radius, dia, circ, ar;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    dia = diameter(radius);
    circ = circumference(radius);
    ar = area(radius);
    printf("Diameter of the circle: %f units\n", dia);
    printf("Circumference of the circle: %f units\n", circ);
    printf("Area of the circle: %f units^2", ar);
    return 0;
}