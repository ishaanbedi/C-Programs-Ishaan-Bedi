// Write a program to find the sum of a geometric series.
#include <stdio.h>
#include <math.h>

int main()
{
    int a, n, r;
    int sum = 0;

    printf("Enter the first term of the GP: ");
    scanf("%d", &a);
    printf("Enter common ratio of the GP: ");
    scanf("%d", &r);
    printf("Enter total  number of terms: ");
    scanf("%d", &n);
    int i = 0;
    while (i < n)
    {

        sum += a * pow(r, i);
        i++;
    }
    printf("Sum of the given GP till %d terms is: %d", n, sum);
    return 0;
}