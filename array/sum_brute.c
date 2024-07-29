#include <stdio.h>
#define row 1000

void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int check(int arr[], int sum, int r)
{
    for (int i = 0; i < r; i++)
    {
        if (arr[i] == sum)
        {
            return 0;
        }
    }

    return 1;
}

void print(int n, int target, int arr[])
{
    sort(n, arr);
    int sum = 0;
    int mat[row][4];
    int r = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if ((arr[i] + arr[j] + arr[k] + arr[l]) == target)
                    {
                        sum = (arr[i] * 1000) + (arr[j] * 100) + (arr[k] * 10) + (arr[l] * 1);
                        if (check(arr, sum, r))
                        {
                            arr[r] = sum;
                            r++;
                        }
                    }
                }
            }
        }
    }

    for (int i = 0; i < r; i++)
    {
        printf("%04d\n", arr[i]);
    }
}

int main()
{
    int n;
    int k;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    print(n, k, arr);

    return 0;
}