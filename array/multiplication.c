#include<stdio.h>

void mult(int arr[],int n)
{
    int ans[n];
    int sum = 0;

    for(int i=0;i<n;i++)
    {
        ans[i] = arr[i];
    }

    for(int i=0;i<n;i++)
    {
        arr[i] = 1;

        for(int j=0;j<n;j++)
        {
            if(i != j)
            {
                arr[i] = arr[i] * ans[j];
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
    mult(arr,n);

    return 0;
}