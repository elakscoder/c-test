#include<stdio.h>
#define n 50

void concatenate(char *str1,char *str2)
{
    
    while(*str1 != '\0')
    {
        str1++;
    }

    while(*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    } 

    *str1 = '\0';
}

int main()
{
    char str1[n];
    char str2[n];

    printf("Enter the string1: ");
    scanf("%[^\n]%*c",str1);

    printf("Enter the string2: ");
    scanf("%[^\n]%*c",str2); 

    concatenate(str1,str2);

    printf("%s",str1);

    return 0;
}