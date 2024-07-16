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

void pattern(int n)
{
    int var = 0;
    int row = 0;

    for(int i=0;i<n*2-1;i++)
    {
        var = 1;
        row = i>n-1?2*n-i-2:i;

        for(int j=0;j<n+row;j++)
        {
            if(row<n && j<n-1-row)
            {
                printf(" ");
            }
            else
            {
                printf("%d",var++);
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int row1;

    printf("Enter the no of rows: ");
    scanf("%d",&row1);

    pattern(row1);

    return 0;
}