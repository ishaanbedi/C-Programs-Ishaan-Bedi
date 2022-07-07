#include <stdio.h>
int main()
{
    int i, j, len, count = 0;
    printf("\n Enter number of elements in the array  :   ");
    scanf("%d", &len);
    int arr[len];
    printf("\n Enter the elements:  ");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < len; i++)
    {
        for (j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\n Number of Duplicate Elements in the Array:  %d ", count);
    return 0;
}