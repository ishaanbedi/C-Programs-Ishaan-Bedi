#include <stdio.h>

int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}
int main()
{
    int num1, num2, maxNo, minNo;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    maxNo = max(num1, num2);
    minNo = min(num1, num2);
    printf("Max: %d\n", maxNo);
    printf("Min: %d", minNo);
    return 0;
}
