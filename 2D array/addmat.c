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

int matEqual(int row,int col,int mat1[][col],int mat2[][col])
{

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(mat1[i][j] != mat2[i][j])
            {
                return 0;
            }
        }
    }

    return 1;
    
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

    printf("Enter the no of rows: ");
    scanf("%d",&row2);

    printf("Enter the no of cols: ");
    scanf("%d",&col2);

    int mat2[row2][col2];

    scan(col2,row2,mat2);

    printf("The first matrix is: \n");
    print(col1,row1,mat1);

    printf("The second matrix is: \n");
    print(col2,row2,mat2);

    int ans = matEqual(row1,col1,mat1,mat2);

    if(ans)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}
