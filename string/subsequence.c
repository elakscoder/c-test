#include <stdio.h>
#define n 1000

int print(char *str, char *c)
{
    int i = 0;
    int j = 0;
    while (str[i])
    {
        if (str[i] == c[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    if (c[j] == '\0')
    {
        return 1;
    }

    return 0;
}

int main()
{
    char str[n];
    char c[n];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    printf("Enter search string: ");
    scanf("%s", c);

    if (print(str, c))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
