#include <stdio.h>

void spiral(int row, int col, int mat[][col])
{
    int left = 0;
    int top = 0;
    int right = col - 1;
    int bottom = row - 1;
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            printf("%d ", mat[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            printf("%d ", mat[i][right]);
        }
        right--;
        if (top <= bottom && left <= right)
        {
            for (int i = right; i >= left; i--)
            {
                printf("%d ", mat[bottom][i]);
            }
        }
        bottom--;
        if (top <= bottom && left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", mat[i][left]);
            }
        }
        left++;
    }
}

int main()
{
    int n;
    int m;

    printf("Enter row: ");
    scanf("%d", &n);

    printf("Enter col: ");
    scanf("%d", &m);

    int mat[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("The input matrix is: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }

    spiral(n, m, mat);

    return 0;
}