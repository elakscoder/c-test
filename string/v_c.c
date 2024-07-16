#include<stdio.h>
#define n 20

int present(char a)
{
    char small[5] = "aeiou";

    for(int i=0;small[i]!='\0';i++)
    {
        if(a == small[i])
        {
            return 0;
        }
        if(a == small[i]-32)
        {
            return 0;
        }
        
    }

    return 1;
}

void count(char *str)
{
    int vowels = 0;
    int conso = 0;

    for(int i=0;str[i] != '\0';i++)
    {
        if(present(str[i]))
        {
            conso++;
        }
        else
        {
            vowels++;
        }
    }

    printf("No of vowels: %d\n",vowels);
    printf("No.of conso:  %d",conso);
}

int main()
{
    char str[n];

    printf("Enter the string: ");
    scanf("%s",str);
    
    count(str);

    return 0;
}