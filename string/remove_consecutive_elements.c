#include <stdio.h>
#define len 1000

void remov(char *str, int i)
{
    while (str[i + 1] != '\0')
    {
        str[i] = str[i + 1];
        i++;
    }

    str[i] = '\0';
}
void consec(char *str)
{
    int i = 0;
    char ele;
    while (str[i] != '\0')
    {
        ele = str[i];

        if (ele == str[i + 1])
        {
            remov(str, i);
            i--;
        }

        i++;
    }
}

int main()
{
    char str[len];

    printf("Enter string: ");
    scanf("%s", str);

    printf("The input string is: %s", str);

    consec(str);

    printf("The output string is: %s", str);

    return 0;
}