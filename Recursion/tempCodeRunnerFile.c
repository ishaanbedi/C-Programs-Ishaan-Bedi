
#include <stdio.h>
int logTwo(int n)
{
    if (n == 1)
        return 0;
    return 1 + logTwo(n / 2);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nValue of log base 2 of %d = %d\n", n, logTwo(n));
    return 0;
}
