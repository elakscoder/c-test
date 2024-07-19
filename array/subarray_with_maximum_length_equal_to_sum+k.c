#include<stdio.h>

int length(int arr[],int n,int target,int *start,int *end)
{
    int sum = 0;
    int max = 0;
    for(int i=0;i<n;i++)
    {
        sum = 0;

        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            if(sum == target && (j-i+1)>max)
            {
                max = j-i+1;
                *start = i;
                *end = j;
            }
        }
    }

    printf("Length: %d\n",max);
    printf("Start index: %d\n",*start);
    printf("End index: %d\n",*end);
   
}

int main()
{
    int arr[] = {5,6,-5,5,3,5,2,2,-4};
    int n = 9;
    int target = 8;
    int start = 0;
    int end = 0;

    length(arr,n,target,&start,&end);

    for(int i=start;i<=end;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}