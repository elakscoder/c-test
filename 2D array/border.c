#include <stdio.h>

int minimum(int a, int b, int c, int d)
{
    if (a <= b && a <= c && a <= d)
    {
        return a;
    }
    else if (b <= a && b <= c && b <= d)
    {
        return b;
    }
    else if (c <= a && c <= b && c <= d)
    {
        return c;
    }
    else
    {
        return d;
    }
}

void border(int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int top = i;
            int left = j;
            int bottom = row - 1 - i;
            int right = col - 1 - j;
            if (minimum(top, left, bottom, right) % 2 == 0)
            {
                printf("x ");
            }
            else
            {
                printf("o ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int row;
    int col;

    printf("Enter row: ");
    scanf("%d", &row);

    printf("Enter col: ");
    scanf("%d", &col);

    border(row, col);

    return 0;
}