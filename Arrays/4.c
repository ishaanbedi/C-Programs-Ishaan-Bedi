#include <stdio.h>
int main()
{
    int i, n, a, j;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    printf("Enter the position of the array from where to split:\n");
    scanf("%d", &a);
    for (i = 0; i < a; ++i)
    {
        arr[n] = arr[0];
        for (j = 0; j < n; ++j)
        {
            arr[j] = arr[j + 1];
        }
    }
    printf("The modified array is: \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d, ", arr[i]);
    }
}