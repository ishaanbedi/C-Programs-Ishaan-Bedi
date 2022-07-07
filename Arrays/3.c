#include <stdio.h>
int main()
{
    int array[10], i;
    for (i = 0; i <= 11; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
    }
}