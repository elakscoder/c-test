#include<stdio.h>

int duplicates(int arr[],int n)
{
    int dup[100] = {0};
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        dup[arr[i]]++;
    }

    for(int i=0;i<100;i++)
    {
        if(dup[i]>1)
        {
            ans++;
        }
    }

    return ans;
}

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

int main()
{
    int n;

    printf("Enter the n: ");
    scanf("%d",&n);

    int arr[n];

    scan(arr,n);

    printf("The input array is: ");
    print(arr,n);

    int dup = duplicates(arr,n);

    printf("\nThe number of duplicates is: %d",dup);

    return 0;
}