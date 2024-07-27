#include <stdio.h>

int sum(int n, int mat[][n])
{
    int ans = 0;

    int col = n - 1;

    for (int i = 0; i < n; i++)
    {
        ans += mat[0][i];
        ans += mat[n - 1][i];
        ans += mat[i][col];
        col--;
    }

    ans = ans - mat[0][n - 1];
    ans = ans - mat[n - 1][0];

    return ans;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", mat[i][j]);
        }
    }

    printf("The sum is: %d", sum(n, mat));

    return 0;
}