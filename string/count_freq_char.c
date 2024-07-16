#include<stdio.h>
#define n 50
#define ascii 128

void freq(char *str)
{
    int hash[ascii] = {0};

    for(int i=0; str[i]!= '\0'; i++)
    {
        hash[str[i]]++;
    }
    
    for(int i=0; str[i]!='\0'; i++)
    {
        if(hash[str[i]]>0)
        {
            printf("%c occurs %d times\n",str[i],hash[str[i]]);
            hash[str[i]] = 0;
        }
    }
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);

    freq(str);

    return 0;
}