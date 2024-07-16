#include<stdio.h>

void scan(int col,int row,int mat[][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}

void print(int col,int row,int mat[][col])
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        { 
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int matDiagonals(int row,int col,int mat1[][col])
{
    int l_sum = 0;
    int rowi = 0;
    int coli = 0;

    for(int i=1;i<col-1;i++)
    {
        rowi = i;
        l_sum += mat1[rowi][coli++];
        if(coli < rowi)
        {
            i--;
        }
    }

    return l_sum;
}

int main()
{
    int row1;
    int col1;

    int row2;
    int col2;

    printf("Enter the no of rows: ");
    scanf("%d",&row1);

    printf("Enter the no of cols: ");
    scanf("%d",&col1);

    int mat1[row1][col1];

    scan(col1,row1,mat1);

    printf("Before interchanging: \n");
    print(col1,row1,mat1);

    int ans = matDiagonals(row1,col1,mat1);

    printf("The lower triangle sum is: %d",ans);

    return 0;
}