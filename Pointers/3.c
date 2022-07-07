#include <stdio.h>
void compare(int a, int b, int *add_big, int *small)
{
    if (a > b)
    {

        *add_big = a;
        *small = b;
    }
    else
    {
        *add_big = b;
        *small = a;
    }
}

int main()
{
    int big, small, x, y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    compare(x, y, &big, &small);
    printf("\nThe bigger number is %d and the smaller number is %d",
           big, small);
    return 0;
}