// Perfect Numbers in an interval
#include <stdio.h>
int perfect(int n)
{
    int i, count;
    count = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            count += i;
        }
    }
    if (count == n)
        return 1;
    else
        return 0;
}
void checkPerfect(int a, int b)
{
    while (a <= b)
    {
        if (perfect(a))
        {
            printf("%d, ", a);
        }
        a++;
    }
}
int main()
{
    int a, b;
    printf("Enter range: ");
    scanf("%d %d", &a, &b);
    checkPerfect(a, b);
    return 0;
}
