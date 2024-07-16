#include <stdio.h>

void scan(int col, int row, int mat[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix(int row, int col, int mat[][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void matTranspose(int row, int col, int mat1[][col],int ans[][row])
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            ans[i][j] = mat1[j][i];
        }
    }
}

int main()
{
    int row1;
    int col1;

    printf("Enter the no of rows: ");
    scanf("%d", &row1);

    printf("Enter the no of cols: ");
    scanf("%d", &col1);

    int mat1[row1][col1];

    scan(col1, row1, mat1);

    printf("The first matrix is: \n");
    printMatrix(row1, col1, mat1);

    int ans[col1][row1];

    matTranspose(row1, col1, mat1,ans);

    printf("The Transpose matrix is: \n");
    printMatrix(col1, row1, ans);

    return 0;
}
