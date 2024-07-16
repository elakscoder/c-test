#include<stdio.h>

int search(int arr[],int n,int target)
{
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = (low + high)/2;

        if(arr[mid] == target)
        {
            while(arr[mid] == target && mid < n - 1)
            {
                mid++;
            }

            return mid ;
        }
        else if(arr[mid]<=target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }

    }
    return 0;
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
    int target;

    printf("Enter the no of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements: ");
    scan(arr,n);

    printf("Enter the target: ");
    scanf("%d",&target);

    int ans = search(arr,n,target);

    printf("%d",ans);

    return 0;

}