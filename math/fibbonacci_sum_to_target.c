#include<stdio.h>

int sum (int arr[],int n,int target)
{
    int sum = 0;
    int r = n-1;

    while(r>=0)
    {
        sum = sum + arr[r];

        if(sum>target)
        {
            sum = sum - arr[r];
            r--;
        }
        else
        {
            printf("%d ",arr[r]);
            r = r-2;
        }
    }
}

int fibbo(int first,int second,int n,int arr[],int *index)
{
    int sum = 0;
    int i = 0;

    for(i=0;arr[i-1]<n;i++)
    {
        sum = first + second;
        first = second;
        second = sum;
        arr[i] = sum;
    }

    return i;

}

int main()
{
    int n;
    int first = 0;
    int second = 1;
    int arr[100] = {0};
    int index = 0;

    printf("Enter n: ");
    scanf("%d",&n);

    int val = fibbo(first,second,n,arr,&index);
    
    sum(arr,val,n);

    return 0;
}