#include <stdio.h>
#define n 1000

void print(char *str, char *c, int index)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (index <= 0)
        {
            printf("%c", str[i]);
        }
        if (str[i] == c[j])
        {
            index--;
        }
    }
}

int main()
{
    char str[n];
    char c[n];
    int index;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    printf("Enter index: ");
    scanf("%d", &index);

    printf("Enter character: ");
    scanf("%s", c);

    print(str, c, index);

    return 0;
}
