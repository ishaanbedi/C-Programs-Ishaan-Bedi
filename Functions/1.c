#include <stdio.h>
int cube(int num)
{
    return (num * num * num);
}
int main()
{
    int num;
    int c;
    printf("Enter a number: ");
    scanf("%d", &num);
    c = cube(num);
    printf("Cube of %d is %d", num, c);
    return 0;
}
