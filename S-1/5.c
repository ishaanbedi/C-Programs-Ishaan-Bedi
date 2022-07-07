#include <stdio.h>
void circle()
{
    float r;
    printf("Input radious of the circle : ");
    scanf("%f", &r);
    printf("Area: %f unit^2 ", 3.14 * r * r);
}
void rectangle()
{
    float l, w;
    printf("Input length and width of the rectangle : ");
    scanf("%f%f", &l, &w);
    printf("Area: %f unit^2", l * w);
}
void triangle()
{
    float b, h;
    printf("Input the base and hight of the triangle :");
    scanf("%f%f", &b, &h);

    printf("Area:%f ", 0.5 * b * h);
}
int main()
{
    int choice;
    printf("Enter 1 for circle\n");
    printf("Enter 2 for rectangle\n");
    printf("Enter 3 for triangle\n");
    printf(">>> ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        circle();
        break;
    case 2:
        rectangle();
        break;
    case 3:
        triangle();
        break;
    default:
        printf("Invalid Input");
    };
    return 0;
}