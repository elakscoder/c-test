#include<stdio.h>
#define n 50

void compare(char *str1,char *str2)
{
    while(*str1 && *str2 && *str1 == *str2)
    {
        str1++;
        str2++;
    }

    if(*str1 - *str2)
    {
        printf("String is not equal");
    }
    else
    {
        printf("String is equal");
    }
}

int main()
{
    char str1[n];
    char str2[n];

    printf("Enter the string1: ");
    scanf("%s",str1);

    printf("Enter the string2: ");
    scanf("%s",str2);

    compare(str1,str2);

    return 0;

}