#include<stdio.h>

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void scan(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void left(int arr[],int n,int ans[],int d)
{
    int index = 0;

    if(d>n)
    {
        d = d % n;
    }

    for(int i=d;i<n;i++)
    {
        ans[index++] = arr[i];
    }
    for(int i=0;i<d;i++)
    {
        ans[index++] = arr[i];
    }
}

int main()
{
    int n;
    int d;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter no.of rotations: ");
    scanf("%d",&d);

    int arr[n];

    printf("Enter the array elements: ");
    scan(arr,n);

    int ans[n];

    left(arr,n,ans,d);

    print(ans,n);

    return 0;
}