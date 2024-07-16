#include<stdio.h>
#define n 50
#define ascii 128

void freq(char *str)
{
    int hash[ascii] = {0};
    int index = 0;

    for(int i=0; str[i]!= '\0'; i++)
    {
        hash[str[i]]++;

        if(hash[str[i]]>1)
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

    freq(str);

    printf("Output: %s",str);

    return 0;
}