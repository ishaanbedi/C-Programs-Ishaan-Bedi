// Write a program to find the divisor or factorial of a given number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int fact = 1;
    if (num < 0)
    {
        printf("Negative number");
    }
    else if (num == 0 || num == 1)
    {
        printf("Factorial of %d is %d.", num, fact);
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d is %d", num, fact);
    }
    return 0;
}