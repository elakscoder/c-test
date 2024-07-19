#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void alternate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i%2)//odd
        {
            if(arr[i] < arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
            }
        }
        else//even
        {
            if(arr[i] > arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
            }
           
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    

    int n = 7;

    alternate(arr,n);

    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}