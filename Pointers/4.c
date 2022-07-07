#include <stdio.h>
void multiply(int matA[][50], int ra, int ca, int matB[][50], int rb, int cb, int matC[][50])
{
    int i, j, k, sum = 0;
    if (ca != rb)
    {
        printf("Invalid input.");
        return;
    }
    for (i = 0; i < ra; ++i)
    {
        for (j = 0; j < cb; ++j)
        {
            sum = 0;
            for (k = 0; k < ra; ++k)
            {
                sum += *(*(matA + i) + k) * *(*(matB + k) + j);
            }
            *(*(matC + i) + j) = sum;
        }
    }
}
int main()
{
    int i, j;
    int ra, ca, rb, cb;
    int matA[50][50], matB[50][50], matC[50][50];
    printf("Enter Number of Rows in first matrix: ");
    scanf("%d", &ra);
    printf("Enter Number of columns in first matrix: ");
    scanf("%d", &ca);
    printf("Enter elements: \n");
    for (i = 0; i < ra; ++i)
    {
        for (j = 0; j < ca; ++j)
        {
            scanf("%d", &matA[i][j]);
        }
    }
    printf("Enter Number of Rows in second matrix: ");
    scanf("%d", &rb);
    printf("Enter Number of columns in second matrix: ");
    scanf("%d", &cb);
    printf("Enter elemnts: \n");
    for (i = 0; i < rb; ++i)
    {
        for (j = 0; j < cb; ++j)
        {
            scanf("%d", &matB[i][j]);
        }
    }
    multiply(matA, ra, ca, matB, rb, cb, matC);
    for (i = 0; i < ra; ++i)
    {
        for (j = 0; j < cb; ++j)
        {
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }
}
