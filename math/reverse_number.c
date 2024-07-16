#include<stdio.h>

int reverse(int n)
{
    int ans = 0;

    while(n)
    {
        int rem = n%10;
        ans = (ans*10)+rem;
        n=n/10;
    }
    
    return ans;
}

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d",&n);

    printf("Entered number is: %d\n",n);
    printf("After reversing: %d",reverse(n));

    return 0;
}