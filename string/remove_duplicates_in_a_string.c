#include<stdio.h>
#define ascii 127
#define n 20

void countDistinct(char *str)
{
    int hash[ascii] = {0};
    int index = 0;

    for(int i=0;str[i]!='\0';i++)
    {
        hash[str[i]]++;
        
        if(hash[str[i]]==1)
        {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    countDistinct(str);

    printf("%s",str);

    return 0;
}