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

void matTranspose(int row, int col, int mat1[][col],int *p_sum,int *s_sum)
{
    *p_sum = 0;
    *s_sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i == j)
            {
                *p_sum += mat1[i][j];
            }
            if(j == col-1-i)
            {
                *s_sum += mat1[i][j];
            }

        }
    }

}

int main()
{
    int row1;
    int col1;
    int psum;
    int ssum;

    printf("Enter the no of rows: ");
    scanf("%d", &row1);

    printf("Enter the no of cols: ");
    scanf("%d", &col1);

    int mat1[row1][col1];

    scan(col1, row1, mat1);

    printf("The first matrix is: \n");
    printMatrix(row1, col1, mat1);

    matTranspose(row1, col1, mat1,&psum,&ssum);

    printf("The  primary sum of diagonal is: %d\n",psum);
    printf("The  secondary sum of diagonal is: %d",ssum);

    return 0;
    
}
