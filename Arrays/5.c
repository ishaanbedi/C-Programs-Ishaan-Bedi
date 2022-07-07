#include <stdio.h>
int main(void)
{
    int n[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%d, ", n[i][j]);
            }
        }
        else
        {
            for (int j = 3; j >= 0; j--)
            {
                printf("%d, ", n[i][j]);
            }
        }
    }
    return 0;
}
