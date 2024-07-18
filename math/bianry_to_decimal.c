#include<stdio.h>

int power(int rem,int cnt)
{
    int sum = 1;

    for(int i=0;i<cnt;i++)
    {
        sum = sum *2;
    }

    return rem * sum;
}

int convertbtod(int n)
{
    int rem = 0;
    int sum = 0;
    int cnt  = 0;

    while(n)
    {
        rem = n%10;
        if(rem != 0)
        {
            sum = sum + power(rem,cnt);
        }
        cnt ++;
        n = n/10;

    }

    return sum;
}

int main()
{
    int binary;

    printf("Enter the bianry: ");
    scanf("%d",&binary);

    printf("THe given binary num is: %d\n",binary);

    printf("The decimal conversion is: %d",convertbtod(binary));

    return 0;
}