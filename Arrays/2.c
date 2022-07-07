#include <stdio.h>
int main()
{
    printf("Enter the length of the 1st array : ");
    int len, i;
    scanf("%d", &len);
    int arr[len];

    printf("Enter the length of the 2nd array : ");
    int len2;
    scanf("%d", &len2);
    int arr2[len2];

    printf("Enter the Element of the 1st array:\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the Element of the 2nd array:\n");
    for (i = 0; i < len2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int j, count = 0;

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (arr[i] == arr2[j])
            {
                count++;
            }
        }
    }
    if (count == len2)
        printf("Array two is a subset of array one.");
    else
        printf("Array two is not a subset of array one");
}