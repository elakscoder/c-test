#include<stdio.h>

void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

void print(int arr[],int n)
{
    printf("\n");

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

void merge(int n1,int n2,int ans[],int arr1[],int arr2[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while(i < n1 && j < n2)
    {
        if(arr1[i]<arr2[j])
        {
            ans[k++] = arr1[i];
            i++;
        }
        else if(arr2[j]<arr1[i])
        {
            ans[k++] = arr2[j];
            j++;
        }
        else{

            ans[k++] = arr1[i];
            ans[k++] = arr2[j];
            i++;
            j++;
        }
    }

    while(i<n1)
    {
        ans[k++] = arr1[i++];
    }

    while(j<n2)
    {
        ans[k++] = arr2[j++];
    }
}

int main()
{
    int n1;

    printf("Enter the n1: ");
    scanf("%d",&n1);

    int arr1[n1];

    scan(arr1,n1);

    sort(arr1,n1);

    printf("The input array1 is: ");
    print(arr1,n1);

    int n2;

    printf("Enter the n1: ");
    scanf("%d",&n2);

    int arr2[n2];

    scan(arr2,n2);

    sort(arr2,n2);

    printf("The input array2 is: ");
    print(arr2,n2);

    int n = n1+n2;

    int ans[n];

    merge(n1,n2,ans,arr1,arr2);

    printf("merged array");
    print(ans,n);

    return 0;
}