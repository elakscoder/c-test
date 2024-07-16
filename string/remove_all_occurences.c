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

void remov(char *str,int i,int len)
{
    int j = 0;

    for(j=i;str[j+len] != '\0';j++)
    {
        str[j] = str[j+len];
    }

    str[j] = '\0';
}

int check(char *str,char *rem,int i,int len)
{
    int right = 0;

    for(int j=i;j<i+len;j++)
    {
        if(str[j] != rem[right++])
        {
            return 0;
        }
    }

    return 1;
}

void traverse(char *str,char *rem)
{
    int len = length(rem);

    for(int i=0;str[i] != '\0';i++)
    {
        if(check(str,rem,i,len))
        {
            remov(str,i,len);
            i--;
        }
    }
}

int main()
{
    char str[n];
    char rem[n];

    printf("Enter the string: ");
    scanf("%[^\n]",str);

    printf("Enter the string to remove: ");
    scanf("%s",rem);
    
    traverse(str,rem);

    printf("%s",str);
    return 0;
}