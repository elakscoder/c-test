#include<stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
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

void scan(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void freq(int arr[],int n)
{
    int element = arr[0];
    int val = 1;

    for(int i=1;i<n+1;i++)
    {
        if(arr[i] == element)
        {
            val++;
        }
        else
        {
            printf("%d occurs %d times\n",element,val);
            element = arr[i];
            val = 1;
        }
    }
}

int main()
{
    int n;

    printf("Enter the no of elements: ");
    scanf("%d",&n);

    int arr[n];

    scan(arr,n);

    sort(arr,n);

    freq(arr,n);

    return 0;
}

