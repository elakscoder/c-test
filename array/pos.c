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

int main()
{
    int n;
    int insert;
    int index;

    printf("Enter the no of elements: ");
    scanf("%d",&n);

    int arr[n + 1];

    scan(arr,n);

    printf("Before inserting: ");
    print(arr,n);

    printf("\nEnter the element to insert: ");
    scanf("%d",&insert);

    printf("Enter the index: ");
    scanf("%d",&index);

    for(int i=0;i<n-index;i++)
    {
        arr[n-i] = arr[n-1-i];
    }

    arr[index] = insert;

    printf("After inserting: ");
    print(arr,n+1);

    return 0;
    
}