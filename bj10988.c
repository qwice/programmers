#include <stdio.h>

int main()
{
    int j;
    char s[100];

    scanf("%s", s);
    for (j = 0; s[j] != 0; j++)
    {
        if (s[j + 1] == 0)
            break;
    }
    for (int k = 0; k < j; k++) // for (int k = 0; k < (j / 2); k++) 왜틀릴까
    {
        if (s[k] != s[j - k])
        {
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}