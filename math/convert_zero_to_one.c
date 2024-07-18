#include<stdio.h>

int power(int rem,int cnt)
{
    int ans = 1;

    for(int i=0;i<cnt;i++)
    {
        ans = ans *10 ;
    }

    return rem * ans;
}

int convert(int n,int prev)
{
    int rem = 0;
    int ans = 0;
    int cnt = 0;

    while(n)
    {
        rem = n%10;
        if(rem == 0)
        {
            rem = prev;
        }
        ans = ans + power(rem,cnt);
        cnt++;
        n = n/10;
    }

    return ans;
}

int main()
{
    int n;
    int prev;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter the digit to change: ");
    scanf("%d",&prev);

    

    printf("Entered number is: %d\n",n);

    printf("The converted number is: %d",convert(n,prev));

    return 0;
}