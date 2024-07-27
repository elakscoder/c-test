#include <stdio.h>
#define n 1000

int length(char *str)
{
    int cnt = 0;

    while (*str != '\0')
    {
        cnt++;
        str++;
    }

    return cnt;
}

int check(int i, char *str, char *search)
{
    int len = length(search);
    for (int j = i; j < len + i; j++)
    {
        if (*(str + j) != *search)
        {
            return 0;
        }
        search++;
    }

    return 1;
}

int searc(char *str, char *search, int *index)
{
    int len1 = length(str);
    *index = 0;

    for (int i = 0; i < len1; i++)
    {
        if (check(i, str, search))
        {
            *index = i;
            return 1;
        }
    }
}
int main()
{
    char str[n];
    char search[n];
    int index = 0;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter string to search: ");
    scanf("%s", search);

    if (searc(str, search, &index))
    {
        printf("True");
        printf("\nIndex: %d", index);
    }
    else
    {
        printf("False");
    }

    return 0;
}