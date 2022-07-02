
// Write a menu-driven program for matrices to do the following operation depending on whether the operation requires one or two matrices
// a. Addition of two matrices
// b. Subtraction of two matrices
// c. Finding upper and lower triangular matrices
// d. Transpose of a matrix
// e. Product of two matrices

#include <stdio.h>
void add()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
}

void sub()
{
    int r, c, a[100][100], b[100][100], sub[100][100], i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    printf("\nSubtraction of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", sub[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
}

void triangle()
{
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i > j)
                printf("0");
            else
                printf("%d", a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i < j)
                printf("0");
            else
                printf("%d", a[i][j]);
            printf(" ");
        }
        printf("\n");
    }


}

void transpose()
{

    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int a[r][c];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    int b[r][c];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            b[i][j] = a[j][i];

    printf("Transpose of matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", b[i][j]);
        printf("\n");
    }


}

void multiply()
{
    int r1, c1, r2, c2, a[100][100], b[100][100], prod[100][100], i, j;
    printf("Enter the number of rows of first matrix: ");
    scanf("%d", &r1);
    printf("Enter the number of columns of first matrix: ");
    scanf("%d", &c1);
    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c1; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    printf("Enter the number of rows of second matrix: ");
    scanf("%d", &r2);
    printf("Enter the number of columns of second matrix: ");
    scanf("%d", &c2);
    if (c1 != r2)
    {
        printf("Invalid input");
    }
    else
    {
        printf("Enter elements of 2nd matrix:\n");
        for (i = 0; i < r2; ++i)
            for (j = 0; j < c2; ++j)
            {
                printf("Enter element b%d%d: ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        printf("Multiplication of given two matrices is:\n\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                prod[i][j] = 0;
                for (int k = 0; k < 3; k++)
                {
                    prod[i][j] += a[i][k] * b[k][j];
                }
                printf("%d, ", prod[i][j]);
            }
            printf("\n");
        }
    }


}

void menu()
{
    // a. Addition of two matrices
    // b. Subtraction of two matrices
    // c. Finding upper and lower triangular matrices
    // d. Transpose of a matrix
    // e. Product of two matrices
    printf("Press a for addition of two matrices\n");
    printf("Press b for subtraction of two matrices\n");
    printf("Press c for finding upper and lower triangular matrices\n");
    printf("Press d for transpose of matrix\n");
    printf("Press e for product of two matrices\n");

    printf(">>> ");
}
int main()
{
    menu();
    char s;
    scanf("%c", &s);
    switch (s)
    {
    case 'a':
        add();
        break;
    case 'b':
        sub();
        break;
    case 'c':
        triangle();
        break;
    case 'd':
        transpose();
        break;
    case 'e':
        multiply();
        break;

    default:
        printf("Invalid Option selected\n");
    }
    return 0;
}