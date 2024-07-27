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

void rotate(char *str)
{

    int len = length(str);
    char temp = str[0];
    for (int i = 1; i < len; i++)
    {
        str[i - 1] = str[i];
    }
    str[len - 1] = temp;
}

void pattern(char *str)
{
    int len = length(str);
    int index = 0;
    for (int i = 0; i < len; i++)
    {
        index = 0;

        for (int j = 0; j < len; j++)
        {
            if (j >= len - 1 - i)
            {
                printf("%c", str[index++]);
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}

int main()
{
    char str[n];

    printf("Enter string: ");
    scanf("%s", str);

    int len = length(str);

    for (int i = 0; i < len / 2; i++)
    {
        rotate(str);
    }

    pattern(str);

    return 0;
}