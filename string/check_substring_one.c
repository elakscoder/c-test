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

int searc(char *str, char *search, int *index)
{
    int len1 = length(str);
    *index = 0;
    int i = 0;
    int j = 0;
    while (str[i] != '\0')
    {
        if (*(str + i) == *(search + j))
        {
            *index = i;
            i++;
            j++;
        }
        else
        {
            j = 0;
            i++;
        }
    }
    if (search[j] == '\0')
    {
        return 1;
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

    int len = length(search);
    if (searc(str, search, &index))
    {
        printf("True");
        printf("\nIndex: %d", index - len + 1);
    }
    else
    {
        printf("False");
    }

    return 0;
}