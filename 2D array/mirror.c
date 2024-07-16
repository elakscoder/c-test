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
    int var2 = 0;

    for(int i=0;i<n;i++)
    {
        var = 0;

        for(int j=0;j<n+i;j++)
        {
            if(j<n-1-i)
            {
                printf(" ");
            }
            else
            {
                if(j<=n-1)
                {
                     printf("%d",++var);
                }
                else
                {
                    printf("%d",--var);
                }
               
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