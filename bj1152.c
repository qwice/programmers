#include <stdio.h>

int main()
{
    char s[1000000];
    int count = 0;

    scanf("%[^\n]s", s);
    if (s[0] == ' ')
        count--;
    for (int i = 0; s[i] != NULL; i++)
    {
        if (s[i] == ' ')
            count++;
        if (s[i] == ' ' && s[i + 1] == 0)
            count--;
    }
    printf("%d", count + 1);
}