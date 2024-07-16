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

    for(j=i;str[j+(len - i)] != '\0';j++)
    {
        str[j] = str[j+(len - i)];
    }

    str[j] = '\0';
}

int check(char *str,char *rem,int i,int len)
{
    int right = 0;

    for(int j=i;j<len;j++)
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
    int len = length(str);
    int r = 0;
    int i = 0;

    printf("i = %d\n",i);
    printf("r = %d\n",r);
    printf("len = %d\n",len);

    while(str[r] != '\0')
    {
        r = i;

        while(str[r] != ' ' && str[r] != '\0')
        {
            r++;
        }


        printf("i = %d\n",i);
       printf("r = %d\n",r);
        printf("len = %d\n",len); 

        if(check(str,rem,i,r))
        {
            remov(str,i,r);
        }

        if(r+1<len)
        {
            i = r+1;
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
    scanf(" %s",rem);
    
    traverse(str,rem);

    printf("%s",str);
    return 0;
}