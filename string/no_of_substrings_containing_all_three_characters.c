#include<stdio.h>
#define n 50

int length(char *str)
{
    int cnt = 0;

    while(*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}

int count(char *str)
{
    int hash[3] = {0};
    int len = length(str);
    int sum = 0;


    int r = len - 1;
    int l = len - 1;



    while(l>=0)
    {
        hash[str[l]-'a']++;

        while((r-l+1)>3)
        {
            hash[str[r]-'a']--;
            r--;
        }

        if(hash[0] == 1 && hash[1] == 1 && hash[2] == 1)
        {
            sum = sum + l+1;
        }
        
        l--;
    }

    return sum;
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    int ans = count(str);

    printf("count : %d",ans);

    return 0;
}