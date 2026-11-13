// Row sums, column sums and identity check of a matrix
#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, sum, isIdentity = 1;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("\nMatrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    for (i = 0; i < r; i++)
    {
        sum = 0;
        for (j = 0; j < c; j++)
            sum = sum + a[i][j];
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    for (j = 0; j < c; j++)
    {
        sum = 0;
        for (i = 0; i < r; i++)
            sum = sum + a[i][j];
        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    // identity matrix: square, 1 on the diagonal, 0 everywhere else
    if (r != c)
        isIdentity = 0;
    for (i = 0; i < r && isIdentity == 1; i++)
    {
        for (j = 0; j < c; j++)
        {
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
            {
                isIdentity = 0;
                break;
            }
        }
    }

    if (isIdentity == 1)
        printf("It is an identity matrix\n");
    else
        printf("It is not an identity matrix\n");

    return 0;
}
