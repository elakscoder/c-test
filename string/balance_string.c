#include<stdio.h>
#define n 50

int length(char *str)
{
    int cnt = 0;

    while(*str != '\0')
    {
        cnt ++;
        str++;
    }

    return cnt;
}

int findopen(char *str,int index,char *ans)
{
    int flag = 0;

    for(int i = index-1;i>0;i--)
    {
        if(str[i] == '(')
        {
            ans[i] = '(';
            flag = 1;
            break;
        }
    }

    return 1;
}
void balance(char *str,int len,char *ans)
{

    ans[0] = '(';
    ans[len-1] = ')';
    ans[len] = '\0';
    
    for(int i=1;i<len-1;i++)
    {
        if(str[i] == ')')
        {
            if(findopen(str,i,ans))
            {
                ans[i] = str[i];
            }
        }
        else if(str[i] != '(' && str[i] != ')')
        {
            ans[i] = str[i];
        }
    }
}
int main()
{
    char str[n];
    char ans[n];

    for(int i=0;i<n;i++)
    {
        ans[i] = -1;
    }

    printf("Enter the string: ");
    scanf("%s",str);
    int len = length(str);
    balance(str,len,ans);

    for(int i=0;i<len;i++)
    {
        printf("%c",ans[i]);
    }

    /* printf("%s",ans); */

    return 0;
}