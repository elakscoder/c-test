#include<stdio.h>
#define n 100

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

void pattern(char *str,int len)
{
    for(int i=0; i<len; i++)
    {
        for(int j=0; j<len; j++)
        {
            if( j==i || j == len-1-i )
            {
                printf("%c",str[i]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}



int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    int len = length(str);

    pattern(str,len);

    return 0;
}